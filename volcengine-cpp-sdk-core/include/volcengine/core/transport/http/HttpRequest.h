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
#ifndef VOLCENGINE_HTTP_REQUEST_H_
#define VOLCENGINE_HTTP_REQUEST_H_
#include "volcengine/core/common/Common.h"
#include "Url.h"
#include <memory>
#include <sstream>
#include <string>

namespace volcengine {

    class HttpRequest {
    public:
        explicit HttpRequest(const std::string &method);

        ~HttpRequest();

        void setHeader(const std::string &key, const std::string &value) {
            headers_[key] = value;
        }

        void setHeaders(const std::map<std::string, std::string> &headers) { headers_ = headers; }


        const std::map<std::string, std::string> &Headers() const {
            return headers_;
        }

        std::shared_ptr<std::iostream> &Body() { return body_; }

        void setBody(const std::shared_ptr<std::iostream> &body) {
            body_ = body;
        }

        const std::string &method() { return method_; }

        void setMethod(const std::string &method) { method_ = method; }

        Url url() const { return url_; }

        void setUrl(const Url &url) { url_ = url; }

        std::shared_ptr<std::iostream> responseOutput() { return responseOutput_; };

        int64_t getContentLength() const { return contentLength_; }

        void setContentLength(int64_t contentLength) {
            contentLength_ = contentLength;
        }

    private:
        std::string method_;
        Url url_;
        int64_t contentLength_ = 0;
        std::map<std::string, std::string> headers_;
        std::shared_ptr<std::iostream> body_;
        std::shared_ptr<std::iostream> responseOutput_;
    };
}
#endif // !VOLCENGINE_HTTP_REQUEST_H_