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
#include "volcengine/cen/model/InterRegionBandwidthForDescribeCenInterRegionBandwidthsOutput.h"

using namespace volcengine;
using namespace volcengine::cen;
using namespace nlohmann;

void InterRegionBandwidthForDescribeCenInterRegionBandwidthsOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("Bandwidth")) j.at("Bandwidth").get_to(v_bandwidth);
    if (j.contains("CenBandwidthPackageId")) j.at("CenBandwidthPackageId").get_to(v_cenBandwidthPackageId);
    if (j.contains("CenId")) j.at("CenId").get_to(v_cenId);
    if (j.contains("CreationTime")) j.at("CreationTime").get_to(v_creationTime);
    if (j.contains("InterRegionBandwidthId")) j.at("InterRegionBandwidthId").get_to(v_interRegionBandwidthId);
    if (j.contains("LocalRegionId")) j.at("LocalRegionId").get_to(v_localRegionId);
    if (j.contains("PeerRegionId")) j.at("PeerRegionId").get_to(v_peerRegionId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}
