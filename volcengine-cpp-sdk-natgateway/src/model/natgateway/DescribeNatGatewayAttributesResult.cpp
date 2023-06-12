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
#include "volcengine/natgateway/model/DescribeNatGatewayAttributesResult.h"

using namespace volcengine;
using namespace volcengine::natgateway;
using namespace nlohmann;

void DescribeNatGatewayAttributesResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("BillingType")) j.at("BillingType").get_to(v_billingType);
    if (j.contains("BusinessStatus")) j.at("BusinessStatus").get_to(v_businessStatus);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("DeletedTime")) j.at("DeletedTime").get_to(v_deletedTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("EipAddresses")){
        json eipAddressesPres = j.at("EipAddresses");
        for (auto & pre : eipAddressesPres) {
           EipAddressForDescribeNatGatewayAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_eipAddresses.emplace_back(next);
        }
    }
    if (j.contains("ExpiredTime")) j.at("ExpiredTime").get_to(v_expiredTime);
    if (j.contains("LockReason")) j.at("LockReason").get_to(v_lockReason);
    if (j.contains("NatGatewayId")) j.at("NatGatewayId").get_to(v_natGatewayId);
    if (j.contains("NatGatewayName")) j.at("NatGatewayName").get_to(v_natGatewayName);
    if (j.contains("NetworkInterfaceId")) j.at("NetworkInterfaceId").get_to(v_networkInterfaceId);
    if (j.contains("OverdueTime")) j.at("OverdueTime").get_to(v_overdueTime);
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("RequestId")) j.at("RequestId").get_to(v_requestId);
    if (j.contains("Spec")) j.at("Spec").get_to(v_spec);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("SubnetId")) j.at("SubnetId").get_to(v_subnetId);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeNatGatewayAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdatedAt")) j.at("UpdatedAt").get_to(v_updatedAt);
    if (j.contains("VpcId")) j.at("VpcId").get_to(v_vpcId);
    if (j.contains("ZoneId")) j.at("ZoneId").get_to(v_zoneId);
}
