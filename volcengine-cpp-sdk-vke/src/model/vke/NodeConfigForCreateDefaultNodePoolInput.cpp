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
#include "volcengine/vke/model/NodeConfigForCreateDefaultNodePoolInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
NodeConfigForCreateDefaultNodePoolInput::NodeConfigForCreateDefaultNodePoolInput() = default;

RequestBuilder NodeConfigForCreateDefaultNodePoolInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json NodeConfigForCreateDefaultNodePoolInput::jsonPayload() const {
    json j;

    if(v_initializeScriptHasBeenSet){
      j["InitializeScript"] = v_initializeScript;
    }

    if(v_namePrefixHasBeenSet){
      j["NamePrefix"] = v_namePrefix;
    }

    if(v_securityHasBeenSet){
      j["Security"] = v_security->jsonPayload();
    }

    if(v_tagsHasBeenSet){
      std::vector<json> vs;
      for(auto& item : v_tags){
        vs.emplace_back(item.jsonPayload());
      }
      j["Tags"] = vs;
    }
    return j;
}

