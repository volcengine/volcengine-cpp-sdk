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
#ifndef VOLCENGINE_HTTP_RESPONSE_H_
#define VOLCENGINE_HTTP_RESPONSE_H_
#include <memory>
#include <string>

#include "HttpRequest.h"
#include "volcengine/core/utils/MapUtils.h"

namespace volcengine {
    class HttpResponse {
    public:
        HttpResponse();

        ~HttpResponse() = default;

        void setHeader(const std::string &key, const std::string &value) {
            headers_[key] = value;
        }

        bool hasHeader(const std::string &key) {
            return headers_.find(key) != headers_.end();
        }

        std::string getHeaderValueByKey(const std::string &key) {
            return MapUtils::findValueByKeyIgnoreCase(headers_, key);
        }

        const std::map<std::string, std::string> &Headers() { return headers_; };

        void setBody(const std::shared_ptr<std::iostream> &body) { body_ = body; };

        std::shared_ptr<std::iostream> &Body() { return body_; };

        void setStatusCode(int code) { statusCode_ = code; }

        int statusCode() const { return statusCode_; }

        void setStatusMsg(const std::string &msg) { statusMsg_ = msg; }

        std::string statusMsg() { return statusMsg_; }

        void setStatus(const int &status) { status_ = status; }

        int status() const { return status_; }

    private:
        int status_;
        mutable int statusCode_;
        mutable std::string statusMsg_;
        std::map<std::string, std::string> headers_;
        std::shared_ptr<std::iostream> body_;
    };
}
#endif // !VOLCENGINE_HTTP_RESPONSE_H_