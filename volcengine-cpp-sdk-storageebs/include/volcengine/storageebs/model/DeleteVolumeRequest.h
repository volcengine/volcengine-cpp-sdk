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
#ifndef VOLCENGINE_STORAGEEBS_DELETEVOLUMEREQUEST_H
#define VOLCENGINE_STORAGEEBS_DELETEVOLUMEREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace storageebs{
        class DeleteVolumeRequest {
        public:
            DeleteVolumeRequest();
            ~DeleteVolumeRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getVolumeId()const { return  v_volumeId; }
            bool VolumeIdHasBeenSet() const { return v_volumeIdHasBeenSet; }
            void setVolumeId(const std::string &s_volumeId ) {
                v_volumeId = s_volumeId;
                v_volumeIdHasBeenSet = true;
            }
        private:
            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::string v_volumeId;
            bool v_volumeIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_STORAGEEBS_DELETEVOLUMEREQUEST_H