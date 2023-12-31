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
#ifndef VOLCENGINE_VKE_STATUSFORLISTNODESOUTPUT_H
#define VOLCENGINE_VKE_STATUSFORLISTNODESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vke/model/ConditionForListNodesOutput.h"
namespace volcengine{
    namespace vke{
        class StatusForListNodesOutput {
        public:
            StatusForListNodesOutput() = default;
            ~StatusForListNodesOutput() = default;
            void fromJsonString(const std::string &input);
            const std::vector<ConditionForListNodesOutput> &getConditions() const { return  v_conditions; }
            void setConditions(const std::vector<ConditionForListNodesOutput> &s_conditions ) {
                v_conditions = s_conditions;
            }
            const std::string &getPhase() const { return  v_phase; }
            void setPhase(const std::string &s_phase ) {
                v_phase = s_phase;
            }
        private:
            std::vector<ConditionForListNodesOutput> v_conditions;
            std::string v_phase;
        };
    }
}
#endif // !VOLCENGINE_VKE_STATUSFORLISTNODESOUTPUT_H