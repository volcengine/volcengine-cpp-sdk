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
#include "volcengine/directconnect/model/TagFilterForDescribeDirectConnectVirtualInterfacesInput.h"

using namespace volcengine;
using namespace volcengine::directconnect;
TagFilterForDescribeDirectConnectVirtualInterfacesInput::TagFilterForDescribeDirectConnectVirtualInterfacesInput() = default;

RequestBuilder TagFilterForDescribeDirectConnectVirtualInterfacesInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {

    if(v_keyHasBeenSet){
        rb.withQuery(chain + "Key", v_key);

    }

    return rb;
}


