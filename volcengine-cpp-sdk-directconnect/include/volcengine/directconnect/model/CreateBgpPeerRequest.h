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
#ifndef VOLCENGINE_DIRECTCONNECT_CREATEBGPPEERREQUEST_H
#define VOLCENGINE_DIRECTCONNECT_CREATEBGPPEERREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace directconnect{
        class CreateBgpPeerRequest {
        public:
            CreateBgpPeerRequest();
            ~CreateBgpPeerRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getAuthKey()const { return  v_authKey; }
            bool AuthKeyHasBeenSet() const { return v_authKeyHasBeenSet; }
            void setAuthKey(const std::string &s_authKey ) {
                v_authKey = s_authKey;
                v_authKeyHasBeenSet = true;
            }
            const std::string &getBgpPeerName()const { return  v_bgpPeerName; }
            bool BgpPeerNameHasBeenSet() const { return v_bgpPeerNameHasBeenSet; }
            void setBgpPeerName(const std::string &s_bgpPeerName ) {
                v_bgpPeerName = s_bgpPeerName;
                v_bgpPeerNameHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
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
            std::string v_authKey;
            bool v_authKeyHasBeenSet;

            std::string v_bgpPeerName;
            bool v_bgpPeerNameHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            int v_remoteAsn;
            bool v_remoteAsnHasBeenSet;

            std::string v_virtualInterfaceId;
            bool v_virtualInterfaceIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_CREATEBGPPEERREQUEST_H