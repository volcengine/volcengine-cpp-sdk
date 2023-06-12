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
#ifndef VOLCENGINE_VOLCENGINE_RESPONSE_H_
#define VOLCENGINE_VOLCENGINE_RESPONSE_H_

#include <map>
#include <memory>
#include <utility>
#include "volcengine/core/model/RequestInfo.h"
#include "volcengine/core/common/Common.h"
#include "volcengine/core/utils/MapUtils.h"

namespace volcengine {
    class VolcengineResponse {
    public:
        explicit VolcengineResponse(std::shared_ptr<std::iostream> content) : content_(std::move(content)) {}

        ~VolcengineResponse() = default;

        int getStatusCode() const { return statusCode_; }

        void setStatusCode(int statusCode) { statusCode_ = statusCode; }

        const std::string &getStatusMsg() const { return statusMsg_; }

        void setStatusMsg(const std::string &statusMsg) { statusMsg_ = statusMsg; }

        int64_t getContentLength() const { return contentLength_; }

        void setContentLength(int64_t contentLength) { contentLength_ = contentLength; }

        std::string findHeader(const std::string &key) {
            return MapUtils::findValueByKeyIgnoreCase(headers_, key);
        }

        const std::map<std::string, std::string> &getHeaders() const {
            return headers_;
        }

        void setHeaders(const std::map<std::string, std::string> &headers) {
            headers_ = headers;
        }

        std::shared_ptr<std::iostream> getContent() const { return content_; }

        void setContent(const std::shared_ptr<std::iostream> &content) {
            content_ = content;
        }

        const std::string &getResponseBody() const {
            return responseBody;
        }

        void setResponseBody(const std::string &responseBody) {
            VolcengineResponse::responseBody = responseBody;
        }

    private:
        int statusCode_;
        std::string statusMsg_;
        int64_t contentLength_;
        std::map<std::string, std::string> headers_;
        std::shared_ptr<std::iostream> content_;
        std::string responseBody;
    };
}
#endif // !VOLCENGINE_VOLCENGINE_RESPONSE_H_