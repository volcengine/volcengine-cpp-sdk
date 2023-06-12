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
#ifndef VOLCENGINE_HTTPCLIENT_H_
#define VOLCENGINE_HTTPCLIENT_H_

#include <memory>

#include "HttpRequest.h"
#include "HttpResponse.h"

namespace volcengine {
    static bool hasInitHttpClient = false;
    struct HttpConfig {
        int requestTimeout;
        int tcpKeepAlive;
        int connectTimeout;
    };

    class HttpClient {
    public:
        HttpClient() {
            if (!hasInitHttpClient) {
                initGlobalState();
                hasInitHttpClient = true;
            }
        }

        explicit HttpClient(const HttpConfig &config);

        virtual ~HttpClient() {
            cleanupGlobalState();
            hasInitHttpClient = false;
        }

        static void initGlobalState();

        static void cleanupGlobalState();

        std::shared_ptr<HttpResponse>
        doRequest(const std::shared_ptr<HttpRequest> &request);

    private:
        int requestTimeout_;
        int tcpKeepAlive_;
        int connectTimeout_;
    };
}
#endif // !VOLCENGINE_HTTPCLIENT_H_