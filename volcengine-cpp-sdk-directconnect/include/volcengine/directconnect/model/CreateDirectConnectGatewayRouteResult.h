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
#ifndef VOLCENGINE_DIRECTCONNECT_CREATEDIRECTCONNECTGATEWAYROUTERESULT_H
#define VOLCENGINE_DIRECTCONNECT_CREATEDIRECTCONNECTGATEWAYROUTERESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace directconnect{
        class CreateDirectConnectGatewayRouteResult {
        public:
            CreateDirectConnectGatewayRouteResult() = default;
            ~CreateDirectConnectGatewayRouteResult() = default;
            void fromJsonString(const std::string &input);
            const std::string &getDirectConnectGatewayRouteId() const { return  v_directConnectGatewayRouteId; }
            void setDirectConnectGatewayRouteId(const std::string &s_directConnectGatewayRouteId ) {
                v_directConnectGatewayRouteId = s_directConnectGatewayRouteId;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
        private:
            std::string v_directConnectGatewayRouteId;
            std::string v_requestId;
        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_CREATEDIRECTCONNECTGATEWAYROUTERESULT_H