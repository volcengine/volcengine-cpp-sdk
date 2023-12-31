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
#ifndef VOLCENGINE_VKE_DATAVOLUMEFORUPDATENODEPOOLCONFIGINPUT_H
#define VOLCENGINE_VKE_DATAVOLUMEFORUPDATENODEPOOLCONFIGINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class DataVolumeForUpdateNodePoolConfigInput {
        public:
            DataVolumeForUpdateNodePoolConfigInput();
            ~DataVolumeForUpdateNodePoolConfigInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            const std::string &getMountPoint()const { return  v_mountPoint; }
            bool MountPointHasBeenSet() const { return v_mountPointHasBeenSet; }
            void setMountPoint(const std::string &s_mountPoint ) {
                v_mountPoint = s_mountPoint;
                v_mountPointHasBeenSet = true;
            }
            int getSize()const { return  v_size; }
            bool SizeHasBeenSet() const { return v_sizeHasBeenSet; }
            void setSize(const int s_size ) {
                v_size = s_size;
                v_sizeHasBeenSet = true;
            }
            const std::string &getType()const { return  v_type; }
            bool TypeHasBeenSet() const { return v_typeHasBeenSet; }
            void setType(const std::string &s_type ) {
                v_type = s_type;
                v_typeHasBeenSet = true;
            }
        private:
            std::string v_mountPoint;
            bool v_mountPointHasBeenSet;

            int v_size;
            bool v_sizeHasBeenSet;

            std::string v_type;
            bool v_typeHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_DATAVOLUMEFORUPDATENODEPOOLCONFIGINPUT_H