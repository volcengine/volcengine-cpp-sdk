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
#ifndef VOLCENGINE_STRING_UTIL_H_
#define VOLCENGINE_STRING_UTIL_H_

#include <string>

namespace volcengine {
    class StringUtils {
    public:
        static bool startsWithIgnoreCase(const std::string &src_str,
                                         const std::string &prefix);

        static std::string toLower(const std::string &input);

        static std::string stringToHex(const unsigned char *input, int length);

        static std::string
        stringReplace(const std::string &input, const std::string &substr, const std::string &newstr);

        static bool isValidUTF8(const std::string &input);

        static std::string URLEncode(const char* unsafe);

        static bool IsAlnum(char c)
        {
            return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
        }
    };
}

#endif // !VOLCENGINE_STRING_UTIL_H_