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
#ifndef VOLCENGINE_VKE_SERVICESCONFIGFORLISTCLUSTERSOUTPUT_H
#define VOLCENGINE_VKE_SERVICESCONFIGFORLISTCLUSTERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace vke{
        class ServicesConfigForListClustersOutput {
        public:
            ServicesConfigForListClustersOutput() = default;
            ~ServicesConfigForListClustersOutput() = default;
            void fromJsonString(const std::string &input);
            const std::vector<std::string> &getServiceCidrsv4() const { return  v_serviceCidrsv4; }
            void setServiceCidrsv4(const std::vector<std::string> &s_serviceCidrsv4 ) {
                v_serviceCidrsv4 = s_serviceCidrsv4;
            }
        private:
            std::vector<std::string> v_serviceCidrsv4;
        };
    }
}
#endif // !VOLCENGINE_VKE_SERVICESCONFIGFORLISTCLUSTERSOUTPUT_H