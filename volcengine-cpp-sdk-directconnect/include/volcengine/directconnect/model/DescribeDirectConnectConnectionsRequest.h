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
#ifndef VOLCENGINE_DIRECTCONNECT_DESCRIBEDIRECTCONNECTCONNECTIONSREQUEST_H
#define VOLCENGINE_DIRECTCONNECT_DESCRIBEDIRECTCONNECTCONNECTIONSREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/directconnect/model/TagFilterForDescribeDirectConnectConnectionsInput.h"

namespace volcengine{
    namespace directconnect{
        class DescribeDirectConnectConnectionsRequest {
        public:
            DescribeDirectConnectConnectionsRequest();
            ~DescribeDirectConnectConnectionsRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getAccessPoint()const { return  v_accessPoint; }
            bool AccessPointHasBeenSet() const { return v_accessPointHasBeenSet; }
            void setAccessPoint(const std::string &s_accessPoint ) {
                v_accessPoint = s_accessPoint;
                v_accessPointHasBeenSet = true;
            }
            const std::string &getConnectionType()const { return  v_connectionType; }
            bool ConnectionTypeHasBeenSet() const { return v_connectionTypeHasBeenSet; }
            void setConnectionType(const std::string &s_connectionType ) {
                v_connectionType = s_connectionType;
                v_connectionTypeHasBeenSet = true;
            }
            const std::string &getDirectConnectAccessPointId()const { return  v_directConnectAccessPointId; }
            bool DirectConnectAccessPointIdHasBeenSet() const { return v_directConnectAccessPointIdHasBeenSet; }
            void setDirectConnectAccessPointId(const std::string &s_directConnectAccessPointId ) {
                v_directConnectAccessPointId = s_directConnectAccessPointId;
                v_directConnectAccessPointIdHasBeenSet = true;
            }
            const std::vector<std::string> &getDirectConnectConnectionIds()const { return  v_directConnectConnectionIds; }
            bool DirectConnectConnectionIdsHasBeenSet() const { return v_directConnectConnectionIdsHasBeenSet; }
            void setDirectConnectConnectionIds(const std::vector<std::string> &s_directConnectConnectionIds ) {
                v_directConnectConnectionIds = s_directConnectConnectionIds;
                v_directConnectConnectionIdsHasBeenSet = true;
            }
            const std::string &getDirectConnectConnectionName()const { return  v_directConnectConnectionName; }
            bool DirectConnectConnectionNameHasBeenSet() const { return v_directConnectConnectionNameHasBeenSet; }
            void setDirectConnectConnectionName(const std::string &s_directConnectConnectionName ) {
                v_directConnectConnectionName = s_directConnectConnectionName;
                v_directConnectConnectionNameHasBeenSet = true;
            }
            const std::string &getLineOperator()const { return  v_lineOperator; }
            bool LineOperatorHasBeenSet() const { return v_lineOperatorHasBeenSet; }
            void setLineOperator(const std::string &s_lineOperator ) {
                v_lineOperator = s_lineOperator;
                v_lineOperatorHasBeenSet = true;
            }
            const std::string &getOperator()const { return  v_operator; }
            bool OperatorHasBeenSet() const { return v_operatorHasBeenSet; }
            void setOperator(const std::string &s_operator ) {
                v_operator = s_operator;
                v_operatorHasBeenSet = true;
            }
            int getPageNumber()const { return  v_pageNumber; }
            bool PageNumberHasBeenSet() const { return v_pageNumberHasBeenSet; }
            void setPageNumber(const int s_pageNumber ) {
                v_pageNumber = s_pageNumber;
                v_pageNumberHasBeenSet = true;
            }
            int getPageSize()const { return  v_pageSize; }
            bool PageSizeHasBeenSet() const { return v_pageSizeHasBeenSet; }
            void setPageSize(const int s_pageSize ) {
                v_pageSize = s_pageSize;
                v_pageSizeHasBeenSet = true;
            }
            const std::string &getPeerLocation()const { return  v_peerLocation; }
            bool PeerLocationHasBeenSet() const { return v_peerLocationHasBeenSet; }
            void setPeerLocation(const std::string &s_peerLocation ) {
                v_peerLocation = s_peerLocation;
                v_peerLocationHasBeenSet = true;
            }
            const std::vector<TagFilterForDescribeDirectConnectConnectionsInput> &getTagFilters()const { return  v_tagFilters; }
            bool TagFiltersHasBeenSet() const { return v_tagFiltersHasBeenSet; }
            void setTagFilters(const std::vector<TagFilterForDescribeDirectConnectConnectionsInput> &s_tagFilters ) {
                v_tagFilters = s_tagFilters;
                v_tagFiltersHasBeenSet = true;
            }
        private:
            std::string v_accessPoint;
            bool v_accessPointHasBeenSet;

            std::string v_connectionType;
            bool v_connectionTypeHasBeenSet;

            std::string v_directConnectAccessPointId;
            bool v_directConnectAccessPointIdHasBeenSet;

            std::vector<std::string> v_directConnectConnectionIds;
            bool v_directConnectConnectionIdsHasBeenSet;

            std::string v_directConnectConnectionName;
            bool v_directConnectConnectionNameHasBeenSet;

            std::string v_lineOperator;
            bool v_lineOperatorHasBeenSet;

            std::string v_operator;
            bool v_operatorHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

            std::string v_peerLocation;
            bool v_peerLocationHasBeenSet;

            std::vector<TagFilterForDescribeDirectConnectConnectionsInput> v_tagFilters;
            bool v_tagFiltersHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_DIRECTCONNECT_DESCRIBEDIRECTCONNECTCONNECTIONSREQUEST_H