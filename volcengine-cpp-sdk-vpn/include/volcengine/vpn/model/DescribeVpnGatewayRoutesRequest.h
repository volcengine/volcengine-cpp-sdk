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
#ifndef VOLCENGINE_VPN_DESCRIBEVPNGATEWAYROUTESREQUEST_H
#define VOLCENGINE_VPN_DESCRIBEVPNGATEWAYROUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpn{
        class DescribeVpnGatewayRoutesRequest {
        public:
            DescribeVpnGatewayRoutesRequest();
            ~DescribeVpnGatewayRoutesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDestinationCidrBlock()const { return  v_destinationCidrBlock; }
            bool DestinationCidrBlockHasBeenSet() const { return v_destinationCidrBlockHasBeenSet; }
            void setDestinationCidrBlock(const std::string &s_destinationCidrBlock ) {
                v_destinationCidrBlock = s_destinationCidrBlock;
                v_destinationCidrBlockHasBeenSet = true;
            }
            const std::string &getNextHopId()const { return  v_nextHopId; }
            bool NextHopIdHasBeenSet() const { return v_nextHopIdHasBeenSet; }
            void setNextHopId(const std::string &s_nextHopId ) {
                v_nextHopId = s_nextHopId;
                v_nextHopIdHasBeenSet = true;
            }
            int getPageNumber()const { return  v_pageNumber; }
            bool PageNumberHasBeenSet() const { return v_pageNumberHasBeenSet; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
                v_pageNumberHasBeenSet = true;
            }
            int getPageSize()const { return  v_pageSize; }
            bool PageSizeHasBeenSet() const { return v_pageSizeHasBeenSet; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
                v_pageSizeHasBeenSet = true;
            }
            const std::string &getVpnGatewayId()const { return  v_vpnGatewayId; }
            bool VpnGatewayIdHasBeenSet() const { return v_vpnGatewayIdHasBeenSet; }
            void setVpnGatewayId(const std::string &s_vpnGatewayId ) {
                v_vpnGatewayId = s_vpnGatewayId;
                v_vpnGatewayIdHasBeenSet = true;
            }
            const std::vector<std::string> &getVpnGatewayRouteIds()const { return  v_vpnGatewayRouteIds; }
            bool VpnGatewayRouteIdsHasBeenSet() const { return v_vpnGatewayRouteIdsHasBeenSet; }
            void setVpnGatewayRouteIds(const std::vector<std::string> &s_vpnGatewayRouteIds ) {
                v_vpnGatewayRouteIds = s_vpnGatewayRouteIds;
                v_vpnGatewayRouteIdsHasBeenSet = true;
            }
        private:
            std::string v_destinationCidrBlock;
            bool v_destinationCidrBlockHasBeenSet;

            std::string v_nextHopId;
            bool v_nextHopIdHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::string v_vpnGatewayId;
            bool v_vpnGatewayIdHasBeenSet;

            std::vector<std::string> v_vpnGatewayRouteIds;
            bool v_vpnGatewayRouteIdsHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPN_DESCRIBEVPNGATEWAYROUTESREQUEST_H