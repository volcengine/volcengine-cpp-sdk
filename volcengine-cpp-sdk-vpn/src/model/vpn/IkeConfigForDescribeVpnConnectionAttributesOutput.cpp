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
#include "volcengine/vpn/model/IkeConfigForDescribeVpnConnectionAttributesOutput.h"

using namespace volcengine;
using namespace volcengine::vpn;
using namespace nlohmann;

void IkeConfigForDescribeVpnConnectionAttributesOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AuthAlg")) j.at("AuthAlg").get_to(v_authAlg);
    if (j.contains("DhGroup")) j.at("DhGroup").get_to(v_dhGroup);
    if (j.contains("EncAlg")) j.at("EncAlg").get_to(v_encAlg);
    if (j.contains("Lifetime")) j.at("Lifetime").get_to(v_lifetime);
    if (j.contains("LocalId")) j.at("LocalId").get_to(v_localId);
    if (j.contains("Mode")) j.at("Mode").get_to(v_mode);
    if (j.contains("Psk")) j.at("Psk").get_to(v_psk);
    if (j.contains("RemoteId")) j.at("RemoteId").get_to(v_remoteId);
    if (j.contains("Version")) j.at("Version").get_to(v_version);
}
