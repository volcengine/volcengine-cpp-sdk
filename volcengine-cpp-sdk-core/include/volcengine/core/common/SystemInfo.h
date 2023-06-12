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
#ifndef VOLCENGINE_SYSTEM_INFO_H_
#define VOLCENGINE_SYSTEM_INFO_H_

#include "volcengine/core/Version.h"

namespace volcengine {
#ifdef WIN32
    static const char* PLATFORM = "Windows";
#elif __linux__
    static const char* PLATFORM = "Linux";
#elif __APPLE__
    static const char *PLATFORM = "Darwin";
#else
    static const char* PLATFORM = "Unknown";
#endif

#ifdef __aarch64__
    static const char* ARCH = "arm64";
#elif __x86_64__
    static const char *ARCH = "amd64";
#elif __i386__
    static const char* ARCH = "i386";
#else
    static const char* ARCH = "others";
#endif

    static std::string DefaultUserAgent() {
        std::stringstream ss;
        ss << "volcengine-cpp-sdk/" << VOLCENGINE_SDK_VERSION << "(" << PLATFORM << '/' << ARCH << ")";
        return ss.str();
    }
}
#endif // !VOLCENGINE_SYSTEM_INFO_H_

