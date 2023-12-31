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
#ifndef VOLCENGINE_VPC_MODIFYSECURITYGROUPATTRIBUTESREQUEST_H
#define VOLCENGINE_VPC_MODIFYSECURITYGROUPATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpc{
        class ModifySecurityGroupAttributesRequest {
        public:
            ModifySecurityGroupAttributesRequest();
            ~ModifySecurityGroupAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getSecurityGroupId()const { return  v_securityGroupId; }
            bool SecurityGroupIdHasBeenSet() const { return v_securityGroupIdHasBeenSet; }
            void setSecurityGroupId(const std::string &s_securityGroupId ) {
                v_securityGroupId = s_securityGroupId;
                v_securityGroupIdHasBeenSet = true;
            }
            const std::string &getSecurityGroupName()const { return  v_securityGroupName; }
            bool SecurityGroupNameHasBeenSet() const { return v_securityGroupNameHasBeenSet; }
            void setSecurityGroupName(const std::string &s_securityGroupName ) {
                v_securityGroupName = s_securityGroupName;
                v_securityGroupNameHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_securityGroupId;
            bool v_securityGroupIdHasBeenSet;

            std::string v_securityGroupName;
            bool v_securityGroupNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_MODIFYSECURITYGROUPATTRIBUTESREQUEST_H