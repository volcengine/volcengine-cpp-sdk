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
#include "volcengine/core/VolcengineMetadata.h"
#include "../src/external/json/json.hpp"

using namespace volcengine;
using namespace nlohmann;

void VolcengineMetadata::fromJsonString(const std::string &error) {
    auto j = json::parse(error, nullptr, false);
    if (j.is_discarded()) {
        return;
    }
    auto metadata = j.at("ResponseMetadata");

    if (metadata.contains("RequestId")) metadata.at("RequestId").get_to(requestId_);
    if (metadata.contains("Action")) metadata.at("Action").get_to(action_);
    if (metadata.contains("Version")) metadata.at("Version").get_to(version_);
    if (metadata.contains("Service")) metadata.at("Service").get_to(service_);
    if (metadata.contains("Region")) metadata.at("Region").get_to(region_);

    if (metadata.contains("Error")) {
        error_ = std::make_shared<VolcengineError>();
        auto err = metadata.at("Error");
        int codeN;
        if (err.contains("CodeN")) err.at("CodeN").get_to(codeN);
        error_->setCodeN(codeN);
        std::string code;
        if (err.contains("Code")) err.at("Code").get_to(code);
        error_->setCode(code);
        std::string message;
        if (err.contains("Message")) err.at("Message").get_to(message);
        error_->setMessage(message);
    }
}