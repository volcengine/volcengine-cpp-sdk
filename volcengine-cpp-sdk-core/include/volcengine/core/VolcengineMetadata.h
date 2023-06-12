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
#ifndef VOLCENGINE_VOLCENGINE_METADATA_H_
#define VOLCENGINE_VOLCENGINE_METADATA_H_

#include <string>
#include <vector>
#include <sstream>
#include "VolcengineError.h"

namespace volcengine {
    class VolcengineMetadata {
    public:
        void fromJsonString(const std::string &error);

        int getHttpCode() const {
            return httpCode_;
        }

        void setHttpCode(int httpCode) {
            httpCode_ = httpCode;
        }

        const std::string &getRequestId() const {
            return requestId_;
        }

        void setRequestId(const std::string &requestId) {
            requestId_ = requestId;
        }

        const std::string &getAction() const {
            return action_;
        }

        void setAction(const std::string &action) {
            action_ = action;
        }

        const std::string &getVersion() const {
            return version_;
        }

        void setVersion(const std::string &version) {
            version_ = version;
        }

        const std::string &getService() const {
            return service_;
        }

        void setService(const std::string &service) {
            service_ = service;
        }

        const std::string &getRegion() const {
            return region_;
        }

        void setRegion(const std::string &region) {
            region_ = region;
        }

        const std::shared_ptr<VolcengineError> &getError() const {
            return error_;
        }

        void setError(const std::shared_ptr<VolcengineError> &error) {
            error_ = error;
        }


    private:
        int httpCode_;
        std::string requestId_;
        std::string action_;
        std::string version_;
        std::string service_;
        std::string region_;
        std::shared_ptr<VolcengineError> error_;
    };

}
#endif // !VOLCENGINE_VOLCENGINE_METADATA_H_

