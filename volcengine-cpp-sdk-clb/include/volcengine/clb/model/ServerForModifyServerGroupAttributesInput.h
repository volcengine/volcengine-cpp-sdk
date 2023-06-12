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
#ifndef VOLCENGINE_CLB_SERVERFORMODIFYSERVERGROUPATTRIBUTESINPUT_H
#define VOLCENGINE_CLB_SERVERFORMODIFYSERVERGROUPATTRIBUTESINPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace clb{
        class ServerForModifyServerGroupAttributesInput {
        public:
            ServerForModifyServerGroupAttributesInput();
            ~ServerForModifyServerGroupAttributesInput() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            int getPort()const { return  v_port; }
            bool PortHasBeenSet() const { return v_portHasBeenSet; }
            void setPort(const int s_port ) {
                v_port = s_port;
                v_portHasBeenSet = true;
            }
            const std::string &getServerId()const { return  v_serverId; }
            bool ServerIdHasBeenSet() const { return v_serverIdHasBeenSet; }
            void setServerId(const std::string &s_serverId ) {
                v_serverId = s_serverId;
                v_serverIdHasBeenSet = true;
            }
            int getWeight()const { return  v_weight; }
            bool WeightHasBeenSet() const { return v_weightHasBeenSet; }
            void setWeight(const int s_weight ) {
                v_weight = s_weight;
                v_weightHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            int v_port;
            bool v_portHasBeenSet;

            std::string v_serverId;
            bool v_serverIdHasBeenSet;

            int v_weight;
            bool v_weightHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_SERVERFORMODIFYSERVERGROUPATTRIBUTESINPUT_H