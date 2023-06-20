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
#ifndef VOLCENGINE_VKE_KUBERNETESCONFIGFORUPDATENODEPOOLCONFIGINPUT_H
#define VOLCENGINE_VKE_KUBERNETESCONFIGFORUPDATENODEPOOLCONFIGINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vke/model/LabelForUpdateNodePoolConfigInput.h"
#include "volcengine/vke/model/TaintForUpdateNodePoolConfigInput.h"
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class KubernetesConfigForUpdateNodePoolConfigInput {
        public:
            KubernetesConfigForUpdateNodePoolConfigInput();
            ~KubernetesConfigForUpdateNodePoolConfigInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            bool isCordon()const { return  v_cordon; }
            bool CordonHasBeenSet() const { return v_cordonHasBeenSet; }
            void setCordon(const bool s_cordon ) {
                v_cordon = s_cordon;
                v_cordonHasBeenSet = true;
            }
            const std::vector<LabelForUpdateNodePoolConfigInput> &getLabels()const { return  v_labels; }
            bool LabelsHasBeenSet() const { return v_labelsHasBeenSet; }
            void setLabels(const std::vector<LabelForUpdateNodePoolConfigInput> &s_labels ) {
                v_labels = s_labels;
                v_labelsHasBeenSet = true;
            }
            const std::vector<TaintForUpdateNodePoolConfigInput> &getTaints()const { return  v_taints; }
            bool TaintsHasBeenSet() const { return v_taintsHasBeenSet; }
            void setTaints(const std::vector<TaintForUpdateNodePoolConfigInput> &s_taints ) {
                v_taints = s_taints;
                v_taintsHasBeenSet = true;
            }
        private:
            bool v_cordon;
            bool v_cordonHasBeenSet;

            std::vector<LabelForUpdateNodePoolConfigInput> v_labels;
            bool v_labelsHasBeenSet;

            std::vector<TaintForUpdateNodePoolConfigInput> v_taints;
            bool v_taintsHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_KUBERNETESCONFIGFORUPDATENODEPOOLCONFIGINPUT_H