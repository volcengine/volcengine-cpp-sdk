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
#ifndef VOLCENGINE_VPC_UPDATENETWORKACLENTRIESREQUEST_H
#define VOLCENGINE_VPC_UPDATENETWORKACLENTRIESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vpc/model/EgressAclEntryForUpdateNetworkAclEntriesInput.h"
#include "volcengine/vpc/model/IngressAclEntryForUpdateNetworkAclEntriesInput.h"

namespace volcengine{
    namespace vpc{
        class UpdateNetworkAclEntriesRequest {
        public:
            UpdateNetworkAclEntriesRequest();
            ~UpdateNetworkAclEntriesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::vector<EgressAclEntryForUpdateNetworkAclEntriesInput> &getEgressAclEntries()const { return  v_egressAclEntries; }
            bool EgressAclEntriesHasBeenSet() const { return v_egressAclEntriesHasBeenSet; }
            void setEgressAclEntries(const std::vector<EgressAclEntryForUpdateNetworkAclEntriesInput> &s_egressAclEntries ) {
                v_egressAclEntries = s_egressAclEntries;
                v_egressAclEntriesHasBeenSet = true;
            }
            const std::vector<IngressAclEntryForUpdateNetworkAclEntriesInput> &getIngressAclEntries()const { return  v_ingressAclEntries; }
            bool IngressAclEntriesHasBeenSet() const { return v_ingressAclEntriesHasBeenSet; }
            void setIngressAclEntries(const std::vector<IngressAclEntryForUpdateNetworkAclEntriesInput> &s_ingressAclEntries ) {
                v_ingressAclEntries = s_ingressAclEntries;
                v_ingressAclEntriesHasBeenSet = true;
            }
            const std::string &getNetworkAclId()const { return  v_networkAclId; }
            bool NetworkAclIdHasBeenSet() const { return v_networkAclIdHasBeenSet; }
            void setNetworkAclId(const std::string &s_networkAclId ) {
                v_networkAclId = s_networkAclId;
                v_networkAclIdHasBeenSet = true;
            }
            bool isUpdateEgressAclEntries()const { return  v_updateEgressAclEntries; }
            bool UpdateEgressAclEntriesHasBeenSet() const { return v_updateEgressAclEntriesHasBeenSet; }
            void setUpdateEgressAclEntries(const bool s_updateEgressAclEntries ) {
                v_updateEgressAclEntries = s_updateEgressAclEntries;
                v_updateEgressAclEntriesHasBeenSet = true;
            }
            bool isUpdateIngressAclEntries()const { return  v_updateIngressAclEntries; }
            bool UpdateIngressAclEntriesHasBeenSet() const { return v_updateIngressAclEntriesHasBeenSet; }
            void setUpdateIngressAclEntries(const bool s_updateIngressAclEntries ) {
                v_updateIngressAclEntries = s_updateIngressAclEntries;
                v_updateIngressAclEntriesHasBeenSet = true;
            }
        private:
            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::vector<EgressAclEntryForUpdateNetworkAclEntriesInput> v_egressAclEntries;
            bool v_egressAclEntriesHasBeenSet;

            std::vector<IngressAclEntryForUpdateNetworkAclEntriesInput> v_ingressAclEntries;
            bool v_ingressAclEntriesHasBeenSet;

            std::string v_networkAclId;
            bool v_networkAclIdHasBeenSet;

            bool v_updateEgressAclEntries;
            bool v_updateEgressAclEntriesHasBeenSet;

            bool v_updateIngressAclEntries;
            bool v_updateIngressAclEntriesHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_UPDATENETWORKACLENTRIESREQUEST_H