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
#include "volcengine/ecs/model/StopInstanceRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
StopInstanceRequest::StopInstanceRequest(){
    v_dryRun = false;
    v_dryRunHasBeenSet = false;
    v_forceStop = false;
    v_forceStopHasBeenSet = false;
}

RequestBuilder StopInstanceRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","StopInstance");
    rb.withQuery("Version","2020-04-01");

    if(v_clientTokenHasBeenSet){
        rb.withQuery(chain + "ClientToken", v_clientToken);

    }

    if(v_dryRunHasBeenSet){
        rb.withQuery(chain + "DryRun", std::to_string(v_dryRun));

    }

    if(v_forceStopHasBeenSet){
        rb.withQuery(chain + "ForceStop", std::to_string(v_forceStop));

    }

    if(v_instanceIdHasBeenSet){
        rb.withQuery(chain + "InstanceId", v_instanceId);

    }

    if(v_stoppedModeHasBeenSet){
        rb.withQuery(chain + "StoppedMode", v_stoppedMode);

    }

    return rb;
}


