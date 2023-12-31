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
#ifndef VOLCENGINE_DIRECTCONNECT_DIRECTCONNECTACCESSPOINTFORDESCRIBEDIRECTCONNECTACCESSPOINTSOUTPUT_H
#define VOLCENGINE_DIRECTCONNECT_DIRECTCONNECTACCESSPOINTFORDESCRIBEDIRECTCONNECTACCESSPOINTSOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace directconnect{
        class DirectConnectAccessPointForDescribeDirectConnectAccessPointsOutput {
        public:
            DirectConnectAccessPointForDescribeDirectConnectAccessPointsOutput() = default;
            ~DirectConnectAccessPointForDescribeDirectConnectAccessPointsOutput() = default;
            void fromJsonString(const std::string &input);
            const std::string &getDescription() const { return  v_description; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
            }
            const std::string &getDirectConnectAccessPointId() const { return  v_directConnectAccessPointId; }
            void setDirectConnectAccessPointId(const std::string &s_directConnectAccessPointId ) {
                v_directConnectAccessPointId = s_directConnectAccessPointId;
            }
            const std::string &getDirectConnectAccessPointName() const { return  v_directConnectAccessPointName; }
            void setDirectConnectAccessPointName(const std::string &s_directConnectAccessPointName ) {
                v_directConnectAccessPointName = s_directConnectAccessPointName;
            }
            const std::vector<std::string> &getLineOperators() const { return  v_lineOperators; }
            void setLineOperators(const std::vector<std::string> &s_lineOperators ) {
                v_lineOperators = s_lineOperators;
            }
            const std::string &getLocation() const { return  v_location; }
            void setLocation(const std::string &s_location ) {
                v_location = s_location;
            }
            const std::string &getStatus() const { return  v_status; }
            void setStatus(const std::string &s_status ) {
                v_status = s_status;
            }
        private:
            std::string v_description;
            std::string v_directConnectAccessPointId;
            std::string v_directConnectAccessPointName;
            std::vector<std::string> v_lineOperators;
            std::string v_location;
            std::string v_status;
        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_DIRECTCONNECTACCESSPOINTFORDESCRIBEDIRECTCONNECTACCESSPOINTSOUTPUT_H