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
#ifndef VOLCENGINE_ECS_GPUDEVICEFORDESCRIBEINSTANCETYPESOUTPUT_H
#define VOLCENGINE_ECS_GPUDEVICEFORDESCRIBEINSTANCETYPESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/ecs/model/MemoryForDescribeInstanceTypesOutput.h"
namespace volcengine{
    namespace ecs{
        class GpuDeviceForDescribeInstanceTypesOutput {
        public:
            GpuDeviceForDescribeInstanceTypesOutput() = default;
            ~GpuDeviceForDescribeInstanceTypesOutput() = default;
            void fromJsonString(const std::string &input);
            const int getCount() const { return  v_count; }
            void setCount(const int s_count ) {
                v_count = s_count;
            }
            const std::shared_ptr<MemoryForDescribeInstanceTypesOutput> &getMemory() const { return  v_memory; }
            void setMemory(const std::shared_ptr<MemoryForDescribeInstanceTypesOutput> &s_memory ) {
                v_memory = s_memory;
            }
            const std::string &getProductName() const { return  v_productName; }
            void setProductName(const std::string &s_productName ) {
                v_productName = s_productName;
            }
        private:
            int v_count{};
            std::shared_ptr<MemoryForDescribeInstanceTypesOutput> v_memory;
            std::string v_productName;
        };
    }
}
#endif // !VOLCENGINE_ECS_GPUDEVICEFORDESCRIBEINSTANCETYPESOUTPUT_H