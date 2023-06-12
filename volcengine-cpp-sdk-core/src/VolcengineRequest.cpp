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
#include "volcengine/core/VolcengineRequest.h"
#include "volcengine/core/auth/VolcengineAuthSigner.h"

using namespace volcengine;

Url VolcengineRequest::toUrl() {
    Url url;
    auto iter = queries_.begin();
    for (; iter != queries_.end(); iter++) {
        url.addQuery(iter->first, iter->second);
    }
    url.setScheme(scheme_);
    url.setHost(host_);
    url.setPath(VolcengineAuthSigner::uriEncode(path_, false));
    return url;
}

void VolcengineRequest::resolveContentLength() {
    int64_t currentPos = content_->tellg();
    if (currentPos == static_cast<std::streampos>(-1)) {
        currentPos = 0;
        content_->clear();
    }
    content_->seekg(0, content_->end);
    int64_t size = content_->tellg();
    content_->seekg(currentPos, content_->beg);
    this->setContentLength(size);
}

const std::string &VolcengineRequest::getBody() const {
    return body;
}

void VolcengineRequest::setBody(const std::string &body) {
    VolcengineRequest::body = body;
}
