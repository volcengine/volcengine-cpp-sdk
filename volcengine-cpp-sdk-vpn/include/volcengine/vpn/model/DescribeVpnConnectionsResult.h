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
#ifndef VOLCENGINE_VPN_DESCRIBEVPNCONNECTIONSRESULT_H
#define VOLCENGINE_VPN_DESCRIBEVPNCONNECTIONSRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vpn/model/VpnConnectionForDescribeVpnConnectionsOutput.h"
namespace volcengine{
    namespace vpn{
        class DescribeVpnConnectionsResult {
        public:
            DescribeVpnConnectionsResult() = default;
            ~DescribeVpnConnectionsResult() = default;
            void fromJsonString(const std::string &input);
            const int getPageNumber() const { return  v_pageNumber; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
            }
            const int getPageSize() const { return  v_pageSize; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
            }
            const std::string &getRequestId() const { return  v_requestId; }
            void setRequestId(const std::string &s_requestId ) {
                v_requestId = s_requestId;
            }
            const int getTotalCount() const { return  v_totalCount; }
            void setTotalCount(const int s_totalCount ) {
                v_totalCount = s_totalCount;
            }
            const std::vector<VpnConnectionForDescribeVpnConnectionsOutput> &getVpnConnections() const { return  v_vpnConnections; }
            void setVpnConnections(const std::vector<VpnConnectionForDescribeVpnConnectionsOutput> &s_vpnConnections ) {
                v_vpnConnections = s_vpnConnections;
            }
        private:
            int v_pageNumber{};
            int v_pageSize{};
            std::string v_requestId;
            int v_totalCount{};
            std::vector<VpnConnectionForDescribeVpnConnectionsOutput> v_vpnConnections;
        };
    }
}
#endif // !VOLCENGINE_VPN_DESCRIBEVPNCONNECTIONSRESULT_H