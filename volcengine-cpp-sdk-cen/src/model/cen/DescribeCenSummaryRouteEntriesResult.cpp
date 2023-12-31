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
#include "volcengine/cen/model/DescribeCenSummaryRouteEntriesResult.h"

using namespace volcengine;
using namespace volcengine::cen;
using namespace nlohmann;

void DescribeCenSummaryRouteEntriesResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("CenSummaryRouteEntries")){
        json cenSummaryRouteEntriesPres = j.at("CenSummaryRouteEntries");
        for (auto & pre : cenSummaryRouteEntriesPres) {
           CenSummaryRouteEntryForDescribeCenSummaryRouteEntriesOutput next;
           next.fromJsonString(to_string(pre));
           v_cenSummaryRouteEntries.emplace_back(next);
        }
    }
    if (j.contains("PageSize")) j.at("PageSize").get_to(v_pageSize);
    if (j.contains("TotalCount")) j.at("TotalCount").get_to(v_totalCount);
}
