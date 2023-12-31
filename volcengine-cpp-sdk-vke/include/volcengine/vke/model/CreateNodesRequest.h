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
#ifndef VOLCENGINE_VKE_CREATENODESREQUEST_H
#define VOLCENGINE_VKE_CREATENODESREQUEST_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vke/model/KubernetesConfigForCreateNodesInput.h"
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class CreateNodesRequest {
        public:
            CreateNodesRequest();
            ~CreateNodesRequest() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            bool isAdditionalContainerStorageEnabled()const { return  v_additionalContainerStorageEnabled; }
            bool AdditionalContainerStorageEnabledHasBeenSet() const { return v_additionalContainerStorageEnabledHasBeenSet; }
            void setAdditionalContainerStorageEnabled(const bool s_additionalContainerStorageEnabled ) {
                v_additionalContainerStorageEnabled = s_additionalContainerStorageEnabled;
                v_additionalContainerStorageEnabledHasBeenSet = true;
            }
            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getClusterId()const { return  v_clusterId; }
            bool ClusterIdHasBeenSet() const { return v_clusterIdHasBeenSet; }
            void setClusterId(const std::string &s_clusterId ) {
                v_clusterId = s_clusterId;
                v_clusterIdHasBeenSet = true;
            }
            const std::string &getContainerStoragePath()const { return  v_containerStoragePath; }
            bool ContainerStoragePathHasBeenSet() const { return v_containerStoragePathHasBeenSet; }
            void setContainerStoragePath(const std::string &s_containerStoragePath ) {
                v_containerStoragePath = s_containerStoragePath;
                v_containerStoragePathHasBeenSet = true;
            }
            const std::string &getImageId()const { return  v_imageId; }
            bool ImageIdHasBeenSet() const { return v_imageIdHasBeenSet; }
            void setImageId(const std::string &s_imageId ) {
                v_imageId = s_imageId;
                v_imageIdHasBeenSet = true;
            }
            const std::string &getInitializeScript()const { return  v_initializeScript; }
            bool InitializeScriptHasBeenSet() const { return v_initializeScriptHasBeenSet; }
            void setInitializeScript(const std::string &s_initializeScript ) {
                v_initializeScript = s_initializeScript;
                v_initializeScriptHasBeenSet = true;
            }
            const std::vector<std::string> &getInstanceIds()const { return  v_instanceIds; }
            bool InstanceIdsHasBeenSet() const { return v_instanceIdsHasBeenSet; }
            void setInstanceIds(const std::vector<std::string> &s_instanceIds ) {
                v_instanceIds = s_instanceIds;
                v_instanceIdsHasBeenSet = true;
            }
            bool isKeepInstanceName()const { return  v_keepInstanceName; }
            bool KeepInstanceNameHasBeenSet() const { return v_keepInstanceNameHasBeenSet; }
            void setKeepInstanceName(const bool s_keepInstanceName ) {
                v_keepInstanceName = s_keepInstanceName;
                v_keepInstanceNameHasBeenSet = true;
            }
            const std::shared_ptr<KubernetesConfigForCreateNodesInput> &getKubernetesConfig()const { return  v_kubernetesConfig; }
            bool KubernetesConfigHasBeenSet() const { return v_kubernetesConfigHasBeenSet; }
            void setKubernetesConfig(const std::shared_ptr<KubernetesConfigForCreateNodesInput> &s_kubernetesConfig ) {
                v_kubernetesConfig = s_kubernetesConfig;
                v_kubernetesConfigHasBeenSet = true;
            }
        private:
            bool v_additionalContainerStorageEnabled;
            bool v_additionalContainerStorageEnabledHasBeenSet;

            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::string v_clusterId;
            bool v_clusterIdHasBeenSet;

            std::string v_containerStoragePath;
            bool v_containerStoragePathHasBeenSet;

            std::string v_imageId;
            bool v_imageIdHasBeenSet;

            std::string v_initializeScript;
            bool v_initializeScriptHasBeenSet;

            std::vector<std::string> v_instanceIds;
            bool v_instanceIdsHasBeenSet;

            bool v_keepInstanceName;
            bool v_keepInstanceNameHasBeenSet;

            std::shared_ptr<KubernetesConfigForCreateNodesInput> v_kubernetesConfig;
            bool v_kubernetesConfigHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_CREATENODESREQUEST_H