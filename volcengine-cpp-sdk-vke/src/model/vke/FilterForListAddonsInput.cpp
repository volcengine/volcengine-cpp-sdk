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
#include "volcengine/vke/model/FilterForListAddonsInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
FilterForListAddonsInput::FilterForListAddonsInput() = default;

RequestBuilder FilterForListAddonsInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json FilterForListAddonsInput::jsonPayload() const {
    json j;

    if(v_clusterIdsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_clusterIds){
        vs.emplace_back(item);
      }
      j["ClusterIds"] = vs;
    }

    if(v_createClientTokenHasBeenSet){
      j["CreateClientToken"] = v_createClientToken;
    }

    if(v_deployModesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_deployModes){
        vs.emplace_back(item);
      }
      j["DeployModes"] = vs;
    }

    if(v_deployNodeTypesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_deployNodeTypes){
        vs.emplace_back(item);
      }
      j["DeployNodeTypes"] = vs;
    }

    if(v_namesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_names){
        vs.emplace_back(item);
      }
      j["Names"] = vs;
    }

    if(v_statusesHasBeenSet){
      std::vector<json> vs;
      for(auto& item : v_statuses){
        vs.emplace_back(item.jsonPayload());
      }
      j["Statuses"] = vs;
    }

    if(v_updateClientTokenHasBeenSet){
      j["UpdateClientToken"] = v_updateClientToken;
    }
    return j;
}

