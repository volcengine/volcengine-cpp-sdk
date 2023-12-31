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
#include "volcengine/ecs/model/DescribeSystemEventsRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
DescribeSystemEventsRequest::DescribeSystemEventsRequest() = default;

RequestBuilder DescribeSystemEventsRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeSystemEvents");
    rb.withQuery("Version","2020-04-01");

    if(v_createdAtEndHasBeenSet){
        rb.withQuery(chain + "CreatedAtEnd", v_createdAtEnd);

    }

    if(v_createdAtStartHasBeenSet){
        rb.withQuery(chain + "CreatedAtStart", v_createdAtStart);

    }

    if(v_eventIdsHasBeenSet){
      unsigned v_eventIdsCount = 1;
      for(auto& item : v_eventIds){
        std::stringstream ss;
        ss << chain << "EventIds." << v_eventIdsCount;
        rb.withQuery(ss.str(), item);
        v_eventIdsCount ++;
      }
    }

    if(v_maxResultsHasBeenSet){
        rb.withQuery(chain + "MaxResults", v_maxResults);

    }

    if(v_nextTokenHasBeenSet){
        rb.withQuery(chain + "NextToken", v_nextToken);

    }

    if(v_resourceIdsHasBeenSet){
      unsigned v_resourceIdsCount = 1;
      for(auto& item : v_resourceIds){
        std::stringstream ss;
        ss << chain << "ResourceIds." << v_resourceIdsCount;
        rb.withQuery(ss.str(), item);
        v_resourceIdsCount ++;
      }
    }

    if(v_statusHasBeenSet){
      unsigned v_statusCount = 1;
      for(auto& item : v_status){
        std::stringstream ss;
        ss << chain << "Status." << v_statusCount;
        rb.withQuery(ss.str(), item);
        v_statusCount ++;
      }
    }

    if(v_typesHasBeenSet){
      unsigned v_typesCount = 1;
      for(auto& item : v_types){
        std::stringstream ss;
        ss << chain << "Types." << v_typesCount;
        rb.withQuery(ss.str(), item);
        v_typesCount ++;
      }
    }

    return rb;
}


