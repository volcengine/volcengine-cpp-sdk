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
#include "volcengine/ecs/model/DescribeSpotAdviceRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
DescribeSpotAdviceRequest::DescribeSpotAdviceRequest(){
    v_cpus = 0;
    v_cpusHasBeenSet = false;
    v_maxResults = 0;
    v_maxResultsHasBeenSet = false;
    v_memorySize = 0;
    v_memorySizeHasBeenSet = false;
    v_minCpus = 0;
    v_minCpusHasBeenSet = false;
    v_minMemorySize = 0;
    v_minMemorySizeHasBeenSet = false;
}

RequestBuilder DescribeSpotAdviceRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","DescribeSpotAdvice");
    rb.withQuery("Version","2020-04-01");

    if(v_cpusHasBeenSet){
        rb.withQuery(chain + "Cpus", std::to_string(v_cpus));

    }

    if(v_gpuHasBeenSet){
        rb = v_gpu->withRequestBuilder(rb, "Gpu.");
    }

    if(v_instanceTypeFamilyHasBeenSet){
        rb.withQuery(chain + "InstanceTypeFamily", v_instanceTypeFamily);

    }

    if(v_instanceTypeIdsHasBeenSet){
      unsigned v_instanceTypeIdsCount = 1;
      for(auto& item : v_instanceTypeIds){
        std::stringstream ss;
        ss << chain << "InstanceTypeIds." << v_instanceTypeIdsCount;
        rb.withQuery(ss.str(), item);
        v_instanceTypeIdsCount ++;
      }
    }

    if(v_maxResultsHasBeenSet){
        rb.withQuery(chain + "MaxResults", std::to_string(v_maxResults));

    }

    if(v_memorySizeHasBeenSet){
        rb.withQuery(chain + "MemorySize", std::to_string(v_memorySize));

    }

    if(v_minCpusHasBeenSet){
        rb.withQuery(chain + "MinCpus", std::to_string(v_minCpus));

    }

    if(v_minMemorySizeHasBeenSet){
        rb.withQuery(chain + "MinMemorySize", std::to_string(v_minMemorySize));

    }

    if(v_nextTokenHasBeenSet){
        rb.withQuery(chain + "NextToken", v_nextToken);

    }

    return rb;
}

