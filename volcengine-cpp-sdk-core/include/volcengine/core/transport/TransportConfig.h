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
#ifndef VOLCENGINE_TRANSPORT_CONFIG_H_
#define VOLCENGINE_TRANSPORT_CONFIG_H_
namespace volcengine {
    class TransportConfig {
    public:
        TransportConfig();

        ~TransportConfig() = default;

        int getMaxIdleCount() const { return maxIdleCount_; }

        void setMaxIdleCount(int maxIdleCount) { maxIdleCount_ = maxIdleCount; }

        int getRequestTimeout() const { return requestTimeout_; }

        void setRequestTimeout(int requestTimeout) { requestTimeout_ = requestTimeout; }

        int getDialTimeout() const { return dialTimeout_; }

        void setDialTimeout(int dialTimeout) { dialTimeout_ = dialTimeout; }

        int getKeepAlive() const { return keepAlive_; }

        void setKeepAlive(int keepAlive) { keepAlive_ = keepAlive; }

        int getConnectTimeout() const { return connectTimeout_; }

        void setConnectTimeout(int connectTimeout) { connectTimeout_ = connectTimeout; }

        int getTlsHandshakeTimeout() const { return tlsHandshakeTimeout_; }

        void setTlsHandshakeTimeout(int tlsHandshakeTimeout) { tlsHandshakeTimeout_ = tlsHandshakeTimeout; }

        int getResponseHeaderTimeout() const { return responseHeaderTimeout_; }

        void setResponseHeaderTimeout(int responseHeaderTimeout) { responseHeaderTimeout_ = responseHeaderTimeout; }

        int getExpectContinueTimeout() const { return expectContinueTimeout_; }

        void setExpectContinueTimeout(int expectContinueTimeout) { expectContinueTimeout_ = expectContinueTimeout; }

        int getReadTimeout() const { return readTimeout_; }

        void setReadTimeout(int readTimeout) { readTimeout_ = readTimeout; }

        int getWriteTimeout() const { return writeTimeout_; }

        void setWriteTimeout(int writeTimeout) { writeTimeout_ = writeTimeout; }

    private:
        int maxIdleCount_;
        int requestTimeout_;
        int dialTimeout_;
        int keepAlive_;
        int connectTimeout_;
        int tlsHandshakeTimeout_;
        int responseHeaderTimeout_;
        int expectContinueTimeout_;
        int readTimeout_;
        int writeTimeout_;
    };
}
#endif // !VOLCENGINE_TRANSPORT_CONFIG_H_