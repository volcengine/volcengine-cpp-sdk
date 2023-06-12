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
#include "volcengine/ecs/model/DescribeImagesRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
DescribeImagesRequest::DescribeImagesRequest(){
    v_isSupportCloudInit = false;
    v_isSupportCloudInitHasBeenSet = false;
    v_maxResults = 0;
    v_maxResultsHasBeenSet = false;
}

RequestBuilder DescribeImagesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeImages");
    rb.withQuery("Version","2020-04-01");

    if(v_imageIdsHasBeenSet){
      unsigned v_imageIdsCount = 1;
      for(auto& item : v_imageIds){
        std::stringstream ss;
        ss << chain << "ImageIds." << v_imageIdsCount;
        rb.withQuery(ss.str(), item);
        v_imageIdsCount ++;
      }
    }

    if(v_imageStatusHasBeenSet){
        rb.withQuery(chain + "ImageStatus", v_imageStatus);

    }

    if(v_instanceTypeIdHasBeenSet){
        rb.withQuery(chain + "InstanceTypeId", v_instanceTypeId);

    }

    if(v_isSupportCloudInitHasBeenSet){
        rb.withQuery(chain + "IsSupportCloudInit", std::to_string(v_isSupportCloudInit));

    }

    if(v_maxResultsHasBeenSet){
        rb.withQuery(chain + "MaxResults", std::to_string(v_maxResults));

    }

    if(v_nextTokenHasBeenSet){
        rb.withQuery(chain + "NextToken", v_nextToken);

    }

    if(v_osTypeHasBeenSet){
        rb.withQuery(chain + "OsType", v_osType);

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

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

    if(v_tagFiltersHasBeenSet){
      unsigned v_tagFiltersCount = 1;
      for(auto& item : v_tagFilters){
        std::stringstream ss;
        ss << chain << "TagFilters." << v_tagFiltersCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_tagFiltersCount ++;
      }
    }

    if(v_visibilityHasBeenSet){
        rb.withQuery(chain + "Visibility", v_visibility);

    }

    return rb;
}

