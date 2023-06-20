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
#include "volcengine/vke/model/LogSetupForUpdateClusterConfigInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
LogSetupForUpdateClusterConfigInput::LogSetupForUpdateClusterConfigInput(){
    v_enabled = false;
    v_enabledHasBeenSet = false;
    v_logTtl = 0;
    v_logTtlHasBeenSet = false;
}

RequestBuilder LogSetupForUpdateClusterConfigInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json LogSetupForUpdateClusterConfigInput::jsonPayload() const {
    json j;

    if(v_enabledHasBeenSet){
      j["Enabled"] = v_enabled;
    }

    if(v_logTtlHasBeenSet){
      j["LogTtl"] = v_logTtl;
    }

    if(v_logTypeHasBeenSet){
      j["LogType"] = v_logType;
    }
    return j;
}

