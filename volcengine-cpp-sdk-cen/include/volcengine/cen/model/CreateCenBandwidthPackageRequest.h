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
#ifndef VOLCENGINE_CEN_CREATECENBANDWIDTHPACKAGEREQUEST_H
#define VOLCENGINE_CEN_CREATECENBANDWIDTHPACKAGEREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/cen/model/TagForCreateCenBandwidthPackageInput.h"

namespace volcengine{
    namespace cen{
        class CreateCenBandwidthPackageRequest {
        public:
            CreateCenBandwidthPackageRequest();
            ~CreateCenBandwidthPackageRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            int getBandwidth()const { return  v_bandwidth; }
            bool BandwidthHasBeenSet() const { return v_bandwidthHasBeenSet; }
            void setBandwidth(const int s_bandwidth ) {
                v_bandwidth = s_bandwidth;
                v_bandwidthHasBeenSet = true;
            }
            int getBillingType()const { return  v_billingType; }
            bool BillingTypeHasBeenSet() const { return v_billingTypeHasBeenSet; }
            void setBillingType(const int s_billingType ) {
                v_billingType = s_billingType;
                v_billingTypeHasBeenSet = true;
            }
            const std::string &getCenBandwidthPackageName()const { return  v_cenBandwidthPackageName; }
            bool CenBandwidthPackageNameHasBeenSet() const { return v_cenBandwidthPackageNameHasBeenSet; }
            void setCenBandwidthPackageName(const std::string &s_cenBandwidthPackageName ) {
                v_cenBandwidthPackageName = s_cenBandwidthPackageName;
                v_cenBandwidthPackageNameHasBeenSet = true;
            }
            const std::string &getCenId()const { return  v_cenId; }
            bool CenIdHasBeenSet() const { return v_cenIdHasBeenSet; }
            void setCenId(const std::string &s_cenId ) {
                v_cenId = s_cenId;
                v_cenIdHasBeenSet = true;
            }
            const std::string &getClientToken()const { return  v_clientToken; }
            bool ClientTokenHasBeenSet() const { return v_clientTokenHasBeenSet; }
            void setClientToken(const std::string &s_clientToken ) {
                v_clientToken = s_clientToken;
                v_clientTokenHasBeenSet = true;
            }
            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getLocalGeographicRegionSetId()const { return  v_localGeographicRegionSetId; }
            bool LocalGeographicRegionSetIdHasBeenSet() const { return v_localGeographicRegionSetIdHasBeenSet; }
            void setLocalGeographicRegionSetId(const std::string &s_localGeographicRegionSetId ) {
                v_localGeographicRegionSetId = s_localGeographicRegionSetId;
                v_localGeographicRegionSetIdHasBeenSet = true;
            }
            const std::string &getPeerGeographicRegionSetId()const { return  v_peerGeographicRegionSetId; }
            bool PeerGeographicRegionSetIdHasBeenSet() const { return v_peerGeographicRegionSetIdHasBeenSet; }
            void setPeerGeographicRegionSetId(const std::string &s_peerGeographicRegionSetId ) {
                v_peerGeographicRegionSetId = s_peerGeographicRegionSetId;
                v_peerGeographicRegionSetIdHasBeenSet = true;
            }
            int getPeriod()const { return  v_period; }
            bool PeriodHasBeenSet() const { return v_periodHasBeenSet; }
            void setPeriod(const int s_period ) {
                v_period = s_period;
                v_periodHasBeenSet = true;
            }
            const std::string &getPeriodUnit()const { return  v_periodUnit; }
            bool PeriodUnitHasBeenSet() const { return v_periodUnitHasBeenSet; }
            void setPeriodUnit(const std::string &s_periodUnit ) {
                v_periodUnit = s_periodUnit;
                v_periodUnitHasBeenSet = true;
            }
            const std::string &getProjectName()const { return  v_projectName; }
            bool ProjectNameHasBeenSet() const { return v_projectNameHasBeenSet; }
            void setProjectName(const std::string &s_projectName ) {
                v_projectName = s_projectName;
                v_projectNameHasBeenSet = true;
            }
            const std::vector<TagForCreateCenBandwidthPackageInput> &getTags()const { return  v_tags; }
            bool TagsHasBeenSet() const { return v_tagsHasBeenSet; }
            void setTags(const std::vector<TagForCreateCenBandwidthPackageInput> &s_tags ) {
                v_tags = s_tags;
                v_tagsHasBeenSet = true;
            }
        private:
            int v_bandwidth;
            bool v_bandwidthHasBeenSet;

            int v_billingType;
            bool v_billingTypeHasBeenSet;

            std::string v_cenBandwidthPackageName;
            bool v_cenBandwidthPackageNameHasBeenSet;

            std::string v_cenId;
            bool v_cenIdHasBeenSet;

            std::string v_clientToken;
            bool v_clientTokenHasBeenSet;

            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_localGeographicRegionSetId;
            bool v_localGeographicRegionSetIdHasBeenSet;

            std::string v_peerGeographicRegionSetId;
            bool v_peerGeographicRegionSetIdHasBeenSet;

            int v_period;
            bool v_periodHasBeenSet;

            std::string v_periodUnit;
            bool v_periodUnitHasBeenSet;

            std::string v_projectName;
            bool v_projectNameHasBeenSet;

            std::vector<TagForCreateCenBandwidthPackageInput> v_tags;
            bool v_tagsHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_CEN_CREATECENBANDWIDTHPACKAGEREQUEST_H