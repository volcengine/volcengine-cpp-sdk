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
#ifndef VOLCENGINE_VKE_LOGINFORUPDATENODEPOOLCONFIGINPUT_H
#define VOLCENGINE_VKE_LOGINFORUPDATENODEPOOLCONFIGINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class LoginForUpdateNodePoolConfigInput {
        public:
            LoginForUpdateNodePoolConfigInput();
            ~LoginForUpdateNodePoolConfigInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            const std::string &getPassword()const { return  v_password; }
            bool PasswordHasBeenSet() const { return v_passwordHasBeenSet; }
            void setPassword(const std::string &s_password ) {
                v_password = s_password;
                v_passwordHasBeenSet = true;
            }
            const std::string &getSshKeyPairName()const { return  v_sshKeyPairName; }
            bool SshKeyPairNameHasBeenSet() const { return v_sshKeyPairNameHasBeenSet; }
            void setSshKeyPairName(const std::string &s_sshKeyPairName ) {
                v_sshKeyPairName = s_sshKeyPairName;
                v_sshKeyPairNameHasBeenSet = true;
            }
        private:
            std::string v_password;
            bool v_passwordHasBeenSet;

            std::string v_sshKeyPairName;
            bool v_sshKeyPairNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_LOGINFORUPDATENODEPOOLCONFIGINPUT_H