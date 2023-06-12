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
#ifndef VOLCENGINE_VOLCENGINE_AUTH_SIGNER_H_
#define VOLCENGINE_VOLCENGINE_AUTH_SIGNER_H_

#include <list>
#include <memory>
#include <chrono>
#include <vector>
#include <set>
#include "AuthSigner.h"
#include "CredentialsProvider.h"
#include "StaticCredentialsProvider.h"

namespace volcengine {
    typedef std::time_t (*func)();

    static const char *signPrefix = "HMAC-SHA256";
    static const char *authorization = "Authorization";

    static const char *iso8601Layout = "%Y%m%dT%H%M%SZ";
    static const char *yyyyMMdd = "%Y%m%d";

    static const char *v4Date = "X-Date";
    static const char *v4SecurityToken = "X-Security-Token";

    static const char *v4SignatureLower = "x-signature";

    static const std::set<char> nonEscape = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
                                             'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                                             'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
                                             'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                                             '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', '_', '.', '~'};

    class VolcengineAuthSigner : public AuthSigner {
    public:
        VolcengineAuthSigner() = default;

        VolcengineAuthSigner(const std::string &svc, const std::string &region,
                             const std::shared_ptr<CredentialsProvider> &credentialsProvider);

        ~VolcengineAuthSigner() override = default;

        static bool isSigningHeader(const std::string &key, bool isSigningQuery);

        static bool isSigningQuery(const std::string &key);

        std::map<std::string, std::string> signHeader(const std::shared_ptr<VolcengineRequest> &req) override;

        std::map<std::string, std::string>
        signQuery(const std::shared_ptr<VolcengineRequest> &req, std::chrono::duration<int> ttl) override;

        static std::string uriEncode(const std::string &in, bool encodeSlash);

    private:
        std::vector<std::pair<std::string, std::string>>
        signedHeader(const std::map<std::string, std::string> &header, bool isSignedQuery);

        std::vector<std::pair<std::string, std::string>> signedQuery(const std::map<std::string, std::string> &query,
                                                                     std::map<std::string, std::string> extra);

        static std::string
        canonicalRequest(const std::string &method, const std::string &path, const std::string &contentSha256,
                         std::vector<std::pair<std::string, std::string>> header,
                         std::vector<std::pair<std::string, std::string>> query);

        std::string doSign(const std::string &method, const std::string &path, const std::string &contentSha256,
                           const std::vector<std::pair<std::string, std::string>> &header,
                           const std::vector<std::pair<std::string, std::string>> &query,
                           std::time_t now, const Credentials &cred);

        static std::string encodePath(const std::string &path);

        static std::string encodeQuery(std::vector<std::pair<std::string, std::string>> query);

        static std::time_t utcTimeNow() { return time(nullptr); }

    private:
        std::shared_ptr<CredentialsProvider> credentialsProvider_;
        std::string region_;
        std::string svc_;
    };
}
#endif // !VOLCENGINE_VOLCENGINE_AUTH_SIGNER_H_

