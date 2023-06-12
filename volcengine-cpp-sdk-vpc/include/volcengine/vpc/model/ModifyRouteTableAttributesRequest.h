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
#ifndef VOLCENGINE_VPC_MODIFYROUTETABLEATTRIBUTESREQUEST_H
#define VOLCENGINE_VPC_MODIFYROUTETABLEATTRIBUTESREQUEST_H
#include <string>
#include <volcengine/core/RequestBuilder.h>

namespace volcengine{
    namespace vpc{
        class ModifyRouteTableAttributesRequest {
        public:
            ModifyRouteTableAttributesRequest();
            ~ModifyRouteTableAttributesRequest() = default;

            RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain)const;

            const std::string &getDescription()const { return  v_description; }
            bool DescriptionHasBeenSet() const { return v_descriptionHasBeenSet; }
            void setDescription(const std::string &s_description ) {
                v_description = s_description;
                v_descriptionHasBeenSet = true;
            }
            const std::string &getRouteTableId()const { return  v_routeTableId; }
            bool RouteTableIdHasBeenSet() const { return v_routeTableIdHasBeenSet; }
            void setRouteTableId(const std::string &s_routeTableId ) {
                v_routeTableId = s_routeTableId;
                v_routeTableIdHasBeenSet = true;
            }
            const std::string &getRouteTableName()const { return  v_routeTableName; }
            bool RouteTableNameHasBeenSet() const { return v_routeTableNameHasBeenSet; }
            void setRouteTableName(const std::string &s_routeTableName ) {
                v_routeTableName = s_routeTableName;
                v_routeTableNameHasBeenSet = true;
            }
        private:
            std::string v_description;
            bool v_descriptionHasBeenSet;

            std::string v_routeTableId;
            bool v_routeTableIdHasBeenSet;

            std::string v_routeTableName;
            bool v_routeTableNameHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VPC_MODIFYROUTETABLEATTRIBUTESREQUEST_H