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
#include "volcengine/vke/model/CreateClusterRequest.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
CreateClusterRequest::CreateClusterRequest(){
    v_deleteProtectionEnabled = false;
    v_deleteProtectionEnabledHasBeenSet = false;
}

RequestBuilder CreateClusterRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) {
    rb.withQuery("Action","CreateCluster");
    rb.withQuery("Version","2022-05-12");

    return rb;
}

json CreateClusterRequest::jsonPayload() const {
    json j;

    if(v_clientTokenHasBeenSet){
      j["ClientToken"] = v_clientToken;
    }

    if(v_clusterConfigHasBeenSet){
      j["ClusterConfig"] = v_clusterConfig->jsonPayload();
    }

    if(v_deleteProtectionEnabledHasBeenSet){
      j["DeleteProtectionEnabled"] = v_deleteProtectionEnabled;
    }

    if(v_descriptionHasBeenSet){
      j["Description"] = v_description;
    }

    if(v_kubernetesVersionHasBeenSet){
      j["KubernetesVersion"] = v_kubernetesVersion;
    }

    if(v_loggingConfigHasBeenSet){
      j["LoggingConfig"] = v_loggingConfig->jsonPayload();
    }

    if(v_nameHasBeenSet){
      j["Name"] = v_name;
    }

    if(v_podsConfigHasBeenSet){
      j["PodsConfig"] = v_podsConfig->jsonPayload();
    }

    if(v_servicesConfigHasBeenSet){
      j["ServicesConfig"] = v_servicesConfig->jsonPayload();
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

