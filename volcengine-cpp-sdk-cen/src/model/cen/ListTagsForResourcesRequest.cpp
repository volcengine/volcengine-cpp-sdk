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
#include "volcengine/cen/model/ListTagsForResourcesRequest.h"

using namespace volcengine;
using namespace volcengine::cen;
ListTagsForResourcesRequest::ListTagsForResourcesRequest(){
    v_maxResults = 0;
    v_maxResultsHasBeenSet = false;
}

RequestBuilder ListTagsForResourcesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","ListTagsForResources");
    rb.withQuery("Version","2020-04-01");

    if(v_maxResultsHasBeenSet){
        rb.withQuery(chain + "MaxResults", std::to_string(v_maxResults));

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

    if(v_resourceTypeHasBeenSet){
        rb.withQuery(chain + "ResourceType", v_resourceType);

    }

    if(v_tagFiltersHasBeenSet){
      unsigned v_tagFiltersCount = 1;
      for(auto& item : v_tagFilters){
        std::stringstream ss;
        ss << chain << "TagFilters." << v_tagFiltersCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_tagFiltersCount ++;
      }
    }

    if(v_tagTypeHasBeenSet){
        rb.withQuery(chain + "TagType", v_tagType);

    }

    return rb;
}


