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
#ifndef VOLCENGINE_CEN_CREATECENSERVICEROUTEENTRYREQUEST_H
#define VOLCENGINE_CEN_CREATECENSERVICEROUTEENTRYREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace cen{
        class CreateCenServiceRouteEntryRequest {
        public:
            CreateCenServiceRouteEntryRequest();
            ~CreateCenServiceRouteEntryRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getCenId()const { return  v_cenId; }
            bool CenIdHasBeenSet() const { return v_cenIdHasBeenSet; }
            void setCenId(const std::string &s_cenId ) {
                v_cenId = s_cenId;
                v_cenIdHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getDestinationCidrBlock()const { return  v_destinationCidrBlock; }
            bool DestinationCidrBlockHasBeenSet() const { return v_destinationCidrBlockHasBeenSet; }
            void setDestinationCidrBlock(const std::string &s_destinationCidrBlock ) {
                v_destinationCidrBlock = s_destinationCidrBlock;
                v_destinationCidrBlockHasBeenSet = true;
            }
            const std::string &getServiceRegionId()const { return  v_serviceRegionId; }
            bool ServiceRegionIdHasBeenSet() const { return v_serviceRegionIdHasBeenSet; }
            void setServiceRegionId(const std::string &s_serviceRegionId ) {
                v_serviceRegionId = s_serviceRegionId;
                v_serviceRegionIdHasBeenSet = true;
            }
            const std::string &getServiceVpcId()const { return  v_serviceVpcId; }
            bool ServiceVpcIdHasBeenSet() const { return v_serviceVpcIdHasBeenSet; }
            void setServiceVpcId(const std::string &s_serviceVpcId ) {
                v_serviceVpcId = s_serviceVpcId;
                v_serviceVpcIdHasBeenSet = true;
            }
        private:
            std::string v_cenId;
            bool v_cenIdHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_destinationCidrBlock;
            bool v_destinationCidrBlockHasBeenSet;

            std::string v_serviceRegionId;
            bool v_serviceRegionIdHasBeenSet;

            std::string v_serviceVpcId;
            bool v_serviceVpcIdHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CEN_CREATECENSERVICEROUTEENTRYREQUEST_H