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
#ifndef VOLCENGINE_COMMON_H_
#define VOLCENGINE_COMMON_H_
#include <map>
#include <string>
#include <vector>

namespace volcengine {
    static const char *MethodGet = "GET";
    static const char *MethodHead = "HEAD";
    static const char *MethodPost = "POST";
    static const char *MethodPut = "PUT";
    static const char *MethodDelete = "DELETE";

    static const char *SchemeHTTP = "HTTP";
    static const char *SchemeHTTPS = "HTTPS";

    static const int Success = 0;
    static const int Refused = -1;
    static const int otherErr = -2;

/**
     * HTTP header
 */
    static const char *HEADER_USER_AGENT = "User-Agent";
    static const char *HEADER_CONTENT_LENGTH = "Content-Length";
    static const char *HEADER_CONTENT_TYPE = "Content-Type";
    static const char *HEADER_CONTENT_MD5 = "Content-MD5";
    static const char *HEADER_CONTENT_LANGUAGE = "Content-Language";
    static const char *HEADER_CONTENT_ENCODING = "Content-Encoding";
    static const char *HEADER_CONTENT_DISPOSITION = "Content-Disposition";
    static const char *HEADER_LAST_MODIFIED = "Last-Modified";
    static const char *HEADER_CACHE_CONTROL = "Cache-Control";

}

#endif // !VOLCENGINE_COMMON_H_