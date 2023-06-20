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
#ifndef VOLCENGINE_VKE_LOGGINGCONFIGFORUPDATECLUSTERCONFIGINPUT_H
#define VOLCENGINE_VKE_LOGGINGCONFIGFORUPDATECLUSTERCONFIGINPUT_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vke/model/LogSetupForUpdateClusterConfigInput.h"
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class LoggingConfigForUpdateClusterConfigInput {
        public:
            LoggingConfigForUpdateClusterConfigInput();
            ~LoggingConfigForUpdateClusterConfigInput() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            const std::string &getLogProjectId()const { return  v_logProjectId; }
            bool LogProjectIdHasBeenSet() const { return v_logProjectIdHasBeenSet; }
            void setLogProjectId(const std::string &s_logProjectId ) {
                v_logProjectId = s_logProjectId;
                v_logProjectIdHasBeenSet = true;
            }
            const std::vector<LogSetupForUpdateClusterConfigInput> &getLogSetups()const { return  v_logSetups; }
            bool LogSetupsHasBeenSet() const { return v_logSetupsHasBeenSet; }
            void setLogSetups(const std::vector<LogSetupForUpdateClusterConfigInput> &s_logSetups ) {
                v_logSetups = s_logSetups;
                v_logSetupsHasBeenSet = true;
            }
        private:
            std::string v_logProjectId;
            bool v_logProjectIdHasBeenSet;

            std::vector<LogSetupForUpdateClusterConfigInput> v_logSetups;
            bool v_logSetupsHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_LOGGINGCONFIGFORUPDATECLUSTERCONFIGINPUT_H