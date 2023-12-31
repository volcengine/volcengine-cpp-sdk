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
#ifndef VOLCENGINE_VKE_AUTOSCALINGFORCREATENODEPOOLINPUT_H
#define VOLCENGINE_VKE_AUTOSCALINGFORCREATENODEPOOLINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class AutoScalingForCreateNodePoolInput {
        public:
            AutoScalingForCreateNodePoolInput();
            ~AutoScalingForCreateNodePoolInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            int getDesiredReplicas()const { return  v_desiredReplicas; }
            bool DesiredReplicasHasBeenSet() const { return v_desiredReplicasHasBeenSet; }
            void setDesiredReplicas(const int s_desiredReplicas ) {
                v_desiredReplicas = s_desiredReplicas;
                v_desiredReplicasHasBeenSet = true;
            }
            bool isEnabled()const { return  v_enabled; }
            bool EnabledHasBeenSet() const { return v_enabledHasBeenSet; }
            void setEnabled(const bool s_enabled ) {
                v_enabled = s_enabled;
                v_enabledHasBeenSet = true;
            }
            int getMaxReplicas()const { return  v_maxReplicas; }
            bool MaxReplicasHasBeenSet() const { return v_maxReplicasHasBeenSet; }
            void setMaxReplicas(const int s_maxReplicas ) {
                v_maxReplicas = s_maxReplicas;
                v_maxReplicasHasBeenSet = true;
            }
            int getMinReplicas()const { return  v_minReplicas; }
            bool MinReplicasHasBeenSet() const { return v_minReplicasHasBeenSet; }
            void setMinReplicas(const int s_minReplicas ) {
                v_minReplicas = s_minReplicas;
                v_minReplicasHasBeenSet = true;
            }
            int getPriority()const { return  v_priority; }
            bool PriorityHasBeenSet() const { return v_priorityHasBeenSet; }
            void setPriority(const int s_priority ) {
                v_priority = s_priority;
                v_priorityHasBeenSet = true;
            }
            const std::string &getSubnetPolicy()const { return  v_subnetPolicy; }
            bool SubnetPolicyHasBeenSet() const { return v_subnetPolicyHasBeenSet; }
            void setSubnetPolicy(const std::string &s_subnetPolicy ) {
                v_subnetPolicy = s_subnetPolicy;
                v_subnetPolicyHasBeenSet = true;
            }
        private:
            int v_desiredReplicas;
            bool v_desiredReplicasHasBeenSet;

            bool v_enabled;
            bool v_enabledHasBeenSet;

            int v_maxReplicas;
            bool v_maxReplicasHasBeenSet;

            int v_minReplicas;
            bool v_minReplicasHasBeenSet;

            int v_priority;
            bool v_priorityHasBeenSet;

            std::string v_subnetPolicy;
            bool v_subnetPolicyHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_AUTOSCALINGFORCREATENODEPOOLINPUT_H