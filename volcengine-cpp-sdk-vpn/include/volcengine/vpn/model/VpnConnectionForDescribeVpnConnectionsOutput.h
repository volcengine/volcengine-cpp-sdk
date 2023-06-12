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
#ifndef VOLCENGINE_VPN_VPNCONNECTIONFORDESCRIBEVPNCONNECTIONSOUTPUT_H
#define VOLCENGINE_VPN_VPNCONNECTIONFORDESCRIBEVPNCONNECTIONSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpn/model/IkeConfigForDescribeVpnConnectionsOutput.h"
#include "volcengine/vpn/model/IpsecConfigForDescribeVpnConnectionsOutput.h"
namespace volcengine{
    namespace vpn{
        class VpnConnectionForDescribeVpnConnectionsOutput {
        public:
            VpnConnectionForDescribeVpnConnectionsOutput() = default;
            ~VpnConnectionForDescribeVpnConnectionsOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getAccountId() const { return  v_accountId; }
            void setAccountId(const std::string &s_accountId ) {
                v_accountId = s_accountId;
            }
            const std::string &getAttachStatus() const { return  v_attachStatus; }
            void setAttachStatus(const std::string &s_attachStatus ) {
                v_attachStatus = s_attachStatus;
            }
            const std::string &getAttachType() const { return  v_attachType; }
            void setAttachType(const std::string &s_attachType ) {
                v_attachType = s_attachType;
            }
            const std::string &getBusinessStatus() const { return  v_businessStatus; }
            void setBusinessStatus(const std::string &s_businessStatus ) {
                v_businessStatus = s_businessStatus;
            }
            const std::string &getConnectStatus() const { return  v_connectStatus; }
            void setConnectStatus(const std::string &s_connectStatus ) {
                v_connectStatus = s_connectStatus;
            }
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getCustomerGatewayId() const { return  v_customerGatewayId; }
            void setCustomerGatewayId(const std::string &s_customerGatewayId ) {
                v_customerGatewayId = s_customerGatewayId;
            }
            const std::string &getDeletedTime() const { return  v_deletedTime; }
            void setDeletedTime(const std::string &s_deletedTime ) {
                v_deletedTime = s_deletedTime;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::string &getDpdAction() const { return  v_dpdAction; }
            void setDpdAction(const std::string &s_dpdAction ) {
                v_dpdAction = s_dpdAction;
            }
            const std::shared_ptr<IkeConfigForDescribeVpnConnectionsOutput> &getIkeConfig() const { return  v_ikeConfig; }
            void setIkeConfig(const std::shared_ptr<IkeConfigForDescribeVpnConnectionsOutput> &s_ikeConfig ) {
                v_ikeConfig = s_ikeConfig;
            }
            const std::string &getIpAddress() const { return  v_ipAddress; }
            void setIpAddress(const std::string &s_ipAddress ) {
                v_ipAddress = s_ipAddress;
            }
            const std::shared_ptr<IpsecConfigForDescribeVpnConnectionsOutput> &getIpsecConfig() const { return  v_ipsecConfig; }
            void setIpsecConfig(const std::shared_ptr<IpsecConfigForDescribeVpnConnectionsOutput> &s_ipsecConfig ) {
                v_ipsecConfig = s_ipsecConfig;
            }
            const std::vector<std::string> &getLocalSubnet() const { return  v_localSubnet; }
            void setLocalSubnet(const std::vector<std::string> &s_localSubnet ) {
                v_localSubnet = s_localSubnet;
            }
            const bool isLogEnabled() const { return  v_logEnabled; }
            void setLogEnabled(const bool s_logEnabled ) {
                v_logEnabled = s_logEnabled;
            }
            const bool isNatTraversal() const { return  v_natTraversal; }
            void setNatTraversal(const bool s_natTraversal ) {
                v_natTraversal = s_natTraversal;
            }
            const bool isNegotiateInstantly() const { return  v_negotiateInstantly; }
            void setNegotiateInstantly(const bool s_negotiateInstantly ) {
                v_negotiateInstantly = s_negotiateInstantly;
            }
            const std::string &getOverdueTime() const { return  v_overdueTime; }
            void setOverdueTime(const std::string &s_overdueTime ) {
                v_overdueTime = s_overdueTime;
            }
            const std::string &getProjectName() const { return  v_projectName; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
            }
            const std::vector<std::string> &getRemoteSubnet() const { return  v_remoteSubnet; }
            void setRemoteSubnet(const std::vector<std::string> &s_remoteSubnet ) {
                v_remoteSubnet = s_remoteSubnet;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::string &getTransitRouterId() const { return  v_transitRouterId; }
            void setTransitRouterId(const std::string &s_transitRouterId ) {
                v_transitRouterId = s_transitRouterId;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
            const std::string &getVpnConnectionId() const { return  v_vpnConnectionId; }
            void setVpnConnectionId(const std::string &s_vpnConnectionId ) {
                v_vpnConnectionId = s_vpnConnectionId;
            }
            const std::string &getVpnConnectionName() const { return  v_vpnConnectionName; }
            void setVpnConnectionName(const std::string &s_vpnConnectionName ) {
                v_vpnConnectionName = s_vpnConnectionName;
            }
            const std::string &getVpnGatewayId() const { return  v_vpnGatewayId; }
            void setVpnGatewayId(const std::string &s_vpnGatewayId ) {
                v_vpnGatewayId = s_vpnGatewayId;
            }
            const std::string &getZoneId() const { return  v_zoneId; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
            }
        private:
            std::string v_accountId;
            std::string v_attachStatus;
            std::string v_attachType;
            std::string v_businessStatus;
            std::string v_connectStatus;
            std::string v_creationTime;
            std::string v_customerGatewayId;
            std::string v_deletedTime;
            std::string v_description;
            std::string v_dpdAction;
            std::shared_ptr<IkeConfigForDescribeVpnConnectionsOutput> v_ikeConfig;
            std::string v_ipAddress;
            std::shared_ptr<IpsecConfigForDescribeVpnConnectionsOutput> v_ipsecConfig;
            std::vector<std::string> v_localSubnet;
            bool v_logEnabled{};
            bool v_natTraversal{};
            bool v_negotiateInstantly{};
            std::string v_overdueTime;
            std::string v_projectName;
            std::vector<std::string> v_remoteSubnet;
            std::string v_status;
            std::string v_transitRouterId;
            std::string v_updateTime;
            std::string v_vpnConnectionId;
            std::string v_vpnConnectionName;
            std::string v_vpnGatewayId;
            std::string v_zoneId;
        };
    }
}
#endif // !VOLCENGINE_VPN_VPNCONNECTIONFORDESCRIBEVPNCONNECTIONSOUTPUT_H