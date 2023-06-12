/*
 * Copyright 2021-2023 Beijing Volcanoengine Technology Ltd All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "volcengine/core/auth/VolcengineAuthSigner.h"
#include "volcengine/core/auth/CredentialsProvider.h"
#include "volcengine/core/utils/StringUtils.h"
#include "volcengine/core/utils/CryptoUtils.h"

#include <ctime>
#include <utility>
#include <vector>
#include <sstream>
#include <algorithm>
#include <openssl/hmac.h>
#include <openssl/sha.h>
#include <cstring>
#include <thread>

namespace volcengine {
    VolcengineAuthSigner::VolcengineAuthSigner(const std::string &svc, const std::string &region,
                                               const std::shared_ptr<CredentialsProvider> &credentialsProvider) {
        svc_ = svc;
        region_ = region;
        credentialsProvider_ = credentialsProvider;
    }

    std::string transTimeToFormat(std::time_t &t, const char *format) {
        char timebuf[32] = {'\0'};
        std::tm gmttm{};
#ifdef _WIN32
        gmtime_s(&gmttm, &t);
#else
        gmtime_r(&t, &gmttm);
#endif
        std::strftime(timebuf, sizeof(timebuf), format, &gmttm);
        std::string ret(timebuf);
        return ret;
    }

    std::string joinMapToString(const std::vector<std::pair<std::string, std::string>> &KVs) {
        std::vector<std::string> keys(KVs.size());
        for (int i = 0; i < KVs.size(); ++i) {
            keys[i] = KVs[i].first;
        }
        std::sort(keys.begin(), keys.end());
        std::string ret;
        for (auto &key: keys) {
            if (key != keys[0]) {
                ret.append(";");
            }
            ret.append(key);
        }
        return ret;
    }

    bool compareByPairKey(const std::pair<std::string, std::string> &dataA,
                          const std::pair<std::string, std::string> &dataB) {
        return dataA.first < dataB.first;
    }

    std::map<std::string, std::string> VolcengineAuthSigner::signHeader(const std::shared_ptr<VolcengineRequest> &req) {
        // change time pass through param
        const auto &header = req->getHeaders();
        std::map<std::string, std::string> signedRes;

        auto signedHeader = this->signedHeader(header, false);
        // gen date for sign
        std::time_t now = utcTimeNow();
        const std::string &date = transTimeToFormat(now, iso8601Layout);
        signedHeader.emplace_back(StringUtils::toLower(v4Date), date);
        signedRes[v4Date] = date;

        Credentials cred = credentialsProvider_->credentials();
        if (!cred.getSessionToken().empty()) {
            signedHeader.emplace_back(StringUtils::toLower(v4SecurityToken), cred.getSessionToken());
            signedRes[v4SecurityToken] = cred.getSessionToken();
        }
        std::sort(signedHeader.begin(), signedHeader.end(), compareByPairKey);

        std::map<std::string, std::string> extra;
        auto signedQuery = this->signedQuery(req->getQueries(), extra);
        std::string contentSha256;
        if (!req->getBody().empty()) {
            contentSha256 = CryptoUtils::sha256(req->getBody());
        } else {
            contentSha256 = CryptoUtils::sha256("");
        }
        std::string sig = this->doSign(req->getMethod(), req->getPath(), contentSha256, signedHeader, signedQuery, now,
                                       cred);
        std::string credential;
        credential.append(cred.getAccessKeyId()).append("/")
                .append(transTimeToFormat(now, yyyyMMdd)).append("/")
                .append(region_)
                .append("/")
                .append(svc_)
                .append("/request");
        auto keys = joinMapToString(signedHeader);

        std::stringstream auth;
        auth << "HMAC-SHA256 Credential=" << credential << ",SignedHeaders=" << keys << ",Signature=" << sig;
//        std::cout << auth.str();
        signedRes[authorization] = auth.str();

        return signedRes;
    }

    std::map<std::string, std::string>
    VolcengineAuthSigner::signQuery(const std::shared_ptr<VolcengineRequest> &req, std::chrono::duration<int> ttl) {
        const auto &query = req->getQueries();
        std::map<std::string, std::string> extra;

        std::time_t now = utcTimeNow();
        std::string date = transTimeToFormat(now, iso8601Layout);

        Credentials cred = credentialsProvider_->credentials();
        std::string credential;
        credential.append(cred.getAccessKeyId()).append("/")
                .append(transTimeToFormat(now, yyyyMMdd)).append("/")
                .append(region_)
                .append("/")
                .append(svc_)
                .append("/")
                .append("request");
        extra[v4Date] = date;
        if (!cred.getSessionToken().empty()) {
            extra[v4SecurityToken] = cred.getSessionToken();
        }

        auto signedHeader = this->signedHeader(req->getHeaders(), true);
        signedHeader.emplace_back("host", req->getHost());
        std::sort(signedHeader.begin(), signedHeader.end(), compareByPairKey);

        auto keys = joinMapToString(signedHeader);
        auto signedQuery = this->signedQuery(query, extra);

        return extra;
    }

    bool VolcengineAuthSigner::isSigningHeader(const std::string &key, bool isSigningQuery) {
        if (key.empty()) {
            return false;
        }
        bool isCT = std::strcmp("content-type", key.c_str()) == 0;
        return isCT && !isSigningQuery;
    }

    bool VolcengineAuthSigner::isSigningQuery(const std::string &key) {
        return std::strcmp(v4SignatureLower, key.c_str()) != 0;
    }

    std::vector<std::pair<std::string, std::string>> VolcengineAuthSigner::signedHeader
            (const std::map<std::string, std::string> &header, bool isSignedQuery) {
        std::vector<std::pair<std::string, std::string>> signedRes;
        if (header.empty()) return signedRes;
        auto iter = header.begin();
        for (; iter != header.end(); iter++) {
            if (!iter->first.empty()) {
                std::string key(iter->first);
                std::string kk = StringUtils::toLower(key);
                if (this->isSigningHeader(kk, isSignedQuery)) {
                    signedRes.emplace_back(kk, iter->second);
                }
            }
        }
        return signedRes;
    }

    std::vector<std::pair<std::string, std::string>> VolcengineAuthSigner::signedQuery
            (const std::map<std::string, std::string> &query, std::map<std::string, std::string> extra) {
        std::vector<std::pair<std::string, std::string>> signedRes;
        if (!query.empty()) {
            for (const auto &iter: query) {
                if (this->isSigningQuery(StringUtils::toLower(iter.first))) {
                    signedRes.emplace_back(iter.first, iter.second);
                }
            }
        }
        if (!extra.empty()) {
            auto iter = extra.begin();
            for (; iter != extra.end(); iter++) {
                if (this->isSigningQuery(StringUtils::toLower(iter->first))) {
                    signedRes.emplace_back(iter->first, iter->second);
                }
            }
        }
        return signedRes;
    }

//std::string VolcengineAuthSigner::signingKey(const SignKeyInfo &info){
//  const std::string& sk(info.getCredential().getSecretAccessKey());
//  const std::string& date(info.getDate());
//  const std::string& region(info.getRegion());
//  unsigned int mdLen = 32;
//  unsigned char unsignedDate[32];
//  unsigned char unsignedRegion[32];
//  unsigned char unsignedService[32];
//  unsigned char unsignedOut[32];
//  HMAC(EVP_sha256(), sk.c_str(), sk.size(),
//       reinterpret_cast<const unsigned char *>(date.c_str()), date.size(), unsignedDate, &mdLen);
//  HMAC(EVP_sha256(), unsignedDate, 32,
//       reinterpret_cast<const unsigned char *>(region.c_str()), region.size(), unsignedRegion, &mdLen);
//  HMAC(EVP_sha256(), unsignedRegion, 32,
//        reinterpret_cast<const unsigned char *>("tos"), 3, unsignedService, &mdLen);
//  HMAC(EVP_sha256(), unsignedService, 32,
//       reinterpret_cast<const unsigned char *>("request"), 7, unsignedOut, &mdLen);
//  std::string res(std::to_string(unsignedOut);
//}

    std::string VolcengineAuthSigner::uriEncode(const std::string &in, bool encodeSlash) {
        int hexCount = 0;
        uint8_t uint8Char[in.length()];
        for (int i = 0; i < in.length(); i++) {
            uint8Char[i] = (uint8_t) (in[i]);
            if (uint8Char[i] == '/') {
                if (encodeSlash) {
                    hexCount++;
                }
            } else if (nonEscape.count(uint8Char[i]) == 0) {
                hexCount++;
            }
        }
        char encoded[in.length() + 2 * hexCount];
        for (int i = 0, j = 0; i < in.length(); i++) {
            if (uint8Char[i] == '/') {
                if (encodeSlash) {
                    encoded[j] = '%';
                    encoded[j + 1] = '2';
                    encoded[j + 2] = 'F';
                    j += 3;
                } else {
                    encoded[j] = uint8Char[i];
                    j++;
                }
            } else if (nonEscape.count(uint8Char[i]) == 0) {
                encoded[j] = '%';
                encoded[j + 1] = "0123456789ABCDEF"[uint8Char[i] >> 4];
                encoded[j + 2] = "0123456789ABCDEF"[uint8Char[i] & 15];
                j += 3;
            } else {
                encoded[j] = uint8Char[i];
                j++;
            }
        }
        std::string ret(encoded, encoded + sizeof(encoded));
        return ret;
    }

    std::string VolcengineAuthSigner::encodePath(const std::string &path) {
        if (path.empty()) {
            return "/";
        }
        return uriEncode(path, false);
    }

    std::string VolcengineAuthSigner::encodeQuery(std::vector<std::pair<std::string, std::string>> query) {
        if (query.empty()) return "";
        std::sort(query.begin(), query.end(), compareByPairKey);
        std::string buf;
        auto iter = query.begin();
        while (iter != query.end()) {
            if (iter != query.begin()) {
                buf.append("&");
            }
            auto keyEscaped = uriEncode(iter->first, true);
            buf.append(keyEscaped);
            buf.append("=");
            auto v = uriEncode(iter->second, true);
            buf.append(v);
            iter++;
        }
        return buf;
    }

    std::string
    VolcengineAuthSigner::canonicalRequest(const std::string &method, const std::string &path,
                                           const std::string &contentSha256,
                                           std::vector<std::pair<std::string, std::string>> header,
                                           std::vector<std::pair<std::string, std::string>> query) {
        auto split = "\n";
        std::string buf;

        buf.append(method).append(split).append(encodePath(path)).append(split);

        buf.append(encodeQuery(std::move(query))).append(split);

        std::vector<std::string> keys;
        std::sort(header.begin(), header.end(), compareByPairKey);
        for (const std::pair<std::string, std::string> &entry: header) {
            auto key = entry.first;
            keys.emplace_back(key);

            buf.append(key);
            buf.append(":");
            buf.append(entry.second);
            buf.append("\n");
        }
        buf.append(split);

        auto iter = keys.begin();
        while (iter != keys.end()) {
            if (iter != keys.begin()) {
                buf.append(";");
            }
            buf.append(*iter);
            iter++;
        }
        buf.append(split);

        buf.append(contentSha256);
        return buf;
    }

    std::string
    VolcengineAuthSigner::doSign(const std::string &method, const std::string &path, const std::string &contentSha256,
                                 const std::vector<std::pair<std::string, std::string>> &header,
                                 const std::vector<std::pair<std::string, std::string>> &query,
                                 std::time_t now, const Credentials &cred) {
        std::string split = "\n";
        std::string buf;

        std::string req = this->canonicalRequest(method, path, contentSha256, header, query);
//        std::cout << "canonicalRequest: " << req << std::endl;

        buf.append(signPrefix).append(split);

        buf.append(transTimeToFormat(now, iso8601Layout)).append(split);

        std::string date = transTimeToFormat(now, yyyyMMdd);
        buf.append(date)
                .append("/")
                .append(region_)
                .append("/")
                .append(svc_)
                .append("/request")
                .append(split);

        unsigned char sum[32];
        SHA256((unsigned char *) req.c_str(), req.length(), sum);
        std::string hexSum(StringUtils::stringToHex(sum, 32));
        buf.append(hexSum);

//        std::cout << "string to sign: " + buf << std::endl;

        unsigned int mdLen = 32;
        unsigned char unsignedDate[32];
        HMAC(EVP_sha256(), cred.getSecretAccessKey().c_str(), cred.getSecretAccessKey().size(),
             reinterpret_cast<const unsigned char *>(date.c_str()), date.size(), unsignedDate, &mdLen);
        unsigned char unsignedRegion[32];
        HMAC(EVP_sha256(), unsignedDate, 32,
             reinterpret_cast<const unsigned char *>(region_.c_str()), region_.size(), unsignedRegion, &mdLen);
        unsigned char unsignedService[32];
        HMAC(EVP_sha256(), unsignedRegion, 32,
             reinterpret_cast<const unsigned char *>(svc_.c_str()), svc_.size(), unsignedService, &mdLen);
        unsigned char signK[32];
        HMAC(EVP_sha256(), unsignedService, 32,
             reinterpret_cast<const unsigned char *>("request"), 7, signK, &mdLen);
        unsigned char sig[32];
        HMAC(EVP_sha256(), signK, 32,
             reinterpret_cast<const unsigned char *>(buf.c_str()), buf.size(), sig, &mdLen);
        return StringUtils::stringToHex(sig, 32);;
    }
}
