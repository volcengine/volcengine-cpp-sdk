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
#ifndef VOLCENGINE_STORAGEEBS_CREATETAGSRESULT_H
#define VOLCENGINE_STORAGEEBS_CREATETAGSRESULT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/storageebs/model/OperationDetailForCreateTagsOutput.h"
namespace volcengine{
    namespace storageebs{
        class CreateTagsResult {
        public:
            CreateTagsResult() = default;
            ~CreateTagsResult() = default;
            void fromJsonString(const std::string &input);
            const std::vector<OperationDetailForCreateTagsOutput> &getOperationDetails() const { return  v_operationDetails; }
            void setOperationDetails(const std::vector<OperationDetailForCreateTagsOutput> &s_operationDetails ) {
                v_operationDetails = s_operationDetails;
            }
        private:
            std::vector<OperationDetailForCreateTagsOutput> v_operationDetails;
        };
    }
}
#endif // !VOLCENGINE_STORAGEEBS_CREATETAGSRESULT_H