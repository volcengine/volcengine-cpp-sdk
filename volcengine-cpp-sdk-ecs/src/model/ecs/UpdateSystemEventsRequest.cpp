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
#include "volcengine/ecs/model/UpdateSystemEventsRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
UpdateSystemEventsRequest::UpdateSystemEventsRequest() = default;

RequestBuilder UpdateSystemEventsRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","UpdateSystemEvents");
    rb.withQuery("Version","2020-04-01");

    if(v_eventIdsHasBeenSet){
      unsigned v_eventIdsCount = 1;
      for(auto& item : v_eventIds){
        std::stringstream ss;
        ss << chain << "EventIds." << v_eventIdsCount;
        rb.withQuery(ss.str(), item);
        v_eventIdsCount ++;
      }
    }

    if(v_operatedEndAtHasBeenSet){
        rb.withQuery(chain + "OperatedEndAt", v_operatedEndAt);

    }

    if(v_operatedStartAtHasBeenSet){
        rb.withQuery(chain + "OperatedStartAt", v_operatedStartAt);

    }

    if(v_statusHasBeenSet){
        rb.withQuery(chain + "Status", v_status);

    }

    if(v_updatedAtHasBeenSet){
        rb.withQuery(chain + "UpdatedAt", v_updatedAt);

    }

    return rb;
}


