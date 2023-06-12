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
#ifndef VOLCENGINE_DIRECTCONNECT_DESCRIBEDIRECTCONNECTVIRTUALINTERFACEATTRIBUTESREQUEST_H
#define VOLCENGINE_DIRECTCONNECT_DESCRIBEDIRECTCONNECTVIRTUALINTERFACEATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace directconnect{
        class DescribeDirectConnectVirtualInterfaceAttributesRequest {
        public:
            DescribeDirectConnectVirtualInterfaceAttributesRequest();
            ~DescribeDirectConnectVirtualInterfaceAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getVirtualInterfaceId()const { return  v_virtualInterfaceId; }
            bool VirtualInterfaceIdHasBeenSet() const { return v_virtualInterfaceIdHasBeenSet; }
            void setVirtualInterfaceId(const std::string &s_virtualInterfaceId ) {
                v_virtualInterfaceId = s_virtualInterfaceId;
                v_virtualInterfaceIdHasBeenSet = true;
            }
        private:
            std::string v_virtualInterfaceId;
            bool v_virtualInterfaceIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_DESCRIBEDIRECTCONNECTVIRTUALINTERFACEATTRIBUTESREQUEST_H