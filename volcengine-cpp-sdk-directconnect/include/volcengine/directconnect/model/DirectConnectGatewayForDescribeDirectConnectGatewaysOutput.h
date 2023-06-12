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
#ifndef VOLCENGINE_DIRECTCONNECT_DIRECTCONNECTGATEWAYFORDESCRIBEDIRECTCONNECTGATEWAYSOUTPUT_H
#define VOLCENGINE_DIRECTCONNECT_DIRECTCONNECTGATEWAYFORDESCRIBEDIRECTCONNECTGATEWAYSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/directconnect/model/AssociateCenForDescribeDirectConnectGatewaysOutput.h"
#include "volcengine/directconnect/model/TagForDescribeDirectConnectGatewaysOutput.h"
namespace volcengine{
    namespace directconnect{
        class DirectConnectGatewayForDescribeDirectConnectGatewaysOutput {
        public:
            DirectConnectGatewayForDescribeDirectConnectGatewaysOutput() = default;
            ~DirectConnectGatewayForDescribeDirectConnectGatewaysOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getAccountId() const { return  v_accountId; }
            void setAccountId(const std::string &s_accountId ) {
                v_accountId = s_accountId;
            }
            const std::vector<AssociateCenForDescribeDirectConnectGatewaysOutput> &getAssociateCens() const { return  v_associateCens; }
            void setAssociateCens(const std::vector<AssociateCenForDescribeDirectConnectGatewaysOutput> &s_associateCens ) {
                v_associateCens = s_associateCens;
            }
            const std::string &getBusinessStatus() const { return  v_businessStatus; }
            void setBusinessStatus(const std::string &s_businessStatus ) {
                v_businessStatus = s_businessStatus;
            }
            const std::string &getCreationTime() const { return  v_creationTime; }
            void setCreationTime(const std::string &s_creationTime ) {
                v_creationTime = s_creationTime;
            }
            const std::string &getDeletedTime() const { return  v_deletedTime; }
            void setDeletedTime(const std::string &s_deletedTime ) {
                v_deletedTime = s_deletedTime;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::string &getDirectConnectGatewayId() const { return  v_directConnectGatewayId; }
            void setDirectConnectGatewayId(const std::string &s_directConnectGatewayId ) {
                v_directConnectGatewayId = s_directConnectGatewayId;
            }
            const std::string &getDirectConnectGatewayName() const { return  v_directConnectGatewayName; }
            void setDirectConnectGatewayName(const std::string &s_directConnectGatewayName ) {
                v_directConnectGatewayName = s_directConnectGatewayName;
            }
            const std::string &getLockReason() const { return  v_lockReason; }
            void setLockReason(const std::string &s_lockReason ) {
                v_lockReason = s_lockReason;
            }
            const std::string &getOverdueTime() const { return  v_overdueTime; }
            void setOverdueTime(const std::string &s_overdueTime ) {
                v_overdueTime = s_overdueTime;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
            const std::vector<TagForDescribeDirectConnectGatewaysOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForDescribeDirectConnectGatewaysOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
        private:
            std::string v_accountId;
            std::vector<AssociateCenForDescribeDirectConnectGatewaysOutput> v_associateCens;
            std::string v_businessStatus;
            std::string v_creationTime;
            std::string v_deletedTime;
            std::string v_description;
            std::string v_directConnectGatewayId;
            std::string v_directConnectGatewayName;
            std::string v_lockReason;
            std::string v_overdueTime;
            std::string v_status;
            std::vector<TagForDescribeDirectConnectGatewaysOutput> v_tags;
            std::string v_updateTime;
        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_DIRECTCONNECTGATEWAYFORDESCRIBEDIRECTCONNECTGATEWAYSOUTPUT_H