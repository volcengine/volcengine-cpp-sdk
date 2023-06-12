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
#ifndef VOLCENGINE_ECS_DESCRIBEINSTANCEVNCURLRESULT_H
#define VOLCENGINE_ECS_DESCRIBEINSTANCEVNCURLRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace ecs{
        class DescribeInstanceVncUrlResult {
        public:
            DescribeInstanceVncUrlResult() = default;
            ~DescribeInstanceVncUrlResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getVncUrl() const { return  v_vncUrl; }
            void setVncUrl(const std::string &s_vncUrl ) {
                v_vncUrl = s_vncUrl;
            }
        private:
            std::string v_vncUrl;
        };
    }
}
#endif // !VOLCENGINE_ECS_DESCRIBEINSTANCEVNCURLRESULT_H