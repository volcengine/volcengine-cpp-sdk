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
#include "volcengine/ecs/model/RebootInstancesRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
RebootInstancesRequest::RebootInstancesRequest(){
    v_forceStop = false;
    v_forceStopHasBeenSet = false;
}

RequestBuilder RebootInstancesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","RebootInstances");
    rb.withQuery("Version","2020-04-01");

    if(v_clientTokenHasBeenSet){
        rb.withQuery(chain + "ClientToken", v_clientToken);

    }

    if(v_forceStopHasBeenSet){
        rb.withQuery(chain + "ForceStop", std::to_string(v_forceStop));

    }

    if(v_instanceIdsHasBeenSet){
      unsigned v_instanceIdsCount = 1;
      for(auto& item : v_instanceIds){
        std::stringstream ss;
        ss << chain << "InstanceIds." << v_instanceIdsCount;
        rb.withQuery(ss.str(), item);
        v_instanceIdsCount ++;
      }
    }

    return rb;
}


