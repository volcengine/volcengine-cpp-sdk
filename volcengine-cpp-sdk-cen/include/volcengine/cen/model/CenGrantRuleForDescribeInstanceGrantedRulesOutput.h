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
#ifndef VOLCENGINE_CEN_CENGRANTRULEFORDESCRIBEINSTANCEGRANTEDRULESOUTPUT_H
#define VOLCENGINE_CEN_CENGRANTRULEFORDESCRIBEINSTANCEGRANTEDRULESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace cen{
        class CenGrantRuleForDescribeInstanceGrantedRulesOutput {
        public:
            CenGrantRuleForDescribeInstanceGrantedRulesOutput() = default;
            ~CenGrantRuleForDescribeInstanceGrantedRulesOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getCenId() const { return  v_cenId; }
            void setCenId(const std::string &s_cenId ) {
                v_cenId = s_cenId;
            }
            const std::string &getCenOwnerId() const { return  v_cenOwnerId; }
            void setCenOwnerId(const std::string &s_cenOwnerId ) {
                v_cenOwnerId = s_cenOwnerId;
            }
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getInstanceId() const { return  v_instanceId; }
            void setInstanceId(const std::string &s_instanceId ) {
                v_instanceId = s_instanceId;
            }
            const std::string &getInstanceRegionId() const { return  v_instanceRegionId; }
            void setInstanceRegionId(const std::string &s_instanceRegionId ) {
                v_instanceRegionId = s_instanceRegionId;
            }
            const std::string &getInstanceType() const { return  v_instanceType; }
            void setInstanceType(const std::string &s_instanceType ) {
                v_instanceType = s_instanceType;
            }
        private:
            std::string v_cenId;
            std::string v_cenOwnerId;
            std::string v_creationTime;
            std::string v_instanceId;
            std::string v_instanceRegionId;
            std::string v_instanceType;
        };
    }
}
#endif // !VOLCENGINE_CEN_CENGRANTRULEFORDESCRIBEINSTANCEGRANTEDRULESOUTPUT_H