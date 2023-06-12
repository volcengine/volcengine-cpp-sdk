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
#ifndef VOLCENGINE_ECS_GPUFORDESCRIBESPOTADVICEINPUT_H
#define VOLCENGINE_ECS_GPUFORDESCRIBESPOTADVICEINPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace ecs{
        class GpuForDescribeSpotAdviceInput {
        public:
            GpuForDescribeSpotAdviceInput();
            ~GpuForDescribeSpotAdviceInput() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            int getCount()const { return  v_count; }
            bool CountHasBeenSet() const { return v_countHasBeenSet; }
            void setCount(const int s_count ) {
                v_count = s_count;
                v_countHasBeenSet = true;
            }
            const std::string &getProductName()const { return  v_productName; }
            bool ProductNameHasBeenSet() const { return v_productNameHasBeenSet; }
            void setProductName(const std::string &s_productName ) {
                v_productName = s_productName;
                v_productNameHasBeenSet = true;
            }
        private:
            int v_count;
            bool v_countHasBeenSet;

            std::string v_productName;
            bool v_productNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_ECS_GPUFORDESCRIBESPOTADVICEINPUT_H