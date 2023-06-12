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
#ifndef VOLCENGINE_VOLCENGINE_ERROR_H_
#define VOLCENGINE_VOLCENGINE_ERROR_H_

#include <string>

namespace volcengine {
    class VolcengineError {
    public:
        VolcengineError() = default;

        ~VolcengineError() = default;

        int getCodeN() const {
            return codeN_;
        }

        void setCodeN(int codeN) {
            codeN_ = codeN;
        }

        const std::string &getCode() const {
            return code_;
        }

        void setCode(const std::string &code) {
            code_ = code;
        }

        const std::string &getMessage() const {
            return message_;
        }

        void setMessage(const std::string &message) {
            message_ = message;
        }

    private:
        int codeN_;
        std::string code_;
        std::string message_;
    };
}
#endif // !VOLCENGINE_VOLCENGINE_ERROR_H_