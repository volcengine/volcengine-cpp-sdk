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
#ifndef VOLCENGINE_DIRECTCONNECT_MODIFYDIRECTCONNECTGATEWAYATTRIBUTESREQUEST_H
#define VOLCENGINE_DIRECTCONNECT_MODIFYDIRECTCONNECTGATEWAYATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace directconnect{
        class ModifyDirectConnectGatewayAttributesRequest {
        public:
            ModifyDirectConnectGatewayAttributesRequest();
            ~ModifyDirectConnectGatewayAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getDirectConnectGatewayId()const { return  v_directConnectGatewayId; }
            bool DirectConnectGatewayIdHasBeenSet() const { return v_directConnectGatewayIdHasBeenSet; }
            void setDirectConnectGatewayId(const std::string &s_directConnectGatewayId ) {
                v_directConnectGatewayId = s_directConnectGatewayId;
                v_directConnectGatewayIdHasBeenSet = true;
            }
            const std::string &getDirectConnectGatewayName()const { return  v_directConnectGatewayName; }
            bool DirectConnectGatewayNameHasBeenSet() const { return v_directConnectGatewayNameHasBeenSet; }
            void setDirectConnectGatewayName(const std::string &s_directConnectGatewayName ) {
                v_directConnectGatewayName = s_directConnectGatewayName;
                v_directConnectGatewayNameHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_directConnectGatewayId;
            bool v_directConnectGatewayIdHasBeenSet;

            std::string v_directConnectGatewayName;
            bool v_directConnectGatewayNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_MODIFYDIRECTCONNECTGATEWAYATTRIBUTESREQUEST_H