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
#include "volcengine/directconnect/model/DescribeDirectConnectGatewayAttributesResult.h"

using namespace volcengine;
using namespace volcengine::directconnect;
using namespace nlohmann;

void DescribeDirectConnectGatewayAttributesResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("AssociateCens")){
        json associateCensPres = j.at("AssociateCens");
        for (auto & pre : associateCensPres) {
           AssociateCenForDescribeDirectConnectGatewayAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_associateCens.emplace_back(next);
        }
    }
    if (j.contains("BusinessStatus")) j.at("BusinessStatus").get_to(v_businessStatus);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("DeletedTime")) j.at("DeletedTime").get_to(v_deletedTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("DirectConnectGatewayId")) j.at("DirectConnectGatewayId").get_to(v_directConnectGatewayId);
    if (j.contains("DirectConnectGatewayName")) j.at("DirectConnectGatewayName").get_to(v_directConnectGatewayName);
    if (j.contains("LockReason")) j.at("LockReason").get_to(v_lockReason);
    if (j.contains("OverdueTime")) j.at("OverdueTime").get_to(v_overdueTime);
    if (j.contains("RequestId")) j.at("RequestId").get_to(v_requestId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeDirectConnectGatewayAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}