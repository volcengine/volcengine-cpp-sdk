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
#include "volcengine/vke/model/VersionForListSupportedAddonsOutput.h"

using namespace volcengine;
using namespace volcengine::vke;
using namespace nlohmann;

void VersionForListSupportedAddonsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("Compatibilities")){
        json compatibilitiesPres = j.at("Compatibilities");
        for (auto & pre : compatibilitiesPres) {
           CompatibilityForListSupportedAddonsOutput next;
           next.fromJsonString(to_string(pre));
           v_compatibilities.emplace_back(next);
        }
    }
    if (j.contains("CompatibleVersions")){
        json compatibleVersionsPres = j.at("CompatibleVersions");
        for (auto & pre : compatibleVersionsPres) {
           v_compatibleVersions.emplace_back(pre);
        }
    }
    if (j.contains("Version")) j.at("Version").get_to(v_version);
}
