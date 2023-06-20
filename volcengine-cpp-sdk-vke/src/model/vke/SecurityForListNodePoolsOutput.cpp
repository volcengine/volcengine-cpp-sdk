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
#include "volcengine/vke/model/SecurityForListNodePoolsOutput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;

void SecurityForListNodePoolsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("Login")){
        json loginPres = j.at("Login");
        auto next = std::make_shared<LoginForListNodePoolsOutput>();
        next->fromJsonString(to_string(loginPres));
        v_login = next;
    }
    if (j.contains("SecurityGroupIds")){
        json securityGroupIdsPres = j.at("SecurityGroupIds");
        for (auto & pre : securityGroupIdsPres) {
           v_securityGroupIds.emplace_back(pre);
        }
    }
    if (j.contains("SecurityStrategies")){
        json securityStrategiesPres = j.at("SecurityStrategies");
        for (auto & pre : securityStrategiesPres) {
           v_securityStrategies.emplace_back(pre);
        }
    }
    if (j.contains("SecurityStrategyEnabled")) j.at("SecurityStrategyEnabled").get_to(v_securityStrategyEnabled);
}
