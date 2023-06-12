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
#include "volcengine/storageebs/model/ModifyVolumeChargeTypeRequest.h"

using namespace volcengine;
using namespace volcengine::storageebs;
ModifyVolumeChargeTypeRequest::ModifyVolumeChargeTypeRequest(){
    v_autoPay = false;
    v_autoPayHasBeenSet = false;
}

RequestBuilder ModifyVolumeChargeTypeRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ModifyVolumeChargeType");
    rb.withQuery("Version","2020-04-01");

    if(v_autoPayHasBeenSet){
        rb.withQuery(chain + "AutoPay", std::to_string(v_autoPay));

    }

    if(v_diskChargeTypeHasBeenSet){
        rb.withQuery(chain + "DiskChargeType", v_diskChargeType);

    }

    if(v_instanceIdHasBeenSet){
        rb.withQuery(chain + "InstanceId", v_instanceId);

    }

    if(v_volumeIdsHasBeenSet){
      unsigned v_volumeIdsCount = 1;
      for(auto& item : v_volumeIds){
        std::stringstream ss;
        ss << chain << "VolumeIds." << v_volumeIdsCount;
        rb.withQuery(ss.str(), item);
        v_volumeIdsCount ++;
      }
    }

    return rb;
}


