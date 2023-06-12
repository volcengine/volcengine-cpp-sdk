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
#ifndef VOLCENGINE_VPN_MODIFYCUSTOMERGATEWAYATTRIBUTESREQUEST_H
#define VOLCENGINE_VPN_MODIFYCUSTOMERGATEWAYATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpn{
        class ModifyCustomerGatewayAttributesRequest {
        public:
            ModifyCustomerGatewayAttributesRequest();
            ~ModifyCustomerGatewayAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getCustomerGatewayId()const { return  v_customerGatewayId; }
            bool CustomerGatewayIdHasBeenSet() const { return v_customerGatewayIdHasBeenSet; }
            void setCustomerGatewayId(const std::string &s_customerGatewayId ) {
                v_customerGatewayId = s_customerGatewayId;
                v_customerGatewayIdHasBeenSet = true;
            }
            const std::string &getCustomerGatewayName()const { return  v_customerGatewayName; }
            bool CustomerGatewayNameHasBeenSet() const { return v_customerGatewayNameHasBeenSet; }
            void setCustomerGatewayName(const std::string &s_customerGatewayName ) {
                v_customerGatewayName = s_customerGatewayName;
                v_customerGatewayNameHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
        private:
            std::string v_customerGatewayId;
            bool v_customerGatewayIdHasBeenSet;

            std::string v_customerGatewayName;
            bool v_customerGatewayNameHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPN_MODIFYCUSTOMERGATEWAYATTRIBUTESREQUEST_H