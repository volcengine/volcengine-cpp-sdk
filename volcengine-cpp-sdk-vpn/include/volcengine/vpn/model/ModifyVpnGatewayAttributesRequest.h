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
#ifndef VOLCENGINE_VPN_MODIFYVPNGATEWAYATTRIBUTESREQUEST_H
#define VOLCENGINE_VPN_MODIFYVPNGATEWAYATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpn{
        class ModifyVpnGatewayAttributesRequest {
        public:
            ModifyVpnGatewayAttributesRequest();
            ~ModifyVpnGatewayAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            int getBandwidth()const { return  v_bandwidth; }
            bool BandwidthHasBeenSet() const { return v_bandwidthHasBeenSet; }
            void setBandwidth(const int s_bandwidth ) {
                v_bandwidth = s_bandwidth;
                v_bandwidthHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getNegotiateInstantly()const { return  v_negotiateInstantly; }
            bool NegotiateInstantlyHasBeenSet() const { return v_negotiateInstantlyHasBeenSet; }
            void setNegotiateInstantly(const std::string &s_negotiateInstantly ) {
                v_negotiateInstantly = s_negotiateInstantly;
                v_negotiateInstantlyHasBeenSet = true;
            }
            const std::string &getVpnGatewayId()const { return  v_vpnGatewayId; }
            bool VpnGatewayIdHasBeenSet() const { return v_vpnGatewayIdHasBeenSet; }
            void setVpnGatewayId(const std::string &s_vpnGatewayId ) {
                v_vpnGatewayId = s_vpnGatewayId;
                v_vpnGatewayIdHasBeenSet = true;
            }
            const std::string &getVpnGatewayName()const { return  v_vpnGatewayName; }
            bool VpnGatewayNameHasBeenSet() const { return v_vpnGatewayNameHasBeenSet; }
            void setVpnGatewayName(const std::string &s_vpnGatewayName ) {
                v_vpnGatewayName = s_vpnGatewayName;
                v_vpnGatewayNameHasBeenSet = true;
            }
        private:
            int v_bandwidth;
            bool v_bandwidthHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_negotiateInstantly;
            bool v_negotiateInstantlyHasBeenSet;

            std::string v_vpnGatewayId;
            bool v_vpnGatewayIdHasBeenSet;

            std::string v_vpnGatewayName;
            bool v_vpnGatewayNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPN_MODIFYVPNGATEWAYATTRIBUTESREQUEST_H