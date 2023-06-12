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
#ifndef VOLCENGINE_ECS_CAPACITYFORDESCRIBEDEPLOYMENTSETSOUTPUT_H
#define VOLCENGINE_ECS_CAPACITYFORDESCRIBEDEPLOYMENTSETSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace ecs{
        class CapacityForDescribeDeploymentSetsOutput {
        public:
            CapacityForDescribeDeploymentSetsOutput() = default;
            ~CapacityForDescribeDeploymentSetsOutput() = default;
            void fromJsonString(const std::string &input);
            const int getAvailableCount() const { return  v_availableCount; }
            void setAvailableCount(const int s_availableCount ) {
                v_availableCount = s_availableCount;
            }
            const int getUsedCount() const { return  v_usedCount; }
            void setUsedCount(const int s_usedCount ) {
                v_usedCount = s_usedCount;
            }
            const std::string &getZoneId() const { return  v_zoneId; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
            }
        private:
            int v_availableCount{};
            int v_usedCount{};
            std::string v_zoneId;
        };
    }
}
#endif // !VOLCENGINE_ECS_CAPACITYFORDESCRIBEDEPLOYMENTSETSOUTPUT_H