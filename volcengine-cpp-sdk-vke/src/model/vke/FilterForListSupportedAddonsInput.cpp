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
#include "volcengine/vke/model/FilterForListSupportedAddonsInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
FilterForListSupportedAddonsInput::FilterForListSupportedAddonsInput() = default;

RequestBuilder FilterForListSupportedAddonsInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json FilterForListSupportedAddonsInput::jsonPayload() const {
    json j;

    if(v_categoriesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_categories){
        vs.emplace_back(item);
      }
      j["Categories"] = vs;
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

    if(v_nameHasBeenSet){
      j["Name"] = v_name;
    }

    if(v_necessariesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_necessaries){
        vs.emplace_back(item);
      }
      j["Necessaries"] = vs;
    }

    if(v_podNetworkModesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_podNetworkModes){
        vs.emplace_back(item);
      }
      j["PodNetworkModes"] = vs;
    }

    if(v_versionsCompatibilitiesKubernetesVersionsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_versionsCompatibilitiesKubernetesVersions){
        vs.emplace_back(item);
      }
      j["VersionsCompatibilitiesKubernetesVersions"] = vs;
    }
    return j;
}
