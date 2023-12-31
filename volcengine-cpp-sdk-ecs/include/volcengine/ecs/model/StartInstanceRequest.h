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
#ifndef VOLCENGINE_ECS_STARTINSTANCEREQUEST_H
#define VOLCENGINE_ECS_STARTINSTANCEREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace ecs{
        class StartInstanceRequest {
        public:
            StartInstanceRequest();
            ~StartInstanceRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            bool isDryRun()const { return  v_dryRun; }
            bool DryRunHasBeenSet() const { return v_dryRunHasBeenSet; }
            void setDryRun(const bool s_dryRun ) {
                v_dryRun = s_dryRun;
                v_dryRunHasBeenSet = true;
            }
            const std::string &getInstanceId()const { return  v_instanceId; }
            bool InstanceIdHasBeenSet() const { return v_instanceIdHasBeenSet; }
            void setInstanceId(const std::string &s_instanceId ) {
                v_instanceId = s_instanceId;
                v_instanceIdHasBeenSet = true;
            }
        private:
            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            bool v_dryRun;
            bool v_dryRunHasBeenSet;

            std::string v_instanceId;
            bool v_instanceIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_ECS_STARTINSTANCEREQUEST_H