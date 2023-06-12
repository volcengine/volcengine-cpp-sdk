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
#ifndef VOLCENGINE_ECS_MODIFYINSTANCEDEPLOYMENTREQUEST_H
#define VOLCENGINE_ECS_MODIFYINSTANCEDEPLOYMENTREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace ecs{
        class ModifyInstanceDeploymentRequest {
        public:
            ModifyInstanceDeploymentRequest();
            ~ModifyInstanceDeploymentRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getDeploymentSetId()const { return  v_deploymentSetId; }
            bool DeploymentSetIdHasBeenSet() const { return v_deploymentSetIdHasBeenSet; }
            void setDeploymentSetId(const std::string &s_deploymentSetId ) {
                v_deploymentSetId = s_deploymentSetId;
                v_deploymentSetIdHasBeenSet = true;
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

            std::string v_deploymentSetId;
            bool v_deploymentSetIdHasBeenSet;

            std::string v_instanceId;
            bool v_instanceIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_ECS_MODIFYINSTANCEDEPLOYMENTREQUEST_H