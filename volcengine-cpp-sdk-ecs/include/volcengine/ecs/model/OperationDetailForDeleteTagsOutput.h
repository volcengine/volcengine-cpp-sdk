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
#ifndef VOLCENGINE_ECS_OPERATIONDETAILFORDELETETAGSOUTPUT_H
#define VOLCENGINE_ECS_OPERATIONDETAILFORDELETETAGSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
#include "volcengine/ecs/model/ErrorForDeleteTagsOutput.h"
namespace volcengine{
    namespace ecs{
        class OperationDetailForDeleteTagsOutput {
        public:
            OperationDetailForDeleteTagsOutput() = default;
            ~OperationDetailForDeleteTagsOutput() = default;
            void fromJsonString(const std::string &input);
            const std::shared_ptr<ErrorForDeleteTagsOutput> &getError() const { return  v_error; }
            void setError(const std::shared_ptr<ErrorForDeleteTagsOutput> &s_error ) {
                v_error = s_error;
            }
            const std::string &getResourceId() const { return  v_resourceId; }
            void setResourceId(const std::string &s_resourceId ) {
                v_resourceId = s_resourceId;
            }
        private:
            std::shared_ptr<ErrorForDeleteTagsOutput> v_error;
            std::string v_resourceId;
        };
    }
}
#endif // !VOLCENGINE_ECS_OPERATIONDETAILFORDELETETAGSOUTPUT_H