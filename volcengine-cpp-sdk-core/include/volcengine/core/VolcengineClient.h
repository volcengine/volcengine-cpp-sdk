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
#ifndef VOLCENGINE_VOLCENGINE_CLIENT_H_
#define VOLCENGINE_VOLCENGINE_CLIENT_H_

#include "string"
#include "VolcengineClientConfig.h"
#include "volcengine/core/transport/Transport.h"
#include "volcengine/core/common/SystemInfo.h"
#include "volcengine/core/auth/CredentialsProvider.h"
#include "volcengine/core/auth/AuthSigner.h"
#include "RequestBuilder.h"
#include "ResultData.h"

namespace volcengine {
    class VolcengineClient {
    public:
        explicit VolcengineClient(const std::shared_ptr<VolcengineClientConfig> &config);

        ~VolcengineClient() = default;

        RequestBuilder initBuilder(const std::string &svc);

        ResultData<VolcengineMetadata, VolcengineResponse> doCall(const std::shared_ptr<VolcengineRequest> &request);

        const std::shared_ptr<VolcengineClientConfig> &getConfig() const {
            return config_;
        }

        void setConfig(const std::shared_ptr<VolcengineClientConfig> &config) {
            config_ = config;
        }

    private:
        std::shared_ptr<VolcengineClientConfig> config_;
    };
}

#endif // !VOLCENGINE_VOLCENGINE_CLIENT_H_