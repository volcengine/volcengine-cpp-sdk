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
#ifndef VOLCENGINE_VKE_NODECONFIGFORLISTNODEPOOLSOUTPUT_H
#define VOLCENGINE_VKE_NODECONFIGFORLISTNODEPOOLSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vke/model/DataVolumeForListNodePoolsOutput.h"
#include "volcengine/vke/model/SecurityForListNodePoolsOutput.h"
#include "volcengine/vke/model/SystemVolumeForListNodePoolsOutput.h"
#include "volcengine/vke/model/TagForListNodePoolsOutput.h"
namespace volcengine{
    namespace vke{
        class NodeConfigForListNodePoolsOutput {
        public:
            NodeConfigForListNodePoolsOutput() = default;
            ~NodeConfigForListNodePoolsOutput() = default;
            void fromJsonString(const std::string &input);
            const bool isAdditionalContainerStorageEnabled() const { return  v_additionalContainerStorageEnabled; }
            void setAdditionalContainerStorageEnabled(const bool s_additionalContainerStorageEnabled ) {
                v_additionalContainerStorageEnabled = s_additionalContainerStorageEnabled;
            }
            const bool isAutoRenew() const { return  v_autoRenew; }
            void setAutoRenew(const bool s_autoRenew ) {
                v_autoRenew = s_autoRenew;
            }
            const int getAutoRenewPeriod() const { return  v_autoRenewPeriod; }
            void setAutoRenewPeriod(const int s_autoRenewPeriod ) {
                v_autoRenewPeriod = s_autoRenewPeriod;
            }
            const std::vector<DataVolumeForListNodePoolsOutput> &getDataVolumes() const { return  v_dataVolumes; }
            void setDataVolumes(const std::vector<DataVolumeForListNodePoolsOutput> &s_dataVolumes ) {
                v_dataVolumes = s_dataVolumes;
            }
            const std::vector<std::string> &getHpcClusterIds() const { return  v_hpcClusterIds; }
            void setHpcClusterIds(const std::vector<std::string> &s_hpcClusterIds ) {
                v_hpcClusterIds = s_hpcClusterIds;
            }
            const std::string &getImageId() const { return  v_imageId; }
            void setImageId(const std::string &s_imageId ) {
                v_imageId = s_imageId;
            }
            const std::string &getInitializeScript() const { return  v_initializeScript; }
            void setInitializeScript(const std::string &s_initializeScript ) {
                v_initializeScript = s_initializeScript;
            }
            const std::string &getInstanceChargeType() const { return  v_instanceChargeType; }
            void setInstanceChargeType(const std::string &s_instanceChargeType ) {
                v_instanceChargeType = s_instanceChargeType;
            }
            const std::vector<std::string> &getInstanceTypeIds() const { return  v_instanceTypeIds; }
            void setInstanceTypeIds(const std::vector<std::string> &s_instanceTypeIds ) {
                v_instanceTypeIds = s_instanceTypeIds;
            }
            const std::string &getNamePrefix() const { return  v_namePrefix; }
            void setNamePrefix(const std::string &s_namePrefix ) {
                v_namePrefix = s_namePrefix;
            }
            const int getPeriod() const { return  v_period; }
            void setPeriod(const int s_period ) {
                v_period = s_period;
            }
            const std::shared_ptr<SecurityForListNodePoolsOutput> &getSecurity() const { return  v_security; }
            void setSecurity(const std::shared_ptr<SecurityForListNodePoolsOutput> &s_security ) {
                v_security = s_security;
            }
            const std::vector<std::string> &getSubnetIds() const { return  v_subnetIds; }
            void setSubnetIds(const std::vector<std::string> &s_subnetIds ) {
                v_subnetIds = s_subnetIds;
            }
            const std::shared_ptr<SystemVolumeForListNodePoolsOutput> &getSystemVolume() const { return  v_systemVolume; }
            void setSystemVolume(const std::shared_ptr<SystemVolumeForListNodePoolsOutput> &s_systemVolume ) {
                v_systemVolume = s_systemVolume;
            }
            const std::vector<TagForListNodePoolsOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForListNodePoolsOutput> &s_tags ) {
                v_tags = s_tags;
            }
        private:
            bool v_additionalContainerStorageEnabled{};
            bool v_autoRenew{};
            int v_autoRenewPeriod{};
            std::vector<DataVolumeForListNodePoolsOutput> v_dataVolumes;
            std::vector<std::string> v_hpcClusterIds;
            std::string v_imageId;
            std::string v_initializeScript;
            std::string v_instanceChargeType;
            std::vector<std::string> v_instanceTypeIds;
            std::string v_namePrefix;
            int v_period{};
            std::shared_ptr<SecurityForListNodePoolsOutput> v_security;
            std::vector<std::string> v_subnetIds;
            std::shared_ptr<SystemVolumeForListNodePoolsOutput> v_systemVolume;
            std::vector<TagForListNodePoolsOutput> v_tags;
        };
    }
}
#endif // !VOLCENGINE_VKE_NODECONFIGFORLISTNODEPOOLSOUTPUT_H