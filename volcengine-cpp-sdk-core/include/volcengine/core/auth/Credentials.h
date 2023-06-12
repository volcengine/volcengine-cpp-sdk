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

#ifndef VOLCENGINE_CREDENTIALS_H_
#define VOLCENGINE_CREDENTIALS_H_
namespace volcengine {
    class Credentials {
    public:
        Credentials() = default;

        ~Credentials() = default;

        Credentials(const std::string &accessKeyId, const std::string &secretAccessKey,
                    const std::string &sessionToken) {
            accessKeyId_ = accessKeyId;
            secretAccessKey_ = secretAccessKey;
            sessionToken_ = sessionToken;
        }

        const std::string &getAccessKeyId() const { return accessKeyId_; }

        void setAccessKeyId(const std::string &accessKeyId) {
            accessKeyId_ = accessKeyId;
        }

        const std::string &getSecretAccessKey() const { return secretAccessKey_; }

        void setSecretAccessKey(const std::string &secretAccessKey) {
            secretAccessKey_ = secretAccessKey;
        }

        const std::string &getSessionToken() const { return sessionToken_; }

        void setSessionToken(const std::string &sessionToken) {
            sessionToken_ = sessionToken;
        }

    private:
        std::string accessKeyId_;
        std::string secretAccessKey_;
        std::string sessionToken_;
    };
}
#endif // !VOLCENGINE_CREDENTIALS_H_