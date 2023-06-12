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
#ifndef VOLCENGINE_MAP_UTILS_H_
#define VOLCENGINE_MAP_UTILS_H_

#include <string>
#include "map"

namespace volcengine {
    class MapUtils {
    public:
        static std::string
        findValueByKeyIgnoreCase(const std::map<std::string, std::string> &map, const std::string &key);
    };
}

#endif // !VOLCENGINE_MAP_UTILS_H_

