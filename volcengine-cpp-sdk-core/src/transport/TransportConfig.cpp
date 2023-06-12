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
#include "volcengine/core/transport/TransportConfig.h"

namespace volcengine {
    TransportConfig::TransportConfig() {
        maxIdleCount_ = 128;
        requestTimeout_ = 10;
        dialTimeout_ = 10;
        keepAlive_ = 30;
        connectTimeout_ = 60;
        tlsHandshakeTimeout_ = 10;
        responseHeaderTimeout_ = 60;
        expectContinueTimeout_ = 3;
        readTimeout_ = 120;
        writeTimeout_ = 120;
    }
}
