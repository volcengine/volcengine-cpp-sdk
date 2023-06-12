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
#include "volcengine/vpc/model/PrivateIpSetsForDescribeNetworkInterfacesOutput.h"

using namespace volcengine;
using namespace volcengine::vpc;
using namespace nlohmann;

void PrivateIpSetsForDescribeNetworkInterfacesOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("PrivateIpSet")){
        json privateIpSetPres = j.at("PrivateIpSet");
        for (auto & pre : privateIpSetPres) {
           PrivateIpSetForDescribeNetworkInterfacesOutput next;
           next.fromJsonString(to_string(pre));
           v_privateIpSet.emplace_back(next);
        }
    }
}
