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
#ifndef VOLCENGINE_VKE_HEADERFORFORWARDKUBERNETESAPIINPUT_H
#define VOLCENGINE_VKE_HEADERFORFORWARDKUBERNETESAPIINPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vke{
        class HeaderForForwardKubernetesApiInput {
        public:
            HeaderForForwardKubernetesApiInput();
            ~HeaderForForwardKubernetesApiInput() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getKey()const { return  v_key; }
            bool KeyHasBeenSet() const { return v_keyHasBeenSet; }
            void setKey(const std::string &s_key ) {
                v_key = s_key;
                v_keyHasBeenSet = true;
            }
            const std::string &getValue()const { return  v_value; }
            bool ValueHasBeenSet() const { return v_valueHasBeenSet; }
            void setValue(const std::string &s_value ) {
                v_value = s_value;
                v_valueHasBeenSet = true;
            }
        private:
            std::string v_key;
            bool v_keyHasBeenSet;

            std::string v_value;
            bool v_valueHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_HEADERFORFORWARDKUBERNETESAPIINPUT_H