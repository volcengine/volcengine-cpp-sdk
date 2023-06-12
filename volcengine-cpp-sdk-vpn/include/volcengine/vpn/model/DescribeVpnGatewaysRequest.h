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
#ifndef VOLCENGINE_VPN_DESCRIBEVPNGATEWAYSREQUEST_H
#define VOLCENGINE_VPN_DESCRIBEVPNGATEWAYSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vpn/model/TagFilterForDescribeVpnGatewaysInput.h"

namespace volcengine{
    namespace vpn{
        class DescribeVpnGatewaysRequest {
        public:
            DescribeVpnGatewaysRequest();
            ~DescribeVpnGatewaysRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getIpAddress()const { return  v_ipAddress; }
            bool IpAddressHasBeenSet() const { return v_ipAddressHasBeenSet; }
            void setIpAddress(const std::string &s_ipAddress ) {
                v_ipAddress = s_ipAddress;
                v_ipAddressHasBeenSet = true;
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
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            const std::string &getSubnetId()const { return  v_subnetId; }
            bool SubnetIdHasBeenSet() const { return v_subnetIdHasBeenSet; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
                v_subnetIdHasBeenSet = true;
            }
            const std::vector<TagFilterForDescribeVpnGatewaysInput> &getTagFilters()const { return  v_tagFilters; }
            bool TagFiltersHasBeenSet() const { return v_tagFiltersHasBeenSet; }
            void setTagFilters(const std::vector<TagFilterForDescribeVpnGatewaysInput> &s_tagFilters ) {
                v_tagFilters = s_tagFilters;
                v_tagFiltersHasBeenSet = true;
            }
            const std::string &getVpcId()const { return  v_vpcId; }
            bool VpcIdHasBeenSet() const { return v_vpcIdHasBeenSet; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
                v_vpcIdHasBeenSet = true;
            }
            const std::vector<std::string> &getVpnGatewayIds()const { return  v_vpnGatewayIds; }
            bool VpnGatewayIdsHasBeenSet() const { return v_vpnGatewayIdsHasBeenSet; }
            void setVpnGatewayIds(const std::vector<std::string> &s_vpnGatewayIds ) {
                v_vpnGatewayIds = s_vpnGatewayIds;
                v_vpnGatewayIdsHasBeenSet = true;
            }
            const std::string &getVpnGatewayName()const { return  v_vpnGatewayName; }
            bool VpnGatewayNameHasBeenSet() const { return v_vpnGatewayNameHasBeenSet; }
            void setVpnGatewayName(const std::string &s_vpnGatewayName ) {
                v_vpnGatewayName = s_vpnGatewayName;
                v_vpnGatewayNameHasBeenSet = true;
            }
        private:
            std::string v_ipAddress;
            bool v_ipAddressHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::string v_subnetId;
            bool v_subnetIdHasBeenSet;

            std::vector<TagFilterForDescribeVpnGatewaysInput> v_tagFilters;
            bool v_tagFiltersHasBeenSet;

            std::string v_vpcId;
            bool v_vpcIdHasBeenSet;

            std::vector<std::string> v_vpnGatewayIds;
            bool v_vpnGatewayIdsHasBeenSet;

            std::string v_vpnGatewayName;
            bool v_vpnGatewayNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPN_DESCRIBEVPNGATEWAYSREQUEST_H