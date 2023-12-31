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
#include "volcengine/vpc/model/NetworkInterfaceSetForDescribeNetworkInterfacesOutput.h"

using namespace volcengine;
using namespace volcengine::vpc;
using namespace nlohmann;

void NetworkInterfaceSetForDescribeNetworkInterfacesOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("AssociatedElasticIp")){
        json associatedElasticIpPres = j.at("AssociatedElasticIp");
        auto next = std::make_shared<AssociatedElasticIpForDescribeNetworkInterfacesOutput>();
        next->fromJsonString(to_string(associatedElasticIpPres));
        v_associatedElasticIp = next;
    }
    if (j.contains("CreatedAt")) j.at("CreatedAt").get_to(v_createdAt);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("DeviceId")) j.at("DeviceId").get_to(v_deviceId);
    if (j.contains("MacAddress")) j.at("MacAddress").get_to(v_macAddress);
    if (j.contains("NetworkInterfaceId")) j.at("NetworkInterfaceId").get_to(v_networkInterfaceId);
    if (j.contains("NetworkInterfaceName")) j.at("NetworkInterfaceName").get_to(v_networkInterfaceName);
    if (j.contains("PortSecurityEnabled")) j.at("PortSecurityEnabled").get_to(v_portSecurityEnabled);
    if (j.contains("PrimaryIpAddress")) j.at("PrimaryIpAddress").get_to(v_primaryIpAddress);
    if (j.contains("PrivateIpSets")){
        json privateIpSetsPres = j.at("PrivateIpSets");
        auto next = std::make_shared<PrivateIpSetsForDescribeNetworkInterfacesOutput>();
        next->fromJsonString(to_string(privateIpSetsPres));
        v_privateIpSets = next;
    }
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("SecurityGroupIds")){
        json securityGroupIdsPres = j.at("SecurityGroupIds");
        for (auto & pre : securityGroupIdsPres) {
           v_securityGroupIds.emplace_back(pre);
        }
    }
    if (j.contains("ServiceManaged")) j.at("ServiceManaged").get_to(v_serviceManaged);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("SubnetId")) j.at("SubnetId").get_to(v_subnetId);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeNetworkInterfacesOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("Type")) j.at("Type").get_to(v_type);
    if (j.contains("UpdatedAt")) j.at("UpdatedAt").get_to(v_updatedAt);
    if (j.contains("VpcId")) j.at("VpcId").get_to(v_vpcId);
    if (j.contains("VpcName")) j.at("VpcName").get_to(v_vpcName);
    if (j.contains("ZoneId")) j.at("ZoneId").get_to(v_zoneId);
}
