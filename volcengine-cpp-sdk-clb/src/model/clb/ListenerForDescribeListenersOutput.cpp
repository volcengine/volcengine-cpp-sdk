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
#include "volcengine/clb/model/ListenerForDescribeListenersOutput.h"

using namespace volcengine;
using namespace volcengine::clb;
using namespace nlohmann;

void ListenerForDescribeListenersOutput::fromJsonString(const std::string &input) {
    auto j = json::parse(input);
    if (j.contains("AclIds")){
        json aclIdsPres = j.at("AclIds");
        for (auto & pre : aclIdsPres) {
           v_aclIds.emplace_back(pre);
        }
    }
    if (j.contains("AclStatus")) j.at("AclStatus").get_to(v_aclStatus);
    if (j.contains("AclType")) j.at("AclType").get_to(v_aclType);
    if (j.contains("Bandwidth")) j.at("Bandwidth").get_to(v_bandwidth);
    if (j.contains("CertificateId")) j.at("CertificateId").get_to(v_certificateId);
    if (j.contains("CreateTime")) j.at("CreateTime").get_to(v_createTime);
    if (j.contains("Enabled")) j.at("Enabled").get_to(v_enabled);
    if (j.contains("HealthCheck")){
        json healthCheckPres = j.at("HealthCheck");
        auto next = std::make_shared<HealthCheckForDescribeListenersOutput>();
        next->fromJsonString(to_string(healthCheckPres));
        v_healthCheck = next;
    }
    if (j.contains("ListenerId")) j.at("ListenerId").get_to(v_listenerId);
    if (j.contains("ListenerName")) j.at("ListenerName").get_to(v_listenerName);
    if (j.contains("PersistenceTimeout")) j.at("PersistenceTimeout").get_to(v_persistenceTimeout);
    if (j.contains("PersistenceType")) j.at("PersistenceType").get_to(v_persistenceType);
    if (j.contains("Port")) j.at("Port").get_to(v_port);
    if (j.contains("Protocol")) j.at("Protocol").get_to(v_protocol);
    if (j.contains("ProxyProtocolType")) j.at("ProxyProtocolType").get_to(v_proxyProtocolType);
    if (j.contains("ServerGroupId")) j.at("ServerGroupId").get_to(v_serverGroupId);
    if (j.contains("Status")) j.at("Status").get_to(v_status);
    if (j.contains("UpdateTime")) j.at("UpdateTime").get_to(v_updateTime);
}