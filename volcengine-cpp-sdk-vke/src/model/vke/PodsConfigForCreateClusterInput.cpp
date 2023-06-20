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
#include "volcengine/vke/model/PodsConfigForCreateClusterInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
PodsConfigForCreateClusterInput::PodsConfigForCreateClusterInput() = default;

RequestBuilder PodsConfigForCreateClusterInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json PodsConfigForCreateClusterInput::jsonPayload() const {
    json j;

    if(v_flannelConfigHasBeenSet){
      j["FlannelConfig"] = v_flannelConfig->jsonPayload();
    }

    if(v_podNetworkModeHasBeenSet){
      j["PodNetworkMode"] = v_podNetworkMode;
    }

    if(v_vpcCniConfigHasBeenSet){
      j["VpcCniConfig"] = v_vpcCniConfig->jsonPayload();
    }
    return j;
}

