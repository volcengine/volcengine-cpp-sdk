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
#ifndef VOLCENGINE_VPN_DESCRIBECUSTOMERGATEWAYSREQUEST_H
#define VOLCENGINE_VPN_DESCRIBECUSTOMERGATEWAYSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpn{
        class DescribeCustomerGatewaysRequest {
        public:
            DescribeCustomerGatewaysRequest();
            ~DescribeCustomerGatewaysRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::vector<std::string> &getCustomerGatewayIds()const { return  v_customerGatewayIds; }
            bool CustomerGatewayIdsHasBeenSet() const { return v_customerGatewayIdsHasBeenSet; }
            void setCustomerGatewayIds(const std::vector<std::string> &s_customerGatewayIds ) {
                v_customerGatewayIds = s_customerGatewayIds;
                v_customerGatewayIdsHasBeenSet = true;
            }
            const std::string &getCustomerGatewayName()const { return  v_customerGatewayName; }
            bool CustomerGatewayNameHasBeenSet() const { return v_customerGatewayNameHasBeenSet; }
            void setCustomerGatewayName(const std::string &s_customerGatewayName ) {
                v_customerGatewayName = s_customerGatewayName;
                v_customerGatewayNameHasBeenSet = true;
            }
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
        private:
            std::vector<std::string> v_customerGatewayIds;
            bool v_customerGatewayIdsHasBeenSet;

            std::string v_customerGatewayName;
            bool v_customerGatewayNameHasBeenSet;

            std::string v_ipAddress;
            bool v_ipAddressHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPN_DESCRIBECUSTOMERGATEWAYSREQUEST_H