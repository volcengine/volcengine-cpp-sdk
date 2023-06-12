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
#ifndef VOLCENGINE_NATGATEWAY_EIPADDRESSFORDESCRIBENATGATEWAYSOUTPUT_H
#define VOLCENGINE_NATGATEWAY_EIPADDRESSFORDESCRIBENATGATEWAYSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace natgateway{
        class EipAddressForDescribeNatGatewaysOutput {
        public:
            EipAddressForDescribeNatGatewaysOutput() = default;
            ~EipAddressForDescribeNatGatewaysOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getAllocationId() const { return  v_allocationId; }
            void setAllocationId(const std::string &s_allocationId ) {
                v_allocationId = s_allocationId;
            }
            const std::string &getEipAddress() const { return  v_eipAddress; }
            void setEipAddress(const std::string &s_eipAddress ) {
                v_eipAddress = s_eipAddress;
            }
            const std::string &getUsingStatus() const { return  v_usingStatus; }
            void setUsingStatus(const std::string &s_usingStatus ) {
                v_usingStatus = s_usingStatus;
            }
        private:
            std::string v_allocationId;
            std::string v_eipAddress;
            std::string v_usingStatus;
        };
    }
}
#endif // !VOLCENGINE_NATGATEWAY_EIPADDRESSFORDESCRIBENATGATEWAYSOUTPUT_H