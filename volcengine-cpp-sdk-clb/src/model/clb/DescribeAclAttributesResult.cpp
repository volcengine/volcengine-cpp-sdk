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
#include "volcengine/clb/model/DescribeAclAttributesResult.h"

using namespace volcengine;
using namespace volcengine::clb;
using namespace nlohmann;

void DescribeAclAttributesResult::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    j = j.at("Result");
    if (j.contains("AclEntries")){
        json aclEntriesPres = j.at("AclEntries");
        for (auto & pre : aclEntriesPres) {
           AclEntryForDescribeAclAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_aclEntries.emplace_back(next);
        }
    }
    if (j.contains("AclId")) j.at("AclId").get_to(v_aclId);
    if (j.contains("AclName")) j.at("AclName").get_to(v_aclName);
    if (j.contains("CreateTime")) j.at("CreateTime").get_to(v_createTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("Listeners")){
        json listenersPres = j.at("Listeners");
        for (auto & pre : listenersPres) {
           ListenerForDescribeAclAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_listeners.emplace_back(next);
        }
    }
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("RequestId")) j.at("RequestId").get_to(v_requestId);
    if (j.contains("ServiceManaged")) j.at("ServiceManaged").get_to(v_serviceManaged);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeAclAttributesOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}