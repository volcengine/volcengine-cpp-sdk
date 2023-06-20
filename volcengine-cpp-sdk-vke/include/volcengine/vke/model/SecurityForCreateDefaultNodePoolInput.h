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
#ifndef VOLCENGINE_VKE_SECURITYFORCREATEDEFAULTNODEPOOLINPUT_H
#define VOLCENGINE_VKE_SECURITYFORCREATEDEFAULTNODEPOOLINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vke/model/LoginForCreateDefaultNodePoolInput.h"
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class SecurityForCreateDefaultNodePoolInput {
        public:
            SecurityForCreateDefaultNodePoolInput();
            ~SecurityForCreateDefaultNodePoolInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            const std::shared_ptr<LoginForCreateDefaultNodePoolInput> &getLogin()const { return  v_login; }
            bool LoginHasBeenSet() const { return v_loginHasBeenSet; }
            void setLogin(const std::shared_ptr<LoginForCreateDefaultNodePoolInput> &s_login ) {
                v_login = s_login;
                v_loginHasBeenSet = true;
            }
            const std::vector<std::string> &getSecurityGroupIds()const { return  v_securityGroupIds; }
            bool SecurityGroupIdsHasBeenSet() const { return v_securityGroupIdsHasBeenSet; }
            void setSecurityGroupIds(const std::vector<std::string> &s_securityGroupIds ) {
                v_securityGroupIds = s_securityGroupIds;
                v_securityGroupIdsHasBeenSet = true;
            }
            const std::vector<std::string> &getSecurityStrategies()const { return  v_securityStrategies; }
            bool SecurityStrategiesHasBeenSet() const { return v_securityStrategiesHasBeenSet; }
            void setSecurityStrategies(const std::vector<std::string> &s_securityStrategies ) {
                v_securityStrategies = s_securityStrategies;
                v_securityStrategiesHasBeenSet = true;
            }
        private:
            std::shared_ptr<LoginForCreateDefaultNodePoolInput> v_login;
            bool v_loginHasBeenSet;

            std::vector<std::string> v_securityGroupIds;
            bool v_securityGroupIdsHasBeenSet;

            std::vector<std::string> v_securityStrategies;
            bool v_securityStrategiesHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_SECURITYFORCREATEDEFAULTNODEPOOLINPUT_H