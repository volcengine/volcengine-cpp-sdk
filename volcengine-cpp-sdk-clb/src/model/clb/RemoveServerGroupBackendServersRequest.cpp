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
#include "volcengine/clb/model/RemoveServerGroupBackendServersRequest.h"

using namespace volcengine;
using namespace volcengine::clb;
RemoveServerGroupBackendServersRequest::RemoveServerGroupBackendServersRequest() = default;

RequestBuilder RemoveServerGroupBackendServersRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","RemoveServerGroupBackendServers");
    rb.withQuery("Version","2020-04-01");

    if(v_serverGroupIdHasBeenSet){
        rb.withQuery(chain + "ServerGroupId", v_serverGroupId);

    }

    if(v_serverIdsHasBeenSet){
      unsigned v_serverIdsCount = 1;
      for(auto& item : v_serverIds){
        std::stringstream ss;
        ss << chain << "ServerIds." << v_serverIdsCount;
        rb.withQuery(ss.str(), item);
        v_serverIdsCount ++;
      }
    }

    return rb;
}


