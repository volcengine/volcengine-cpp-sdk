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
#include "volcengine/cen/model/CenGrantRuleForDescribeGrantRulesToCenOutput.h"

using namespace volcengine;
using namespace volcengine::cen;
using namespace nlohmann;

void CenGrantRuleForDescribeGrantRulesToCenOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("CenId")) j.at("CenId").get_to(v_cenId);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("InstanceId")) j.at("InstanceId").get_to(v_instanceId);
    if (j.contains("InstanceOwnerId")) j.at("InstanceOwnerId").get_to(v_instanceOwnerId);
    if (j.contains("InstanceRegionId")) j.at("InstanceRegionId").get_to(v_instanceRegionId);
    if (j.contains("InstanceType")) j.at("InstanceType").get_to(v_instanceType);
}
