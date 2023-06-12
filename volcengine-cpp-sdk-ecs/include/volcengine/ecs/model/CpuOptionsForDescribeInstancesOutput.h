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
#ifndef VOLCENGINE_ECS_CPUOPTIONSFORDESCRIBEINSTANCESOUTPUT_H
#define VOLCENGINE_ECS_CPUOPTIONSFORDESCRIBEINSTANCESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace ecs{
        class CpuOptionsForDescribeInstancesOutput {
        public:
            CpuOptionsForDescribeInstancesOutput() = default;
            ~CpuOptionsForDescribeInstancesOutput() = default;
            void fromJsonString(const std::string &input);
            const int getCoreCount() const { return  v_coreCount; }
            void setCoreCount(const int s_coreCount ) {
                v_coreCount = s_coreCount;
            }
            const int getThreadsPerCore() const { return  v_threadsPerCore; }
            void setThreadsPerCore(const int s_threadsPerCore ) {
                v_threadsPerCore = s_threadsPerCore;
            }
        private:
            int v_coreCount{};
            int v_threadsPerCore{};
        };
    }
}
#endif // !VOLCENGINE_ECS_CPUOPTIONSFORDESCRIBEINSTANCESOUTPUT_H