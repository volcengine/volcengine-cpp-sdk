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
#ifndef VOLCENGINE_REQUEST_BUILDER_H_
#define VOLCENGINE_REQUEST_BUILDER_H_

#include <utility>
#include "volcengine/core/auth/AuthSigner.h"
#include "volcengine/core/common/Common.h"

namespace volcengine {
    class HttpRange {
    public:
        HttpRange() = default;

        ~HttpRange() = default;

        HttpRange(int64_t start, int64_t end) : start_(start), end_(end) {}

        int64_t getStart() const { return start_; }

        void setStart(int64_t start) { start_ = start; }

        int64_t getEnd() const { return end_; }

        void setEnd(int64_t end) { end_ = end; }

        bool operator==(const HttpRange &rhs) const {
            return start_ == rhs.start_ && end_ == rhs.end_;
        }

        bool operator!=(const HttpRange &rhs) const { return !(rhs == *this); }

        std::string toString() const {
            std::string ret;
            ret.append("bytes=").append(std::to_string(start_)).append("-").append(std::to_string(end_));
            return ret;
        }

        bool isNull() const { return (start_ == 0 && end_ == 0) || start_ > end_; }

    private:
        int64_t start_ = 0;
        int64_t end_ = 0;
    };

    class RequestBuilder {
    public:
        RequestBuilder(std::shared_ptr<AuthSigner> signer,
                       std::string scheme, std::string host,
                       std::map<std::string, std::string> headers,
                       std::map<std::string, std::string> query)
                : signer_(std::move(signer)), scheme_(std::move(scheme)), host_(std::move(host)),
                  headers_(std::move(headers)), query_(std::move(query)) {}

        long getContentLength() const { return contentLength_; }

        void setContentLength(long contentLength) { contentLength_ = contentLength; }

        const HttpRange &getRange() const { return range_; }

        void setRange(const HttpRange &range) { range_ = range; }

        const std::map<std::string, std::string> &getHeaders() const { return headers_; }

        std::string findHeader(const std::string &key) { return MapUtils::findValueByKeyIgnoreCase(headers_, key); }

        void setHeaders(const std::map<std::string, std::string> &headers) { headers_ = headers; }

        const std::map<std::string, std::string> &getQuery() const { return query_; }

        void setQuery(const std::map<std::string, std::string> &query) { query_ = query; }

        bool isAutoRecognizeContentType() const { return autoRecognizeContentType_; }

        void setAutoRecognizeContentType(
                bool autoRecognizeContentType) { autoRecognizeContentType_ = autoRecognizeContentType; }

        void withHeader(const std::string &key, const std::string &value) {
            if (!value.empty()) {
                headers_[key] = value;
            }
        }

        void withQuery(const std::string &key, const std::string &value) { query_[key] = value; }

        std::shared_ptr<VolcengineRequest> Build(const std::string &method);

        std::shared_ptr<VolcengineRequest> Build(const std::string &method, std::shared_ptr<std::iostream> content);

        std::shared_ptr<VolcengineRequest> Build(const std::string &method, std::shared_ptr<std::iostream> content,const std::string &contentStr);

        std::shared_ptr<VolcengineRequest> build(const std::string &method);

    private:
        std::shared_ptr<AuthSigner> signer_;
        std::string scheme_;
        std::string host_;
        long contentLength_ = 0;
        HttpRange range_;
        std::map<std::string, std::string> headers_;
        std::map<std::string, std::string> query_;
        bool autoRecognizeContentType_ = true;
    };
}
#endif // !VOLCENGINE_REQUEST_BUILDER_H_