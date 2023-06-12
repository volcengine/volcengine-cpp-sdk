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
#ifndef VOLCENGINE_CRYPTO_UTILS_H_
#define VOLCENGINE_CRYPTO_UTILS_H_

#include <string>

namespace volcengine {
    static const char base64_url_alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                                               'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                                               'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                                               'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                                               '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};

    class CryptoUtils {
    public:
        static std::string md5Sum(const std::string &input);

        static std::string base64Encode(const unsigned char *input, size_t inputLen);

        static std::string sha256(const std::string &input);
    };
}

#endif // !VOLCENGINE_CRYPTO_UTILS_H_
