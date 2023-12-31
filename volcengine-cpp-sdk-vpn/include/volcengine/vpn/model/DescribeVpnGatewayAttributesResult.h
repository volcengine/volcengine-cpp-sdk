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
#ifndef VOLCENGINE_VPN_DESCRIBEVPNGATEWAYATTRIBUTESRESULT_H
#define VOLCENGINE_VPN_DESCRIBEVPNGATEWAYATTRIBUTESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpn/model/TagForDescribeVpnGatewayAttributesOutput.h"
namespace volcengine{
    namespace vpn{
        class DescribeVpnGatewayAttributesResult {
        public:
            DescribeVpnGatewayAttributesResult() = default;
            ~DescribeVpnGatewayAttributesResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getAccountId() const { return  v_accountId; }
            void setAccountId(const std::string &s_accountId ) {
                v_accountId = s_accountId;
            }
            const int getBandwidth() const { return  v_bandwidth; }
            void setBandwidth(const int s_bandwidth ) {
                v_bandwidth = s_bandwidth;
            }
            const int getBillingType() const { return  v_billingType; }
            void setBillingType(const int s_billingType ) {
                v_billingType = s_billingType;
            }
            const std::string &getBusinessStatus() const { return  v_businessStatus; }
            void setBusinessStatus(const std::string &s_businessStatus ) {
                v_businessStatus = s_businessStatus;
            }
            const int getConnectionCount() const { return  v_connectionCount; }
            void setConnectionCount(const int s_connectionCount ) {
                v_connectionCount = s_connectionCount;
            }
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getDeletedTime() const { return  v_deletedTime; }
            void setDeletedTime(const std::string &s_deletedTime ) {
                v_deletedTime = s_deletedTime;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::string &getExpiredTime() const { return  v_expiredTime; }
            void setExpiredTime(const std::string &s_expiredTime ) {
                v_expiredTime = s_expiredTime;
            }
            const std::string &getIpAddress() const { return  v_ipAddress; }
            void setIpAddress(const std::string &s_ipAddress ) {
                v_ipAddress = s_ipAddress;
            }
            const std::string &getLockReason() const { return  v_lockReason; }
            void setLockReason(const std::string &s_lockReason ) {
                v_lockReason = s_lockReason;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const int getRouteCount() const { return  v_routeCount; }
            void setRouteCount(const int s_routeCount ) {
                v_routeCount = s_routeCount;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::string &getSubnetId() const { return  v_subnetId; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
            }
            const std::vector<TagForDescribeVpnGatewayAttributesOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForDescribeVpnGatewayAttributesOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
            const std::string &getVpcId() const { return  v_vpcId; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
            }
            const std::string &getVpnGatewayId() const { return  v_vpnGatewayId; }
            void setVpnGatewayId(const std::string &s_vpnGatewayId ) {
                v_vpnGatewayId = s_vpnGatewayId;
            }
            const std::string &getVpnGatewayName() const { return  v_vpnGatewayName; }
            void setVpnGatewayName(const std::string &s_vpnGatewayName ) {
                v_vpnGatewayName = s_vpnGatewayName;
            }
        private:
            std::string v_accountId;
            int v_bandwidth{};
            int v_billingType{};
            std::string v_businessStatus;
            int v_connectionCount{};
            std::string v_creationTime;
            std::string v_deletedTime;
            std::string v_description;
            std::string v_expiredTime;
            std::string v_ipAddress;
            std::string v_lockReason;
            std::string v_projectName;
            std::string v_requestId;
            int v_routeCount{};
            std::string v_status;
            std::string v_subnetId;
            std::vector<TagForDescribeVpnGatewayAttributesOutput> v_tags;
            std::string v_updateTime;
            std::string v_vpcId;
            std::string v_vpnGatewayId;
            std::string v_vpnGatewayName;
        };
    }
}
#endif // !VOLCENGINE_VPN_DESCRIBEVPNGATEWAYATTRIBUTESRESULT_H