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
#include "string"
#include "volcengine/core/VolcengineClient.h"
#include "volcengine/core/transport/DefaultTransport.h"
#include "volcengine/core/auth/VolcengineAuthSigner.h"

using namespace volcengine;

VolcengineClient::VolcengineClient(const std::shared_ptr<VolcengineClientConfig> &config) {
    config_ = config;
}

RequestBuilder VolcengineClient::initBuilder(const std::string &svc) {
    std::map<std::string, std::string> headers;
    std::map<std::string, std::string> queries;
    std::shared_ptr<AuthSigner> signer = std::make_shared<VolcengineAuthSigner>(svc, config_->getRegion(),
                                                                                config_->getCredentials());
    std::string schema = SchemeHTTPS;
    if (config_->isDisableSSL()) {
        schema = SchemeHTTP;
    }
    if (config_->getTransport() == nullptr) {
        TransportConfig conf;
        config_->setTransport(std::make_shared<DefaultTransport>(conf));
    }
    auto rb = RequestBuilder(signer, schema, config_->getDomain(), headers, queries);
    return rb;
}

ResultData<VolcengineMetadata, VolcengineResponse>
VolcengineClient::doCall(const std::shared_ptr<VolcengineRequest> &request) {
    auto resp = config_->getTransport()->roundTrip(request);
    ResultData<VolcengineMetadata, VolcengineResponse> result;

    auto metaData = std::make_shared<VolcengineMetadata>();
    metaData->setHttpCode(resp->getStatusCode());
    result.setMetadata(metaData);
    result.setResult(resp);

    if (resp->getContent()) {
        std::stringstream ss;
        ss << resp->getContent()->rdbuf();
        std::string content = ss.str();
        metaData->fromJsonString(content);
        resp->setResponseBody(content);
    } else {
        result.setSuccess(false);
        return result;
    }

    if (metaData->getError() != nullptr) {
        result.setSuccess(false);
        return result;
    }


    if (resp->getStatusCode() >= 200 && resp->getStatusCode() < 300) {
        result.setSuccess(true);
        return result;
    }
    return result;
}
