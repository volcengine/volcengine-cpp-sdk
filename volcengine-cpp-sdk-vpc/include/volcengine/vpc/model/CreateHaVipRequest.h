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
#ifndef VOLCENGINE_VPC_CREATEHAVIPREQUEST_H
#define VOLCENGINE_VPC_CREATEHAVIPREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpc{
        class CreateHaVipRequest {
        public:
            CreateHaVipRequest();
            ~CreateHaVipRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getHaVipName()const { return  v_haVipName; }
            bool HaVipNameHasBeenSet() const { return v_haVipNameHasBeenSet; }
            void setHaVipName(const std::string &s_haVipName ) {
                v_haVipName = s_haVipName;
                v_haVipNameHasBeenSet = true;
            }
            const std::string &getIpAddress()const { return  v_ipAddress; }
            bool IpAddressHasBeenSet() const { return v_ipAddressHasBeenSet; }
            void setIpAddress(const std::string &s_ipAddress ) {
                v_ipAddress = s_ipAddress;
                v_ipAddressHasBeenSet = true;
            }
            const std::string &getSubnetId()const { return  v_subnetId; }
            bool SubnetIdHasBeenSet() const { return v_subnetIdHasBeenSet; }
            void setSubnetId(const std::string &s_subnetId ) {
                v_subnetId = s_subnetId;
                v_subnetIdHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_haVipName;
            bool v_haVipNameHasBeenSet;

            std::string v_ipAddress;
            bool v_ipAddressHasBeenSet;

            std::string v_subnetId;
            bool v_subnetIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_CREATEHAVIPREQUEST_H