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
#ifndef VOLCENGINE_NATGATEWAY_CREATENATGATEWAYREQUEST_H
#define VOLCENGINE_NATGATEWAY_CREATENATGATEWAYREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/natgateway/model/TagForCreateNatGatewayInput.h"

namespace volcengine{
    namespace natgateway{
        class CreateNatGatewayRequest {
        public:
            CreateNatGatewayRequest();
            ~CreateNatGatewayRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            int getBillingType()const { return  v_billingType; }
            bool BillingTypeHasBeenSet() const { return v_billingTypeHasBeenSet; }
            void setBillingType(const int s_billingType ) {
                v_billingType = s_billingType;
                v_billingTypeHasBeenSet = true;
            }
            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getNatGatewayName()const { return  v_natGatewayName; }
            bool NatGatewayNameHasBeenSet() const { return v_natGatewayNameHasBeenSet; }
            void setNatGatewayName(const std::string &s_natGatewayName ) {
                v_natGatewayName = s_natGatewayName;
                v_natGatewayNameHasBeenSet = true;
            }
            int getPeriod()const { return  v_period; }
            bool PeriodHasBeenSet() const { return v_periodHasBeenSet; }
            void setPeriod(const int s_period ) {
                v_period = s_period;
                v_periodHasBeenSet = true;
            }
            const std::string &getPeriodUnit()const { return  v_periodUnit; }
            bool PeriodUnitHasBeenSet() const { return v_periodUnitHasBeenSet; }
            void setPeriodUnit(const std::string &s_periodUnit ) {
                v_periodUnit = s_periodUnit;
                v_periodUnitHasBeenSet = true;
            }
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            const std::string &getSpec()const { return  v_spec; }
            bool SpecHasBeenSet() const { return v_specHasBeenSet; }
            void setSpec(const std::string &s_spec ) {
                v_spec = s_spec;
                v_specHasBeenSet = true;
            }
            const std::string &getSubnetId()const { return  v_subnetId; }
            bool SubnetIdHasBeenSet() const { return v_subnetIdHasBeenSet; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
                v_subnetIdHasBeenSet = true;
            }
            const std::vector<TagForCreateNatGatewayInput> &getTags()const { return  v_tags; }
            bool TagsHasBeenSet() const { return v_tagsHasBeenSet; }
            void setTags(const std::vector<TagForCreateNatGatewayInput> &s_tags ) {
                v_tags = s_tags;
                v_tagsHasBeenSet = true;
            }
            const std::string &getVpcId()const { return  v_vpcId; }
            bool VpcIdHasBeenSet() const { return v_vpcIdHasBeenSet; }
            void setVpcId(const std::string &s_vpcId ) {
                v_vpcId = s_vpcId;
                v_vpcIdHasBeenSet = true;
            }
        private:
            int v_billingType;
            bool v_billingTypeHasBeenSet;

            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_natGatewayName;
            bool v_natGatewayNameHasBeenSet;

            int v_period;
            bool v_periodHasBeenSet;

            std::string v_periodUnit;
            bool v_periodUnitHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::string v_spec;
            bool v_specHasBeenSet;

            std::string v_subnetId;
            bool v_subnetIdHasBeenSet;

            std::vector<TagForCreateNatGatewayInput> v_tags;
            bool v_tagsHasBeenSet;

            std::string v_vpcId;
            bool v_vpcIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_NATGATEWAY_CREATENATGATEWAYREQUEST_H