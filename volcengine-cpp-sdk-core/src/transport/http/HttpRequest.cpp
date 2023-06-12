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
#include "volcengine/core/transport/http/HttpRequest.h"
#include <memory>
#include <utility>
#include <iostream>

using namespace volcengine;

HttpRequest::HttpRequest(const std::string &method) {
    method_ = method;
    responseOutput_ = std::make_shared<std::stringstream>();
}

HttpRequest::~HttpRequest() = default;