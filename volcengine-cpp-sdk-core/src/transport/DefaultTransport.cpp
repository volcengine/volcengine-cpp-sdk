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
#include "volcengine/core/transport/DefaultTransport.h"

using namespace volcengine;

DefaultTransport::DefaultTransport(const TransportConfig &config) {
    HttpConfig conf{};
    conf.connectTimeout = config.getConnectTimeout();
    conf.requestTimeout = config.getRequestTimeout();
    conf.tcpKeepAlive = config.getKeepAlive();
    client_ = std::make_shared<HttpClient>(conf);
}

std::shared_ptr<VolcengineResponse> DefaultTransport::roundTrip(const std::shared_ptr<VolcengineRequest> &request) {
    auto httpReq = std::make_shared<HttpRequest>(request->getMethod());

    httpReq->setUrl(request->toUrl());
    httpReq->setHeaders(request->getHeaders());
    httpReq->setMethod(request->getMethod());
    httpReq->setBody(request->getContent());
    httpReq->setContentLength(request->getContentLength());

    auto httpResp = client_->doRequest(httpReq);
    auto res = std::make_shared<VolcengineResponse>(httpResp->Body());
    res->setStatusCode(httpResp->statusCode());
    res->setStatusMsg(httpResp->statusMsg());
    res->setHeaders(httpResp->Headers());
    std::string cl(httpResp->getHeaderValueByKey(HEADER_CONTENT_LENGTH));
    if (cl.empty()) {
        res->setContentLength(0);
    } else {
        res->setContentLength(std::stol(cl));
    }
    // Reference to stack memory associated with local variable 'res' returned
    return res;
}
