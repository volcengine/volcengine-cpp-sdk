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

#include <string>
#include <sstream>
#include <openssl/md5.h>
#include <openssl/sha.h>
#include "volcengine/core/utils/CryptoUtils.h"
#include "../external/json/json.hpp"

using namespace volcengine;

std::string CryptoUtils::md5Sum(const std::string &input) {
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    unsigned char md5Res[MD5_DIGEST_LENGTH];
    MD5_Final(md5Res, &ctx);
    return base64Encode(md5Res, MD5_DIGEST_LENGTH);
}

std::string CryptoUtils::base64Encode(const unsigned char *input, size_t inputLen) {
    std::string ret;
    size_t len_encoded = (inputLen + 2) / 3 * 4;
    ret.reserve(len_encoded);

    unsigned int pos = 0;
    while (pos < inputLen) {
        ret.push_back(base64_url_alphabet[(input[pos + 0] & 0xfc) >> 2]);
        if (pos + 1 < inputLen) {
            ret.push_back(base64_url_alphabet[((input[pos + 0] & 0x03) << 4) + ((input[pos + 1] & 0xf0) >> 4)]);
            if (pos + 2 < inputLen) {
                ret.push_back(base64_url_alphabet[((input[pos + 1] & 0x0f) << 2) + ((input[pos + 2] & 0xc0) >> 6)]);
                ret.push_back(base64_url_alphabet[input[pos + 2] & 0x3f]);
            } else {
                ret.push_back(base64_url_alphabet[(input[pos + 1] & 0x0f) << 2]);
                ret.push_back('=');
            }
        } else {
            ret.push_back(base64_url_alphabet[(input[pos + 0] & 0x03) << 4]);
            ret.push_back('=');
            ret.push_back('=');
        }
        pos += 3;
    }
    return ret;
}

std::string CryptoUtils::sha256(const std::string &input) {
    SHA256_CTX ctx;
    SHA256_Init(&ctx);
    SHA256_Update(&ctx, input.c_str(), input.length());
    unsigned char sha256Res[SHA256_DIGEST_LENGTH];
    SHA256_Final(sha256Res, &ctx);
    std::stringstream ss;
    for (unsigned char sha256Re: sha256Res) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int) sha256Re;
    }
    return ss.str();
}
