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
#ifndef VOLCENGINE_NATGATEWAY_DNATENTRYFORDESCRIBEDNATENTRIESOUTPUT_H
#define VOLCENGINE_NATGATEWAY_DNATENTRYFORDESCRIBEDNATENTRIESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace natgateway{
        class DnatEntryForDescribeDnatEntriesOutput {
        public:
            DnatEntryForDescribeDnatEntriesOutput() = default;
            ~DnatEntryForDescribeDnatEntriesOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getDnatEntryId() const { return  v_dnatEntryId; }
            void setDnatEntryId(const std::string &s_dnatEntryId ) {
                v_dnatEntryId = s_dnatEntryId;
            }
            const std::string &getDnatEntryName() const { return  v_dnatEntryName; }
            void setDnatEntryName(const std::string &s_dnatEntryName ) {
                v_dnatEntryName = s_dnatEntryName;
            }
            const std::string &getExternalIp() const { return  v_externalIp; }
            void setExternalIp(const std::string &s_externalIp ) {
                v_externalIp = s_externalIp;
            }
            const std::string &getExternalPort() const { return  v_externalPort; }
            void setExternalPort(const std::string &s_externalPort ) {
                v_externalPort = s_externalPort;
            }
            const std::string &getInternalIp() const { return  v_internalIp; }
            void setInternalIp(const std::string &s_internalIp ) {
                v_internalIp = s_internalIp;
            }
            const std::string &getInternalPort() const { return  v_internalPort; }
            void setInternalPort(const std::string &s_internalPort ) {
                v_internalPort = s_internalPort;
            }
            const std::string &getNatGatewayId() const { return  v_natGatewayId; }
            void setNatGatewayId(const std::string &s_natGatewayId ) {
                v_natGatewayId = s_natGatewayId;
            }
            const std::string &getProtocol() const { return  v_protocol; }
            void setProtocol(const std::string &s_protocol ) {
                v_protocol = s_protocol;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
        private:
            std::string v_dnatEntryId;
            std::string v_dnatEntryName;
            std::string v_externalIp;
            std::string v_externalPort;
            std::string v_internalIp;
            std::string v_internalPort;
            std::string v_natGatewayId;
            std::string v_protocol;
            std::string v_status;
        };
    }
}
#endif // !VOLCENGINE_NATGATEWAY_DNATENTRYFORDESCRIBEDNATENTRIESOUTPUT_H