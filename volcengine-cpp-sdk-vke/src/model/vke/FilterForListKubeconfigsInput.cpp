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
#include "volcengine/vke/model/FilterForListKubeconfigsInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
FilterForListKubeconfigsInput::FilterForListKubeconfigsInput() = default;

RequestBuilder FilterForListKubeconfigsInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json FilterForListKubeconfigsInput::jsonPayload() const {
    json j;

    if(v_clusterIdsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_clusterIds){
        vs.emplace_back(item);
      }
      j["ClusterIds"] = vs;
    }

    if(v_idsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_ids){
        vs.emplace_back(item);
      }
      j["Ids"] = vs;
    }

    if(v_typesHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_types){
        vs.emplace_back(item);
      }
      j["Types"] = vs;
    }

    if(v_userIdsHasBeenSet){
      std::vector<int> vs;
      for(auto& item : v_userIds){
        vs.emplace_back(item);
      }
      j["UserIds"] = vs;
    }
    return j;
}

