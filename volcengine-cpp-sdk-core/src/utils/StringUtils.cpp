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
#include "volcengine/core/utils/StringUtils.h"
#include <sstream>
#include <iomanip>
#include <cstring>
#include <functional>

using namespace volcengine;

bool StringUtils::startsWithIgnoreCase(const std::string &src_str,
                                       const std::string &prefix) {
    return src_str.size() >= prefix.size() &&
           strncasecmp(src_str.c_str(), prefix.c_str(), prefix.size()) == 0;
}

std::string StringUtils::toLower(const std::string &input) {
    char *inp = (char *) input.c_str();
    std::stringstream ret;
    for (int i = 0; i < input.length(); ++i) {
        if (inp[i] >= 'A' && inp[i] <= 'Z') {
            char low = inp[i] + 32;
            ret << low;
        } else {
            ret << inp[i];
        }
    }
    return ret.str();
}

std::string StringUtils::stringToHex(const unsigned char *input, int length) {
    static const char hex_digits[] = "0123456789abcdef";
    std::string output;
    for (int i = 0; i < length; ++i) {
        output.push_back(hex_digits[input[i] >> 4]);
        output.push_back(hex_digits[input[i] & 15]);
    }
    return output;
}

std::string StringUtils::stringReplace(const std::string &input, const std::string &substr, const std::string &newstr) {
    std::string ret(input);
    std::string::size_type pos = 0;
    while ((pos = ret.find(substr)) != std::string::npos) {
        ret.replace(pos, substr.length(), newstr);
    }
    return ret;
}

bool StringUtils::isValidUTF8(const std::string &input) {
    int byteLength = 0;
    unsigned char uc;
    for (char i: input) {
        uc = i;
        // 判断不可见 ascii 字符
        if (uc < 32 || uc == 127) return false;
        if (byteLength == 0) {
            if (uc >= 0x80) {
                if (uc >= 0xFC && uc <= 0xFD) byteLength = 6;
                else if (uc >= 0xF8) byteLength = 5;
                else if (uc >= 0xF0) byteLength = 4;
                else if (uc >= 0xE0) byteLength = 3;
                else if (uc >= 0xC0) byteLength = 2;
                else return false;
                byteLength--;
            }
        } else {
            if ((uc & 0xC0) != 0x80) return false;
            if ((uc < 32)) return false;
            byteLength--;
        }
    }
    if (byteLength > 0) return false;
    return true;
}

std::string StringUtils::URLEncode(const char *unsafe) {
    std::stringstream escaped;
    escaped.fill('0');
    escaped << std::hex << std::uppercase;

    size_t unsafeLength = strlen(unsafe);
    for (auto i = unsafe, n = unsafe + unsafeLength; i != n; ++i)
    {
        char c = *i;
        if (IsAlnum(c) || c == '-' || c == '_' || c == '.' || c == '~')
        {
            escaped << (char)c;
        }
        else
        {
            //this unsigned char cast allows us to handle unicode characters.
            escaped << '%' << std::setw(2) << int((unsigned char)c) << std::setw(0);
        }
    }

    return escaped.str();
}
