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
#ifndef VOLCENGINE_VKE_TAGFILTERFORLISTTAGSFORRESOURCESINPUT_H
#define VOLCENGINE_VKE_TAGFILTERFORLISTTAGSFORRESOURCESINPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vke{
        class TagFilterForListTagsForResourcesInput {
        public:
            TagFilterForListTagsForResourcesInput();
            ~TagFilterForListTagsForResourcesInput() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getKey()const { return  v_key; }
            bool KeyHasBeenSet() const { return v_keyHasBeenSet; }
            void setKey(const std::string &s_key ) {
                v_key = s_key;
                v_keyHasBeenSet = true;
            }
            const std::vector<std::string> &getValues()const { return  v_values; }
            bool ValuesHasBeenSet() const { return v_valuesHasBeenSet; }
            void setValues(const std::vector<std::string> &s_values ) {
                v_values = s_values;
                v_valuesHasBeenSet = true;
            }
        private:
            std::string v_key;
            bool v_keyHasBeenSet;

            std::vector<std::string> v_values;
            bool v_valuesHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_TAGFILTERFORLISTTAGSFORRESOURCESINPUT_H