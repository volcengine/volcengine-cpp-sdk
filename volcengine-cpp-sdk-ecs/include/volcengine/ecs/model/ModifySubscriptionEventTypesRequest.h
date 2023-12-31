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
#ifndef VOLCENGINE_ECS_MODIFYSUBSCRIPTIONEVENTTYPESREQUEST_H
#define VOLCENGINE_ECS_MODIFYSUBSCRIPTIONEVENTTYPESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace ecs{
        class ModifySubscriptionEventTypesRequest {
        public:
            ModifySubscriptionEventTypesRequest();
            ~ModifySubscriptionEventTypesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::vector<std::string> &getEventTypes()const { return  v_eventTypes; }
            bool EventTypesHasBeenSet() const { return v_eventTypesHasBeenSet; }
            void setEventTypes(const std::vector<std::string> &s_eventTypes ) {
                v_eventTypes = s_eventTypes;
                v_eventTypesHasBeenSet = true;
            }
            const std::string &getSubscriptionId()const { return  v_subscriptionId; }
            bool SubscriptionIdHasBeenSet() const { return v_subscriptionIdHasBeenSet; }
            void setSubscriptionId(const std::string &s_subscriptionId ) {
                v_subscriptionId = s_subscriptionId;
                v_subscriptionIdHasBeenSet = true;
            }
        private:
            std::vector<std::string> v_eventTypes;
            bool v_eventTypesHasBeenSet;

            std::string v_subscriptionId;
            bool v_subscriptionIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_ECS_MODIFYSUBSCRIPTIONEVENTTYPESREQUEST_H