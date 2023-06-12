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
#ifndef VOLCENGINE_AUTH_SIGNER_H_
#define VOLCENGINE_AUTH_SIGNER_H_

#include "volcengine/core/VolcengineRequest.h"
#include "CredentialsProvider.h"
#include <memory>
#include <chrono>

namespace volcengine {
    class AuthSigner {
    public:
        AuthSigner() = default;

        virtual ~AuthSigner() = default;

        virtual std::map<std::string, std::string> signHeader(const std::shared_ptr<VolcengineRequest> &req) = 0;

        virtual std::map<std::string, std::string>
        signQuery(const std::shared_ptr<VolcengineRequest> &req, std::chrono::duration<int> ttl) = 0;
    };
}
#endif // !VOLCENGINE_AUTH_SIGNER_H_