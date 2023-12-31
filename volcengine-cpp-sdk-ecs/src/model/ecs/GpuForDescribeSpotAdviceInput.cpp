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
#include <sstream>
#include <volcengine/core/RequestBuilder.h>
#include <volcengine/core/utils/StringUtils.h>
#include "volcengine/ecs/model/GpuForDescribeSpotAdviceInput.h"

using namespace volcengine;
using namespace volcengine::ecs;
GpuForDescribeSpotAdviceInput::GpuForDescribeSpotAdviceInput(){
    v_count = 0;
    v_countHasBeenSet = false;
}

RequestBuilder GpuForDescribeSpotAdviceInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {

    if(v_countHasBeenSet){
        rb.withQuery(chain + "Count", std::to_string(v_count));

    }

    if(v_productNameHasBeenSet){
        rb.withQuery(chain + "ProductName", v_productName);

    }

    return rb;
}


