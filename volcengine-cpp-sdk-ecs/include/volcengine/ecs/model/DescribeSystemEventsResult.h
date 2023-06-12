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
#ifndef VOLCENGINE_ECS_DESCRIBESYSTEMEVENTSRESULT_H
#define VOLCENGINE_ECS_DESCRIBESYSTEMEVENTSRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/ecs/model/SystemEventForDescribeSystemEventsOutput.h"
namespace volcengine{
    namespace ecs{
        class DescribeSystemEventsResult {
        public:
            DescribeSystemEventsResult() = default;
            ~DescribeSystemEventsResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getNextToken() const { return  v_nextToken; }
            void setNextToken(const std::string &s_nextToken ) {
                v_nextToken = s_nextToken;
            }
            const std::vector<SystemEventForDescribeSystemEventsOutput> &getSystemEvents() const { return  v_systemEvents; }
            void setSystemEvents(const std::vector<SystemEventForDescribeSystemEventsOutput> &s_systemEvents ) {
                v_systemEvents = s_systemEvents;
            }
        private:
            std::string v_nextToken;
            std::vector<SystemEventForDescribeSystemEventsOutput> v_systemEvents;
        };
    }
}
#endif // !VOLCENGINE_ECS_DESCRIBESYSTEMEVENTSRESULT_H