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
#ifndef VOLCENGINE_VKE_ITEMFORLISTCLUSTERSOUTPUT_H
#define VOLCENGINE_VKE_ITEMFORLISTCLUSTERSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/vke/model/ClusterConfigForListClustersOutput.h"
#include "volcengine/vke/model/LoggingConfigForListClustersOutput.h"
#include "volcengine/vke/model/NodeStatisticsForListClustersOutput.h"
#include "volcengine/vke/model/PodsConfigForListClustersOutput.h"
#include "volcengine/vke/model/ServicesConfigForListClustersOutput.h"
#include "volcengine/vke/model/StatusForListClustersOutput.h"
#include "volcengine/vke/model/TagForListClustersOutput.h"
namespace volcengine{
    namespace vke{
        class ItemForListClustersOutput {
        public:
            ItemForListClustersOutput() = default;
            ~ItemForListClustersOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getChargeType() const { return  v_chargeType; }
            void setChargeType(const std::string &s_chargeType ) {
                v_chargeType = s_chargeType;
            }
            const std::shared_ptr<ClusterConfigForListClustersOutput> &getClusterConfig() const { return  v_clusterConfig; }
            void setClusterConfig(const std::shared_ptr<ClusterConfigForListClustersOutput> &s_clusterConfig ) {
                v_clusterConfig = s_clusterConfig;
            }
            const std::string &getCreateClientToken() const { return  v_createClientToken; }
            void setCreateClientToken(const std::string &s_createClientToken ) {
                v_createClientToken = s_createClientToken;
            }
            const std::string &getCreateTime() const { return  v_createTime; }
            void setCreateTime(const std::string &s_createTime ) {
                v_createTime = s_createTime;
            }
            const bool isDeleteProtectionEnabled() const { return  v_deleteProtectionEnabled; }
            void setDeleteProtectionEnabled(const bool s_deleteProtectionEnabled ) {
                v_deleteProtectionEnabled = s_deleteProtectionEnabled;
            }
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::string &getId() const { return  v_id; }
            void setId(const std::string &s_id ) {
                v_id = s_id;
            }
            const std::string &getKubernetesVersion() const { return  v_kubernetesVersion; }
            void setKubernetesVersion(const std::string &s_kubernetesVersion ) {
                v_kubernetesVersion = s_kubernetesVersion;
            }
            const std::shared_ptr<LoggingConfigForListClustersOutput> &getLoggingConfig() const { return  v_loggingConfig; }
            void setLoggingConfig(const std::shared_ptr<LoggingConfigForListClustersOutput> &s_loggingConfig ) {
                v_loggingConfig = s_loggingConfig;
            }
            const std::string &getName() const { return  v_name; }
            void setName(const std::string &s_name ) {
                v_name = s_name;
            }
            const std::shared_ptr<NodeStatisticsForListClustersOutput> &getNodeStatistics() const { return  v_nodeStatistics; }
            void setNodeStatistics(const std::shared_ptr<NodeStatisticsForListClustersOutput> &s_nodeStatistics ) {
                v_nodeStatistics = s_nodeStatistics;
            }
            const std::shared_ptr<PodsConfigForListClustersOutput> &getPodsConfig() const { return  v_podsConfig; }
            void setPodsConfig(const std::shared_ptr<PodsConfigForListClustersOutput> &s_podsConfig ) {
                v_podsConfig = s_podsConfig;
            }
            const std::shared_ptr<ServicesConfigForListClustersOutput> &getServicesConfig() const { return  v_servicesConfig; }
            void setServicesConfig(const std::shared_ptr<ServicesConfigForListClustersOutput> &s_servicesConfig ) {
                v_servicesConfig = s_servicesConfig;
            }
            const std::shared_ptr<StatusForListClustersOutput> &getStatus() const { return  v_status; }
            void setStatus(const std::shared_ptr<StatusForListClustersOutput> &s_status ) {
                v_status = s_status;
            }
            const std::vector<TagForListClustersOutput> &getTags() const { return  v_tags; }
            void setTags(const std::vector<TagForListClustersOutput> &s_tags ) {
                v_tags = s_tags;
            }
            const std::string &getUpdateClientToken() const { return  v_updateClientToken; }
            void setUpdateClientToken(const std::string &s_updateClientToken ) {
                v_updateClientToken = s_updateClientToken;
            }
            const std::string &getUpdateTime() const { return  v_updateTime; }
            void setUpdateTime(const std::string &s_updateTime ) {
                v_updateTime = s_updateTime;
            }
        private:
            std::string v_chargeType;
            std::shared_ptr<ClusterConfigForListClustersOutput> v_clusterConfig;
            std::string v_createClientToken;
            std::string v_createTime;
            bool v_deleteProtectionEnabled{};
            std::string v_description;
            std::string v_id;
            std::string v_kubernetesVersion;
            std::shared_ptr<LoggingConfigForListClustersOutput> v_loggingConfig;
            std::string v_name;
            std::shared_ptr<NodeStatisticsForListClustersOutput> v_nodeStatistics;
            std::shared_ptr<PodsConfigForListClustersOutput> v_podsConfig;
            std::shared_ptr<ServicesConfigForListClustersOutput> v_servicesConfig;
            std::shared_ptr<StatusForListClustersOutput> v_status;
            std::vector<TagForListClustersOutput> v_tags;
            std::string v_updateClientToken;
            std::string v_updateTime;
        };
    }
}
#endif // !VOLCENGINE_VKE_ITEMFORLISTCLUSTERSOUTPUT_H