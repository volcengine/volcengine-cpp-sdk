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
#include "volcengine/vpc/model/VpcForDescribeVpcsOutput.h"

using namespace volcengine;
using namespace volcengine::vpc;
using namespace nlohmann;

void VpcForDescribeVpcsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("AssociateCens")){
        json associateCensPres = j.at("AssociateCens");
        for (auto & pre : associateCensPres) {
           AssociateCenForDescribeVpcsOutput next;
           next.fromJsonString(to_string(pre));
           v_associateCens.emplace_back(next);
        }
    }
    if (j.contains("CidrBlock")) j.at("CidrBlock").get_to(v_cidrBlock);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("DnsServers")){
        json dnsServersPres = j.at("DnsServers");
        for (auto & pre : dnsServersPres) {
           v_dnsServers.emplace_back(pre);
        }
    }
    if (j.contains("IsDefault")) j.at("IsDefault").get_to(v_isDefault);
    if (j.contains("NatGatewayIds")){
        json natGatewayIdsPres = j.at("NatGatewayIds");
        for (auto & pre : natGatewayIdsPres) {
           v_natGatewayIds.emplace_back(pre);
        }
    }
    if (j.contains("NetworkAclNum")) j.at("NetworkAclNum").get_to(v_networkAclNum);
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("RouteTableIds")){
        json routeTableIdsPres = j.at("RouteTableIds");
        for (auto & pre : routeTableIdsPres) {
           v_routeTableIds.emplace_back(pre);
        }
    }
    if (j.contains("SecurityGroupIds")){
        json securityGroupIdsPres = j.at("SecurityGroupIds");
        for (auto & pre : securityGroupIdsPres) {
           v_securityGroupIds.emplace_back(pre);
        }
    }
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("SubnetIds")){
        json subnetIdsPres = j.at("SubnetIds");
        for (auto & pre : subnetIdsPres) {
           v_subnetIds.emplace_back(pre);
        }
    }
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeVpcsOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
    if (j.contains("UserCidrBlocks")){
        json userCidrBlocksPres = j.at("UserCidrBlocks");
        for (auto & pre : userCidrBlocksPres) {
           v_userCidrBlocks.emplace_back(pre);
        }
    }
    if (j.contains("VpcId")) j.at("VpcId").get_to(v_vpcId);
    if (j.contains("VpcName")) j.at("VpcName").get_to(v_vpcName);
}
