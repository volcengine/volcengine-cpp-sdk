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
#ifndef VOLCENGINE_DEFAULT_TRANSPORT_H_
#define VOLCENGINE_DEFAULT_TRANSPORT_H_

#include "Transport.h"
#include "volcengine/core/transport/http/HttpClient.h"
#include "TransportConfig.h"

namespace volcengine {
    class DefaultTransport : public Transport {
    public:
        DefaultTransport() = default;

        explicit DefaultTransport(const TransportConfig &config);

        ~DefaultTransport() override = default;

        std::shared_ptr<VolcengineResponse> roundTrip(const std::shared_ptr<VolcengineRequest> &request) override;

    private:
        std::shared_ptr<HttpClient> client_;
    };
}
#endif // !VOLCENGINE_DEFAULT_TRANSPORT_H_