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
#ifndef VOLCENGINE_STATIC_CREDENTIALS_PROVIDER_H_
#define VOLCENGINE_STATIC_CREDENTIALS_PROVIDER_H_

#include "CredentialsProvider.h"

#include <utility>

namespace volcengine {
    class StaticCredentialsProvider : public CredentialsProvider {
    public:

//        StaticCredentialsProvider(const std::string &accessKeyId, const std::string &secretAccessKey)
//                : staticCredentials(accessKeyId, secretAccessKey, "") {}
//
//        StaticCredentialsProvider(const std::string &accessKeyId, const std::string &secretAccessKey,
//                                  const std::string &sessionToken)
//                : staticCredentials(accessKeyId, secretAccessKey, sessionToken) {}

        StaticCredentialsProvider(const std::string &accessKeyId, const std::string &secretAccessKey);

        StaticCredentialsProvider(const std::string &accessKeyId, const std::string &secretAccessKey,
                                  const std::string &sessionToken);

        ~StaticCredentialsProvider();

        Credentials credentials() override;

    private:
        Credentials staticCredentials;
    };
}
#endif // !VOLCENGINE_STATIC_CREDENTIALS_PROVIDER_H_

