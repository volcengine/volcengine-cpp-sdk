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
#ifndef VOLCENGINE_STORAGEEBS_CREATEVOLUMEREQUEST_H
#define VOLCENGINE_STORAGEEBS_CREATEVOLUMEREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/storageebs/model/TagForCreateVolumeInput.h"

namespace volcengine{
    namespace storageebs{
        class CreateVolumeRequest {
        public:
            CreateVolumeRequest();
            ~CreateVolumeRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getInstanceId()const { return  v_instanceId; }
            bool InstanceIdHasBeenSet() const { return v_instanceIdHasBeenSet; }
            void setInstanceId(const std::string &s_instanceId ) {
                v_instanceId = s_instanceId;
                v_instanceIdHasBeenSet = true;
            }
            const std::string &getKind()const { return  v_kind; }
            bool KindHasBeenSet() const { return v_kindHasBeenSet; }
            void setKind(const std::string &s_kind ) {
                v_kind = s_kind;
                v_kindHasBeenSet = true;
            }
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            const std::string &getSize()const { return  v_size; }
            bool SizeHasBeenSet() const { return v_sizeHasBeenSet; }
            void setSize(const std::string &s_size ) {
                v_size = s_size;
                v_sizeHasBeenSet = true;
            }
            const std::vector<TagForCreateVolumeInput> &getTags()const { return  v_tags; }
            bool TagsHasBeenSet() const { return v_tagsHasBeenSet; }
            void setTags(const std::vector<TagForCreateVolumeInput> &s_tags ) {
                v_tags = s_tags;
                v_tagsHasBeenSet = true;
            }
            const std::string &getVolumeChargeType()const { return  v_volumeChargeType; }
            bool VolumeChargeTypeHasBeenSet() const { return v_volumeChargeTypeHasBeenSet; }
            void setVolumeChargeType(const std::string &s_volumeChargeType ) {
                v_volumeChargeType = s_volumeChargeType;
                v_volumeChargeTypeHasBeenSet = true;
            }
            const std::string &getVolumeName()const { return  v_volumeName; }
            bool VolumeNameHasBeenSet() const { return v_volumeNameHasBeenSet; }
            void setVolumeName(const std::string &s_volumeName ) {
                v_volumeName = s_volumeName;
                v_volumeNameHasBeenSet = true;
            }
            const std::string &getVolumeType()const { return  v_volumeType; }
            bool VolumeTypeHasBeenSet() const { return v_volumeTypeHasBeenSet; }
            void setVolumeType(const std::string &s_volumeType ) {
                v_volumeType = s_volumeType;
                v_volumeTypeHasBeenSet = true;
            }
            const std::string &getZoneId()const { return  v_zoneId; }
            bool ZoneIdHasBeenSet() const { return v_zoneIdHasBeenSet; }
            void setZoneId(const std::string &s_zoneId ) {
                v_zoneId = s_zoneId;
                v_zoneIdHasBeenSet = true;
            }
        private:
            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_instanceId;
            bool v_instanceIdHasBeenSet;

            std::string v_kind;
            bool v_kindHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::string v_size;
            bool v_sizeHasBeenSet;

            std::vector<TagForCreateVolumeInput> v_tags;
            bool v_tagsHasBeenSet;

            std::string v_volumeChargeType;
            bool v_volumeChargeTypeHasBeenSet;

            std::string v_volumeName;
            bool v_volumeNameHasBeenSet;

            std::string v_volumeType;
            bool v_volumeTypeHasBeenSet;

            std::string v_zoneId;
            bool v_zoneIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_STORAGEEBS_CREATEVOLUMEREQUEST_H