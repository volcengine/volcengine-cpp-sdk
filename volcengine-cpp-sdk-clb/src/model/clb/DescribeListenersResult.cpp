/*
* Code generated by Beijing Volcanoengine Technology.Do NOT EDIT.
* Copyright Beijing Volcanoengine Technology Ltd All rights reserved.
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
#include "volcengine/clb/model/DescribeListenersResult.h"

using namespace volcengine;
using namespace volcengine::clb;
using namespace nlohmann;

void DescribeListenersResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("Listeners")){
        json listenersPres = j.at("Listeners");
        for (auto & pre : listenersPres) {
           ListenerForDescribeListenersOutput next;
           next.fromJsonString(to_string(pre));
           v_listeners.emplace_back(next);
        }
    }
    if (j.contains("PageNumber")) j.at("PageNumber").get_to(v_pageNumber);
    if (j.contains("PageSize")) j.at("PageSize").get_to(v_pageSize);
    if (j.contains("RequestId")) j.at("RequestId").get_to(v_requestId);
    if (j.contains("TotalCount")) j.at("TotalCount").get_to(v_totalCount);
}