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
#include "volcengine/vke/model/NodeStatisticsForListNodePoolsOutput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;

void NodeStatisticsForListNodePoolsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("CreatingCount")) j.at("CreatingCount").get_to(v_creatingCount);
    if (j.contains("DeletingCount")) j.at("DeletingCount").get_to(v_deletingCount);
    if (j.contains("FailedCount")) j.at("FailedCount").get_to(v_failedCount);
    if (j.contains("RunningCount")) j.at("RunningCount").get_to(v_runningCount);
    if (j.contains("TotalCount")) j.at("TotalCount").get_to(v_totalCount);
    if (j.contains("UpdatingCount")) j.at("UpdatingCount").get_to(v_updatingCount);
}
