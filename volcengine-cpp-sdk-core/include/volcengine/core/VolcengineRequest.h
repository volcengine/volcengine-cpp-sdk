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
#ifndef VOLCENGINE_VOLCENGINE_REQUEST_H_
#define VOLCENGINE_VOLCENGINE_REQUEST_H_

#include <string>
#include <map>
#include <memory>
#include <iostream>
#include <utility>
#include "volcengine/core/transport/http/Url.h"
#include "volcengine/core/utils/MapUtils.h"

namespace volcengine {
    class VolcengineRequest {
    public:
        VolcengineRequest() = default;

        VolcengineRequest(std::string scheme, std::string method,
                          std::string host, std::string path,
                          std::map<std::string, std::string> headers,
                          std::map<std::string, std::string> queries)
                : scheme_(std::move(scheme)), method_(std::move(method)), host_(std::move(host)),
                  path_(std::move(path)),
                  headers_(std::move(headers)), queries_(std::move(queries)) {}

        ~VolcengineRequest() = default;

        Url toUrl();

        void resolveContentLength();

        const std::string &getScheme() const { return scheme_; }

        void setScheme(const std::string &scheme) { scheme_ = scheme; }

        const std::string &getMethod() const { return method_; }

        void setMethod(const std::string &method) { method_ = method; }

        const std::string &getHost() const { return host_; }

        void setHost(const std::string &host) { host_ = host; }

        const std::string &getPath() const { return path_; }

        void setPath(const std::string &path) { path_ = path; }

        const std::string &getTimeout() const { return timeout_; }

        void setTimeout(const std::string &timeout) { timeout_ = timeout; }

        int64_t getContentLength() const { return contentLength_; }

        void setContentLength(int64_t contentLength) { contentLength_ = contentLength; }

        std::shared_ptr<std::iostream> getContent() const { return content_; }

        void setContent(std::shared_ptr<std::iostream> &content) {
            content_ = content;
        }

        const std::map<std::string, std::string> &getHeaders() const {
            return headers_;
        }

        void setSingleHeader(const std::string &key, const std::string &value) {
            headers_[key] = value;
        }

        void setHeaders(const std::map<std::string, std::string> &headers) {
            headers_ = headers;
        }

        const std::map<std::string, std::string> &getQueries() const {
            return queries_;
        }

        void setQueries(const std::map<std::string, std::string> &queries) {
            queries_ = queries;
        }

        void eraseQuery(const std::string &key) {
            queries_.erase(key);
        }

        std::string findQuery(const std::string &key) {
            return MapUtils::findValueByKeyIgnoreCase(queries_, key);
        }

        void setSingleQuery(const std::string &key, const std::string &value) {
            queries_[key] = value;
        }

        const std::string &getBody() const;

        void setBody(const std::string &body);

    private:
        std::string scheme_;
        std::string method_;
        std::string host_;
        std::string path_;
        std::string timeout_;
        int64_t contentLength_ = 0;
        std::shared_ptr<std::iostream> content_;
        std::string body;
        std::map<std::string, std::string> headers_;
        std::map<std::string, std::string> queries_;
    };
}
#endif // !VOLCENGINE_VOLCENGINE_REQUEST_H_