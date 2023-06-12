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
#ifndef VOLCENGINE_VPC_VPCFORDESCRIBEVPCSOUTPUT_H
#define VOLCENGINE_VPC_VPCFORDESCRIBEVPCSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpc/model/AssociateCenForDescribeVpcsOutput.h"
#include "volcengine/vpc/model/TagForDescribeVpcsOutput.h"
namespace volcengine{
    namespace vpc{
        class VpcForDescribeVpcsOutput {
        public:
            VpcForDescribeVpcsOutput() = default;
            ~VpcForDescribeVpcsOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getAccountId() const { return  v_accountId; }
            void setAccountId(const std::string &s_accountId ) {
                v_accountId = s_accountId;
            }
            const std::vector<AssociateCenForDescribeVpcsOutput> &getAssociateCens() const { return  v_associateCens; }
            void setAssociateCens(const std::vector<AssociateCenForDescribeVpcsOutput> &s_associateCens ) {
                v_associateCens = s_associateCens;
            }
            const std::string &getCidrBlock() const { return  v_cidrBlock; }
            void setCidrBlock(const std::string &s_cidrBlock ) {
                v_cidrBlock = s_cidrBlock;
            }
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::vector<std::string> &getDnsServers() const { return  v_dnsServers; }
            void setDnsServers(const std::vector<std::string> &s_dnsServers ) {
                v_dnsServers = s_dnsServers;
            }
            const bool isIsDefault() const { return  v_isDefault; }
            void setIsDefault(const bool s_isDefault ) {
                v_isDefault = s_isDefault;
            }
            const std::vector<std::string> &getNatGatewayIds() const { return  v_natGatewayIds; }
            void setNatGatewayIds(const std::vector<std::string> &s_natGatewayIds ) {
                v_natGatewayIds = s_natGatewayIds;
            }
            const std::string &getNetworkAclNum() const { return  v_networkAclNum; }
            void setNetworkAclNum(const std::string &s_networkAclNum ) {
                v_networkAclNum = s_networkAclNum;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const std::vector<std::string> &getRouteTableIds() const { return  v_routeTableIds; }
            void setRouteTableIds(const std::vector<std::string> &s_routeTableIds ) {
                v_routeTableIds = s_routeTableIds;
            }
            const std::vector<std::string> &getSecurityGroupIds() const { return  v_securityGroupIds; }
            void setSecurityGroupIds(const std::vector<std::string> &s_securityGroupIds ) {
                v_securityGroupIds = s_securityGroupIds;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::vector<std::string> &getSubnetIds() const { return  v_subnetIds; }
            void setSubnetIds(const std::vector<std::string> &s_subnetIds ) {
                v_subnetIds = s_subnetIds;
            }
            const std::vector<TagForDescribeVpcsOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForDescribeVpcsOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
            const std::vector<std::string> &getUserCidrBlocks() const { return  v_userCidrBlocks; }
            void setUserCidrBlocks(const std::vector<std::string> &s_userCidrBlocks ) {
                v_userCidrBlocks = s_userCidrBlocks;
            }
            const std::string &getVpcId() const { return  v_vpcId; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
            }
            const std::string &getVpcName() const { return  v_vpcName; }
            void setVpcName(const std::string &s_vpcName ) {
                v_vpcName = s_vpcName;
            }
        private:
            std::string v_accountId;
            std::vector<AssociateCenForDescribeVpcsOutput> v_associateCens;
            std::string v_cidrBlock;
            std::string v_creationTime;
            std::string v_description;
            std::vector<std::string> v_dnsServers;
            bool v_isDefault{};
            std::vector<std::string> v_natGatewayIds;
            std::string v_networkAclNum;
            std::string v_projectName;
            std::vector<std::string> v_routeTableIds;
            std::vector<std::string> v_securityGroupIds;
            std::string v_status;
            std::vector<std::string> v_subnetIds;
            std::vector<TagForDescribeVpcsOutput> v_tags;
            std::string v_updateTime;
            std::vector<std::string> v_userCidrBlocks;
            std::string v_vpcId;
            std::string v_vpcName;
        };
    }
}
#endif // !VOLCENGINE_VPC_VPCFORDESCRIBEVPCSOUTPUT_H