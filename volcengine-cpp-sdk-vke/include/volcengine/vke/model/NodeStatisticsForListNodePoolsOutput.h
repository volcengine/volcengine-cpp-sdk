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
#ifndef VOLCENGINE_VKE_NODESTATISTICSFORLISTNODEPOOLSOUTPUT_H
#define VOLCENGINE_VKE_NODESTATISTICSFORLISTNODEPOOLSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace vke{
        class NodeStatisticsForListNodePoolsOutput {
        public:
            NodeStatisticsForListNodePoolsOutput() = default;
            ~NodeStatisticsForListNodePoolsOutput() = default;
            void fromJsonString(const std::string &input);
            const int getCreatingCount() const { return  v_creatingCount; }
            void setCreatingCount(const int s_creatingCount ) {
                v_creatingCount = s_creatingCount;
            }
            const int getDeletingCount() const { return  v_deletingCount; }
            void setDeletingCount(const int s_deletingCount ) {
                v_deletingCount = s_deletingCount;
            }
            const int getFailedCount() const { return  v_failedCount; }
            void setFailedCount(const int s_failedCount ) {
                v_failedCount = s_failedCount;
            }
            const int getRunningCount() const { return  v_runningCount; }
            void setRunningCount(const int s_runningCount ) {
                v_runningCount = s_runningCount;
            }
            const int getTotalCount() const { return  v_totalCount; }
            void setTotalCount(const int s_totalCount ) {
                v_totalCount = s_totalCount;
            }
            const int getUpdatingCount() const { return  v_updatingCount; }
            void setUpdatingCount(const int s_updatingCount ) {
                v_updatingCount = s_updatingCount;
            }
        private:
            int v_creatingCount{};
            int v_deletingCount{};
            int v_failedCount{};
            int v_runningCount{};
            int v_totalCount{};
            int v_updatingCount{};
        };
    }
}
#endif // !VOLCENGINE_VKE_NODESTATISTICSFORLISTNODEPOOLSOUTPUT_H