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
#ifndef VOLCENGINE_CLB_MODIFYLISTENERATTRIBUTESREQUEST_H
#define VOLCENGINE_CLB_MODIFYLISTENERATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/clb/model/HealthCheckForModifyListenerAttributesInput.h"

namespace volcengine{
    namespace clb{
        class ModifyListenerAttributesRequest {
        public:
            ModifyListenerAttributesRequest();
            ~ModifyListenerAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::vector<std::string> &getAclIds()const { return  v_aclIds; }
            bool AclIdsHasBeenSet() const { return v_aclIdsHasBeenSet; }
            void setAclIds(const std::vector<std::string> &s_aclIds ) {
                v_aclIds = s_aclIds;
                v_aclIdsHasBeenSet = true;
            }
            const std::string &getAclStatus()const { return  v_aclStatus; }
            bool AclStatusHasBeenSet() const { return v_aclStatusHasBeenSet; }
            void setAclStatus(const std::string &s_aclStatus ) {
                v_aclStatus = s_aclStatus;
                v_aclStatusHasBeenSet = true;
            }
            const std::string &getAclType()const { return  v_aclType; }
            bool AclTypeHasBeenSet() const { return v_aclTypeHasBeenSet; }
            void setAclType(const std::string &s_aclType ) {
                v_aclType = s_aclType;
                v_aclTypeHasBeenSet = true;
            }
            int getBandwidth()const { return  v_bandwidth; }
            bool BandwidthHasBeenSet() const { return v_bandwidthHasBeenSet; }
            void setBandwidth(const int s_bandwidth ) {
                v_bandwidth = s_bandwidth;
                v_bandwidthHasBeenSet = true;
            }
            const std::string &getCertificateId()const { return  v_certificateId; }
            bool CertificateIdHasBeenSet() const { return v_certificateIdHasBeenSet; }
            void setCertificateId(const std::string &s_certificateId ) {
                v_certificateId = s_certificateId;
                v_certificateIdHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getEnabled()const { return  v_enabled; }
            bool EnabledHasBeenSet() const { return v_enabledHasBeenSet; }
            void setEnabled(const std::string &s_enabled ) {
                v_enabled = s_enabled;
                v_enabledHasBeenSet = true;
            }
            int getEstablishedTimeout()const { return  v_establishedTimeout; }
            bool EstablishedTimeoutHasBeenSet() const { return v_establishedTimeoutHasBeenSet; }
            void setEstablishedTimeout(const int s_establishedTimeout ) {
                v_establishedTimeout = s_establishedTimeout;
                v_establishedTimeoutHasBeenSet = true;
            }
            const std::shared_ptr<HealthCheckForModifyListenerAttributesInput> &getHealthCheck()const { return  v_healthCheck; }
            bool HealthCheckHasBeenSet() const { return v_healthCheckHasBeenSet; }
            void setHealthCheck(const std::shared_ptr<HealthCheckForModifyListenerAttributesInput> &s_healthCheck ) {
                v_healthCheck = s_healthCheck;
                v_healthCheckHasBeenSet = true;
            }
            const std::string &getListenerId()const { return  v_listenerId; }
            bool ListenerIdHasBeenSet() const { return v_listenerIdHasBeenSet; }
            void setListenerId(const std::string &s_listenerId ) {
                v_listenerId = s_listenerId;
                v_listenerIdHasBeenSet = true;
            }
            const std::string &getListenerName()const { return  v_listenerName; }
            bool ListenerNameHasBeenSet() const { return v_listenerNameHasBeenSet; }
            void setListenerName(const std::string &s_listenerName ) {
                v_listenerName = s_listenerName;
                v_listenerNameHasBeenSet = true;
            }
            int getPersistenceTimeout()const { return  v_persistenceTimeout; }
            bool PersistenceTimeoutHasBeenSet() const { return v_persistenceTimeoutHasBeenSet; }
            void setPersistenceTimeout(const int s_persistenceTimeout ) {
                v_persistenceTimeout = s_persistenceTimeout;
                v_persistenceTimeoutHasBeenSet = true;
            }
            const std::string &getPersistenceType()const { return  v_persistenceType; }
            bool PersistenceTypeHasBeenSet() const { return v_persistenceTypeHasBeenSet; }
            void setPersistenceType(const std::string &s_persistenceType ) {
                v_persistenceType = s_persistenceType;
                v_persistenceTypeHasBeenSet = true;
            }
            const std::string &getProxyProtocolType()const { return  v_proxyProtocolType; }
            bool ProxyProtocolTypeHasBeenSet() const { return v_proxyProtocolTypeHasBeenSet; }
            void setProxyProtocolType(const std::string &s_proxyProtocolType ) {
                v_proxyProtocolType = s_proxyProtocolType;
                v_proxyProtocolTypeHasBeenSet = true;
            }
            const std::string &getScheduler()const { return  v_scheduler; }
            bool SchedulerHasBeenSet() const { return v_schedulerHasBeenSet; }
            void setScheduler(const std::string &s_scheduler ) {
                v_scheduler = s_scheduler;
                v_schedulerHasBeenSet = true;
            }
            const std::string &getServerGroupId()const { return  v_serverGroupId; }
            bool ServerGroupIdHasBeenSet() const { return v_serverGroupIdHasBeenSet; }
            void setServerGroupId(const std::string &s_serverGroupId ) {
                v_serverGroupId = s_serverGroupId;
                v_serverGroupIdHasBeenSet = true;
            }
        private:
            std::vector<std::string> v_aclIds;
            bool v_aclIdsHasBeenSet;

            std::string v_aclStatus;
            bool v_aclStatusHasBeenSet;

            std::string v_aclType;
            bool v_aclTypeHasBeenSet;

            int v_bandwidth;
            bool v_bandwidthHasBeenSet;

            std::string v_certificateId;
            bool v_certificateIdHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_enabled;
            bool v_enabledHasBeenSet;

            int v_establishedTimeout;
            bool v_establishedTimeoutHasBeenSet;

            std::shared_ptr<HealthCheckForModifyListenerAttributesInput> v_healthCheck;
            bool v_healthCheckHasBeenSet;

            std::string v_listenerId;
            bool v_listenerIdHasBeenSet;

            std::string v_listenerName;
            bool v_listenerNameHasBeenSet;

            int v_persistenceTimeout;
            bool v_persistenceTimeoutHasBeenSet;

            std::string v_persistenceType;
            bool v_persistenceTypeHasBeenSet;

            std::string v_proxyProtocolType;
            bool v_proxyProtocolTypeHasBeenSet;

            std::string v_scheduler;
            bool v_schedulerHasBeenSet;

            std::string v_serverGroupId;
            bool v_serverGroupIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CLB_MODIFYLISTENERATTRIBUTESREQUEST_H