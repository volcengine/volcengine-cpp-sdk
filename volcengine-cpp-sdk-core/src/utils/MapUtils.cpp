/*
 * Copyright 2021-2023 Beijing Volcanoengine Technology Ltd All rights reserved.
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
#include "volcengine/core/utils/MapUtils.h"
#include "volcengine/core/utils/StringUtils.h"

using namespace volcengine;

std::string MapUtils::findValueByKeyIgnoreCase(
        const std::map<std::string, std::string> &map, const std::string &key) {
    auto iter = map.find(key);
    if (iter != map.end()) {
        return iter->second;
    } else {
        // only check lowercase and ignore upper case
        iter = map.find(StringUtils::toLower(key));
        if (iter != map.end()) {
            return iter->second;
        } else return {};
    }
}
