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
#include <volcengine/core/RequestBuilder.h>
#include <volcengine/core/common/Common.h>

using namespace volcengine;

std::shared_ptr<VolcengineRequest> RequestBuilder::build(const std::string &method) {
    auto req = std::make_shared<VolcengineRequest>(scheme_, method, host_, "/", headers_, query_);
    return req;
}

std::shared_ptr<VolcengineRequest> RequestBuilder::Build(const std::string &method) {
    auto req = RequestBuilder::build(method);
    auto sigHeader = signer_->signHeader(req);
    auto iter = sigHeader.begin();
    for (; iter != sigHeader.end(); iter++) {
        req->setSingleHeader(iter->first, iter->second);
    }
    return req;
}

std::shared_ptr<VolcengineRequest>
RequestBuilder::Build(const std::string &method, std::shared_ptr<std::iostream> content,const std::string &contentStr) {
    auto req = RequestBuilder::build(method);
    if (content) {
        req->setContent(content);
        if (this->getContentLength() != 0) req->setContentLength(this->getContentLength());
        else req->resolveContentLength();
        req ->setBody(contentStr);
    }
    auto sigHeader = signer_->signHeader(req);
    auto iter = sigHeader.begin();
    for (; iter != sigHeader.end(); iter++) {
        req->setSingleHeader(iter->first, iter->second);
    }
    return req;
}

std::shared_ptr<VolcengineRequest>
RequestBuilder::Build(const std::string &method, std::shared_ptr<std::iostream> content) {
    auto req = RequestBuilder::build(method);
    if (content) {
        req->setContent(content);
        if (this->getContentLength() != 0) req->setContentLength(this->getContentLength());
        else req->resolveContentLength();
    }
    auto sigHeader = signer_->signHeader(req);
    auto iter = sigHeader.begin();
    for (; iter != sigHeader.end(); iter++) {
        req->setSingleHeader(iter->first, iter->second);
    }
    return req;
}
