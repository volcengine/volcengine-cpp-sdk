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
#ifndef VOLCENGINE_VKE_TAGFORLISTCLUSTERSOUTPUT_H
#define VOLCENGINE_VKE_TAGFORLISTCLUSTERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace vke{
        class TagForListClustersOutput {
        public:
            TagForListClustersOutput() = default;
            ~TagForListClustersOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getKey() const { return  v_key; }
            void setKey(const std::string &s_key ) {
                v_key = s_key;
            }
            const std::string &getType() const { return  v_type; }
            void setType(const std::string &s_type ) {
                v_type = s_type;
            }
            const std::string &getValue() const { return  v_value; }
            void setValue(const std::string &s_value ) {
                v_value = s_value;
            }
        private:
            std::string v_key;
            std::string v_type;
            std::string v_value;
        };
    }
}
#endif // !VOLCENGINE_VKE_TAGFORLISTCLUSTERSOUTPUT_H