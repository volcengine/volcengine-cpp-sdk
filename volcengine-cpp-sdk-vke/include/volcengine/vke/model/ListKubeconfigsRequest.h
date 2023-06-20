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
#ifndef VOLCENGINE_VKE_LISTKUBECONFIGSREQUEST_H
#define VOLCENGINE_VKE_LISTKUBECONFIGSREQUEST_H
#include <string>
#include "volcengine/core/utils/json.hpp"
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/vke/model/FilterForListKubeconfigsInput.h"
using namespace nlohmann;

namespace volcengine{
    namespace vke{
        class ListKubeconfigsRequest {
        public:
            ListKubeconfigsRequest();
            ~ListKubeconfigsRequest() = default;

            static RequestBuilder withRequestBuilder(RequestBuilder rb, const std::string &chain);
            json jsonPayload() const;

            const std::shared_ptr<FilterForListKubeconfigsInput> &getFilter()const { return  v_filter; }
            bool FilterHasBeenSet() const { return v_filterHasBeenSet; }
            void setFilter(const std::shared_ptr<FilterForListKubeconfigsInput> &s_filter ) {
                v_filter = s_filter;
                v_filterHasBeenSet = true;
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
        private:
            std::shared_ptr<FilterForListKubeconfigsInput> v_filter;
            bool v_filterHasBeenSet;

            int v_pageNumber;
            bool v_pageNumberHasBeenSet;

            int v_pageSize;
            bool v_pageSizeHasBeenSet;

        };
    }
}
#endif // !VOLCENGINE_VKE_LISTKUBECONFIGSREQUEST_H