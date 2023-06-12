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
#include "volcengine/cen/model/CenForDescribeCensOutput.h"

using namespace volcengine;
using namespace volcengine::cen;
using namespace nlohmann;

void CenForDescribeCensOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AccountId")) j.at("AccountId").get_to(v_accountId);
    if (j.contains("CenBandwidthPackageIds")){
        json cenBandwidthPackageIdsPres = j.at("CenBandwidthPackageIds");
        for (auto & pre : cenBandwidthPackageIdsPres) {
           v_cenBandwidthPackageIds.emplace_back(pre);
        }
    }
    if (j.contains("CenId")) j.at("CenId").get_to(v_cenId);
    if (j.contains("CenName")) j.at("CenName").get_to(v_cenName);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("Description")) j.at("Description").get_to(v_description);
    if (j.contains("ProjectName")) j.at("ProjectName").get_to(v_projectName);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("Tags")){
        json tagsPres = j.at("Tags");
        for (auto & pre : tagsPres) {
           TagForDescribeCensOutput next;
           next.fromJsonString(to_string(pre));
           v_tags.emplace_back(next);
        }
    }
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}
