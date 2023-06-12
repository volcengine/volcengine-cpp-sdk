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
#ifndef VOLCENGINE_NATGATEWAY_MODIFYNATGATEWAYATTRIBUTESREQUEST_H
#define VOLCENGINE_NATGATEWAY_MODIFYNATGATEWAYATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace natgateway{
        class ModifyNatGatewayAttributesRequest {
        public:
            ModifyNatGatewayAttributesRequest();
            ~ModifyNatGatewayAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getNatGatewayId()const { return  v_natGatewayId; }
            bool NatGatewayIdHasBeenSet() const { return v_natGatewayIdHasBeenSet; }
            void setNatGatewayId(const std::string &s_natGatewayId ) {
                v_natGatewayId = s_natGatewayId;
                v_natGatewayIdHasBeenSet = true;
            }
            const std::string &getNatGatewayName()const { return  v_natGatewayName; }
            bool NatGatewayNameHasBeenSet() const { return v_natGatewayNameHasBeenSet; }
            void setNatGatewayName(const std::string &s_natGatewayName ) {
                v_natGatewayName = s_natGatewayName;
                v_natGatewayNameHasBeenSet = true;
            }
            const std::string &getSpec()const { return  v_spec; }
            bool SpecHasBeenSet() const { return v_specHasBeenSet; }
            void setSpec(const std::string &s_spec ) {
                v_spec = s_spec;
                v_specHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_natGatewayId;
            bool v_natGatewayIdHasBeenSet;

            std::string v_natGatewayName;
            bool v_natGatewayNameHasBeenSet;

            std::string v_spec;
            bool v_specHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_NATGATEWAY_MODIFYNATGATEWAYATTRIBUTESREQUEST_H