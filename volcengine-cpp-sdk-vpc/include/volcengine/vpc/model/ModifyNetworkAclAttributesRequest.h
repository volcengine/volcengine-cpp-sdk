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
#ifndef VOLCENGINE_VPC_MODIFYNETWORKACLATTRIBUTESREQUEST_H
#define VOLCENGINE_VPC_MODIFYNETWORKACLATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpc{
        class ModifyNetworkAclAttributesRequest {
        public:
            ModifyNetworkAclAttributesRequest();
            ~ModifyNetworkAclAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getNetworkAclId()const { return  v_networkAclId; }
            bool NetworkAclIdHasBeenSet() const { return v_networkAclIdHasBeenSet; }
            void setNetworkAclId(const std::string &s_networkAclId ) {
                v_networkAclId = s_networkAclId;
                v_networkAclIdHasBeenSet = true;
            }
            const std::string &getNetworkAclName()const { return  v_networkAclName; }
            bool NetworkAclNameHasBeenSet() const { return v_networkAclNameHasBeenSet; }
            void setNetworkAclName(const std::string &s_networkAclName ) {
                v_networkAclName = s_networkAclName;
                v_networkAclNameHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_networkAclId;
            bool v_networkAclIdHasBeenSet;

            std::string v_networkAclName;
            bool v_networkAclNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_MODIFYNETWORKACLATTRIBUTESREQUEST_H