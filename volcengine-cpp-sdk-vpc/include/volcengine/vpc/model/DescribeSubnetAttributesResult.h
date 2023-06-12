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
#ifndef VOLCENGINE_VPC_DESCRIBESUBNETATTRIBUTESRESULT_H
#define VOLCENGINE_VPC_DESCRIBESUBNETATTRIBUTESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpc/model/RouteTableForDescribeSubnetAttributesOutput.h"
namespace volcengine{
    namespace vpc{
        class DescribeSubnetAttributesResult {
        public:
            DescribeSubnetAttributesResult() = default;
            ~DescribeSubnetAttributesResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getAccountId() const { return  v_accountId; }
            void setAccountId(const std::string &s_accountId ) {
                v_accountId = s_accountId;
            }
            const int getAvailableIpAddressCount() const { return  v_availableIpAddressCount; }
            void setAvailableIpAddressCount(const int s_availableIpAddressCount ) {
                v_availableIpAddressCount = s_availableIpAddressCount;
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
            const bool isIsDefault() const { return  v_isDefault; }
            void setIsDefault(const bool s_isDefault ) {
                v_isDefault = s_isDefault;
            }
            const std::string &getNetworkAclId() const { return  v_networkAclId; }
            void setNetworkAclId(const std::string &s_networkAclId ) {
                v_networkAclId = s_networkAclId;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const std::shared_ptr<RouteTableForDescribeSubnetAttributesOutput> &getRouteTable() const { return  v_routeTable; }
            void setRouteTable(const std::shared_ptr<RouteTableForDescribeSubnetAttributesOutput> &s_routeTable ) {
                v_routeTable = s_routeTable;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::string &getSubnetId() const { return  v_subnetId; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
            }
            const std::string &getSubnetName() const { return  v_subnetName; }
            void setSubnetName(const std::string &s_subnetName ) {
                v_subnetName = s_subnetName;
            }
            const int getTotalIpv4Count() const { return  v_totalIpv4Count; }
            void setTotalIpv4Count(const int s_totalIpv4Count ) {
                v_totalIpv4Count = s_totalIpv4Count;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
            const std::string &getVpcId() const { return  v_vpcId; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
            }
            const std::string &getZoneId() const { return  v_zoneId; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
            }
        private:
            std::string v_accountId;
            int v_availableIpAddressCount{};
            std::string v_cidrBlock;
            std::string v_creationTime;
            std::string v_description;
            bool v_isDefault{};
            std::string v_networkAclId;
            std::string v_projectName;
            std::string v_requestId;
            std::shared_ptr<RouteTableForDescribeSubnetAttributesOutput> v_routeTable;
            std::string v_status;
            std::string v_subnetId;
            std::string v_subnetName;
            int v_totalIpv4Count{};
            std::string v_updateTime;
            std::string v_vpcId;
            std::string v_zoneId;
        };
    }
}
#endif // !VOLCENGINE_VPC_DESCRIBESUBNETATTRIBUTESRESULT_H