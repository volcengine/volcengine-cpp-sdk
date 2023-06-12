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
#ifndef VOLCENGINE_RESOURCE_DATA_H_
#define VOLCENGINE_RESOURCE_DATA_H_
namespace volcengine {
    template<typename M, typename N>
    class ResultData {
    public:
        ResultData() = default;

        bool isSuccess() const {
            return success_;
        }

        void setSuccess(bool success) {
            success_ = success;
        }

        const std::shared_ptr<M> &getMetadata() const {
            return m_;
        }

        void setMetadata(const std::shared_ptr<M> &m) {
            m_ = m;
        }

        const std::shared_ptr<N> &getResult() const {
            return n_;
        }

        void setResult(const std::shared_ptr<N> &n) {
            n_ = n;
        }

    private:
        bool success_ = false;
        std::shared_ptr<M> m_;
        std::shared_ptr<N> n_;
    };
}


#endif // !VOLCENGINE_RESOURCE_DATA_H_