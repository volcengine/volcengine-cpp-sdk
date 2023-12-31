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
#include "volcengine/vke/model/UpdateAddonVersionRequest.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;
UpdateAddonVersionRequest::UpdateAddonVersionRequest() = default;

RequestBuilder UpdateAddonVersionRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) {
    rb.withQuery("Action","UpdateAddonVersion");
    rb.withQuery("Version","2022-05-12");

    return rb;
}

json UpdateAddonVersionRequest::jsonPayload() const {
    json j;

    if(v_clientTokenHasBeenSet){
      j["ClientToken"] = v_clientToken;
    }

    if(v_clusterIdHasBeenSet){
      j["ClusterId"] = v_clusterId;
    }

    if(v_nameHasBeenSet){
      j["Name"] = v_name;
    }

    if(v_versionHasBeenSet){
      j["Version"] = v_version;
    }
    return j;
}

