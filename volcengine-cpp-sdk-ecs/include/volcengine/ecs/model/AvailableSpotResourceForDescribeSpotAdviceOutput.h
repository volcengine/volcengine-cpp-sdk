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
#ifndef VOLCENGINE_ECS_AVAILABLESPOTRESOURCEFORDESCRIBESPOTADVICEOUTPUT_H
#define VOLCENGINE_ECS_AVAILABLESPOTRESOURCEFORDESCRIBESPOTADVICEOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace ecs{
        class AvailableSpotResourceForDescribeSpotAdviceOutput {
        public:
            AvailableSpotResourceForDescribeSpotAdviceOutput() = default;
            ~AvailableSpotResourceForDescribeSpotAdviceOutput() = default;
            void fromJsonString(const std::string &input);
            const int getAverageSpotDiscount() const { return  v_averageSpotDiscount; }
            void setAverageSpotDiscount(const int s_averageSpotDiscount ) {
                v_averageSpotDiscount = s_averageSpotDiscount;
            }
            const std::string &getInstanceType() const { return  v_instanceType; }
            void setInstanceType(const std::string &s_instanceType ) {
                v_instanceType = s_instanceType;
            }
            const int getInterruptionRate() const { return  v_interruptionRate; }
            void setInterruptionRate(const int s_interruptionRate ) {
                v_interruptionRate = s_interruptionRate;
            }
            const std::string &getInterruptionRateRange() const { return  v_interruptionRateRange; }
            void setInterruptionRateRange(const std::string &s_interruptionRateRange ) {
                v_interruptionRateRange = s_interruptionRateRange;
            }
            const std::string &getZoneId() const { return  v_zoneId; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
            }
        private:
            int v_averageSpotDiscount{};
            std::string v_instanceType;
            int v_interruptionRate{};
            std::string v_interruptionRateRange;
            std::string v_zoneId;
        };
    }
}
#endif // !VOLCENGINE_ECS_AVAILABLESPOTRESOURCEFORDESCRIBESPOTADVICEOUTPUT_H