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
#ifndef VOLCENGINE_DIRECTCONNECT_DESCRIBEBGPPEERSREQUEST_H
#define VOLCENGINE_DIRECTCONNECT_DESCRIBEBGPPEERSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace directconnect{
        class DescribeBgpPeersRequest {
        public:
            DescribeBgpPeersRequest();
            ~DescribeBgpPeersRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::vector<std::string> &getBgpPeerIds()const { return  v_bgpPeerIds; }
            bool BgpPeerIdsHasBeenSet() const { return v_bgpPeerIdsHasBeenSet; }
            void setBgpPeerIds(const std::vector<std::string> &s_bgpPeerIds ) {
                v_bgpPeerIds = s_bgpPeerIds;
                v_bgpPeerIdsHasBeenSet = true;
            }
            const std::string &getBgpPeerName()const { return  v_bgpPeerName; }
            bool BgpPeerNameHasBeenSet() const { return v_bgpPeerNameHasBeenSet; }
            void setBgpPeerName(const std::string &s_bgpPeerName ) {
                v_bgpPeerName = s_bgpPeerName;
                v_bgpPeerNameHasBeenSet = true;
            }
            const std::string &getDirectConnectGatewayId()const { return  v_directConnectGatewayId; }
            bool DirectConnectGatewayIdHasBeenSet() const { return v_directConnectGatewayIdHasBeenSet; }
            void setDirectConnectGatewayId(const std::string &s_directConnectGatewayId ) {
                v_directConnectGatewayId = s_directConnectGatewayId;
                v_directConnectGatewayIdHasBeenSet = true;
            }
            int getPageNumber()const { return  v_pageNumber; }
            bool PageNumberHasBeenSet() const { return v_pageNumberHasBeenSet; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
                v_pageNumberHasBeenSet = true;
            }
            int getPageSize()const { return  v_pageSize; }
            bool PageSizeHasBeenSet() const { return v_pageSizeHasBeenSet; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
                v_pageSizeHasBeenSet = true;
            }
            int getRemoteAsn()const { return  v_remoteAsn; }
            bool RemoteAsnHasBeenSet() const { return v_remoteAsnHasBeenSet; }
            void setRemoteAsn(const int s_remoteAsn ) {
                v_remoteAsn = s_remoteAsn;
                v_remoteAsnHasBeenSet = true;
            }
            const std::string &getVirtualInterfaceId()const { return  v_virtualInterfaceId; }
            bool VirtualInterfaceIdHasBeenSet() const { return v_virtualInterfaceIdHasBeenSet; }
            void setVirtualInterfaceId(const std::string &s_virtualInterfaceId ) {
                v_virtualInterfaceId = s_virtualInterfaceId;
                v_virtualInterfaceIdHasBeenSet = true;
            }
        private:
            std::vector<std::string> v_bgpPeerIds;
            bool v_bgpPeerIdsHasBeenSet;

            std::string v_bgpPeerName;
            bool v_bgpPeerNameHasBeenSet;

            std::string v_directConnectGatewayId;
            bool v_directConnectGatewayIdHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            int v_remoteAsn;
            bool v_remoteAsnHasBeenSet;

            std::string v_virtualInterfaceId;
            bool v_virtualInterfaceIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_DESCRIBEBGPPEERSREQUEST_H