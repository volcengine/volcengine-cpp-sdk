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
#ifndef VOLCENGINE_VPN_DESCRIBEVPNGATEWAYROUTEATTRIBUTESRESULT_H
#define VOLCENGINE_VPN_DESCRIBEVPNGATEWAYROUTEATTRIBUTESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace vpn{
        class DescribeVpnGatewayRouteAttributesResult {
        public:
            DescribeVpnGatewayRouteAttributesResult() = default;
            ~DescribeVpnGatewayRouteAttributesResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getDestinationCidrBlock() const { return  v_destinationCidrBlock; }
            void setDestinationCidrBlock(const std::string &s_destinationCidrBlock ) {
                v_destinationCidrBlock = s_destinationCidrBlock;
            }
            const std::string &getNextHopId() const { return  v_nextHopId; }
            void setNextHopId(const std::string &s_nextHopId ) {
                v_nextHopId = s_nextHopId;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
            const std::string &getVpnGatewayId() const { return  v_vpnGatewayId; }
            void setVpnGatewayId(const std::string &s_vpnGatewayId ) {
                v_vpnGatewayId = s_vpnGatewayId;
            }
            const std::string &getVpnGatewayRouteId() const { return  v_vpnGatewayRouteId; }
            void setVpnGatewayRouteId(const std::string &s_vpnGatewayRouteId ) {
                v_vpnGatewayRouteId = s_vpnGatewayRouteId;
            }
        private:
            std::string v_creationTime;
            std::string v_destinationCidrBlock;
            std::string v_nextHopId;
            std::string v_requestId;
            std::string v_status;
            std::string v_updateTime;
            std::string v_vpnGatewayId;
            std::string v_vpnGatewayRouteId;
        };
    }
}
#endif // !VOLCENGINE_VPN_DESCRIBEVPNGATEWAYROUTEATTRIBUTESRESULT_H