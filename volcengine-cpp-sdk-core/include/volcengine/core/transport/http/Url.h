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
#ifndef VOLCENGINE_URL_H_
#define VOLCENGINE_URL_H_
#include <map>
#include <string>

namespace volcengine {
    class Url {
    public:
        explicit Url(const std::string &url = "");

        ~Url();

        bool operator==(const Url &url) const;

        bool operator!=(const Url &url) const;

        void clear();

        void fromString(const std::string &url);

        std::string toString() const;

        std::string scheme() const;

        void setScheme(const std::string &scheme);

        std::string host() const { return host_; }

        void setHost(const std::string &host);

        std::string path() const { return path_; }

        void setPath(const std::string &path) { path_ = path; }

        std::string port() const { return port_; }

        void setPort(const std::string &port) { port_ = port; }

        std::string ipPort() const { return host_ + port_; }

        bool hasQuery() const { return !query_.empty(); }

        bool isEmpty() const {
            return scheme_.empty() && host_.empty() && path_.empty() &&
                   (port_.empty()) && query_.empty();
        }

        std::string queryToString() const;

        std::map<std::string, std::string> query() const { return query_; }

        void setQuery(const std::map<std::string, std::string> &query) { query_ = query; }

        void addQuery(const std::string &k, const std::string &v) { query_[k] = v; }

    private:
        std::string scheme_;
        std::string path_;
        std::string host_;
        std::string port_;
        std::map<std::string, std::string> query_;
    };
}
#endif // !VOLCENGINE_URL_H_