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
#include "volcengine/vke/model/NodeConfigForUpdateNodePoolConfigInput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
NodeConfigForUpdateNodePoolConfigInput::NodeConfigForUpdateNodePoolConfigInput(){
    v_additionalContainerStorageEnabled = false;
    v_additionalContainerStorageEnabledHasBeenSet = false;
    v_autoRenew = false;
    v_autoRenewHasBeenSet = false;
    v_autoRenewPeriod = 0;
    v_autoRenewPeriodHasBeenSet = false;
    v_period = 0;
    v_periodHasBeenSet = false;
}

RequestBuilder NodeConfigForUpdateNodePoolConfigInput::withRequestBuilder(RequestBuilder rb, const std::string &chain) {

    return rb;
}

json NodeConfigForUpdateNodePoolConfigInput::jsonPayload() const {
    json j;

    if(v_additionalContainerStorageEnabledHasBeenSet){
      j["AdditionalContainerStorageEnabled"] = v_additionalContainerStorageEnabled;
    }

    if(v_autoRenewHasBeenSet){
      j["AutoRenew"] = v_autoRenew;
    }

    if(v_autoRenewPeriodHasBeenSet){
      j["AutoRenewPeriod"] = v_autoRenewPeriod;
    }

    if(v_dataVolumesHasBeenSet){
      std::vector<json> vs;
      for(auto& item : v_dataVolumes){
        vs.emplace_back(item.jsonPayload());
      }
      j["DataVolumes"] = vs;
    }

    if(v_hpcClusterIdsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_hpcClusterIds){
        vs.emplace_back(item);
      }
      j["HpcClusterIds"] = vs;
    }

    if(v_initializeScriptHasBeenSet){
      j["InitializeScript"] = v_initializeScript;
    }

    if(v_instanceTypeIdsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_instanceTypeIds){
        vs.emplace_back(item);
      }
      j["InstanceTypeIds"] = vs;
    }

    if(v_namePrefixHasBeenSet){
      j["NamePrefix"] = v_namePrefix;
    }

    if(v_periodHasBeenSet){
      j["Period"] = v_period;
    }

    if(v_securityHasBeenSet){
      j["Security"] = v_security->jsonPayload();
    }

    if(v_subnetIdsHasBeenSet){
      std::vector<std::string> vs;
      for(auto& item : v_subnetIds){
        vs.emplace_back(item);
      }
      j["SubnetIds"] = vs;
    }

    if(v_systemVolumeHasBeenSet){
      j["SystemVolume"] = v_systemVolume->jsonPayload();
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
