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
#ifndef VOLCENGINE_ECS_DESCRIBEINSTANCETYPESRESULT_H
#define VOLCENGINE_ECS_DESCRIBEINSTANCETYPESRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/ecs/model/InstanceTypeForDescribeInstanceTypesOutput.h"
namespace volcengine{
    namespace ecs{
        class DescribeInstanceTypesResult {
        public:
            DescribeInstanceTypesResult() = default;
            ~DescribeInstanceTypesResult() = default;
            void fromJsonString(const std::string &input);
            const std::vector<InstanceTypeForDescribeInstanceTypesOutput> &getInstanceTypes() const { return  v_instanceTypes; }
            void setInstanceTypes(const std::vector<InstanceTypeForDescribeInstanceTypesOutput> &s_instanceTypes ) {
                v_instanceTypes = s_instanceTypes;
            }
            const std::string &getNextToken() const { return  v_nextToken; }
            void setNextToken(const std::string &s_nextToken ) {
                v_nextToken = s_nextToken;
            }
            const int getTotalCount() const { return  v_totalCount; }
            void setTotalCount(const int s_totalCount ) {
                v_totalCount = s_totalCount;
            }
        private:
            std::vector<InstanceTypeForDescribeInstanceTypesOutput> v_instanceTypes;
            std::string v_nextToken;
            int v_totalCount{};
        };
    }
}
#endif // !VOLCENGINE_ECS_DESCRIBEINSTANCETYPESRESULT_H