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
#include "volcengine/vpc/model/HaVipForDescribeHaVipsOutput.h"

using namespace volcengine;
using namespace volcengine::vpc;
using namespace nlohmann;

void HaVipForDescribeHaVipsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("AssociatedEipAddress")) j.at("AssociatedEipAddress").get_to(v_associatedEipAddress);
    if (j.contains("AssociatedEipId")) j.at("AssociatedEipId").get_to(v_associatedEipId);
    if (j.contains("AssociatedInstanceIds")){
        json associatedInstanceIdsPres = j.at("AssociatedInstanceIds");
        for (auto & pre : associatedInstanceIdsPres) {
           v_associatedInstanceIds.emplace_back(pre);
        }
    }
    if (j.contains("AssociatedInstanceType")) j.at("AssociatedInstanceType").get_to(v_associatedInstanceType);
    if (j.contains("CreatedAt")) j.at("CreatedAt").get_to(v_createdAt);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("HaVipId")) j.at("HaVipId").get_to(v_haVipId);
    if (j.contains("HaVipName")) j.at("HaVipName").get_to(v_haVipName);
    if (j.contains("IpAddress")) j.at("IpAddress").get_to(v_ipAddress);
    if (j.contains("MasterInstanceId")) j.at("MasterInstanceId").get_to(v_masterInstanceId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("SubnetId")) j.at("SubnetId").get_to(v_subnetId);
    if (j.contains("UpdatedAt")) j.at("UpdatedAt").get_to(v_updatedAt);
    if (j.contains("VpcId")) j.at("VpcId").get_to(v_vpcId);
}
