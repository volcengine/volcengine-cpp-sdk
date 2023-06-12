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
#ifndef VOLCENGINE_VOLCENGINE_CLIENT_CONFIG_H_
#define VOLCENGINE_VOLCENGINE_CLIENT_CONFIG_H_


#include <string>
#include <utility>
#include "volcengine/core/transport/TransportConfig.h"
#include "volcengine/core/auth/CredentialsProvider.h"
#include "volcengine/core/auth/StaticCredentialsProvider.h"
#include "volcengine/core/transport/Transport.h"
#include "volcengine/core/common/SystemInfo.h"
#include "volcengine/core/auth/AuthSigner.h"
#include "volcengine/core/transport/DefaultTransport.h"

namespace volcengine {

    class VolcengineClientConfig {
    public:

        VolcengineClientConfig(const std::string &region, const std::shared_ptr<CredentialsProvider> &credentials) {
            region_ = region;
            credentials_ = credentials;
        }

        VolcengineClientConfig(const std::string &region, const std::string &ak,const std::string &sk) {
            region_ = region;
            credentials_ =  std::make_shared<StaticCredentialsProvider>(ak, sk);
        }

        VolcengineClientConfig(const std::string &region, const std::string &ak,const std::string &sk,const std::string &token) {
            region_ = region;
            credentials_ =  std::make_shared<StaticCredentialsProvider>(ak, sk,token);
        }

        VolcengineClientConfig(const std::string &region, const std::shared_ptr<CredentialsProvider> &credentials,
                               const std::shared_ptr<Transport> &transport) {
            region_ = region;
            credentials_ = credentials;
            transport_ = transport;
        }

        VolcengineClientConfig(const std::string &domain, const std::string &region,
                               std::shared_ptr<CredentialsProvider> &credentials,
                               const std::shared_ptr<Transport> &transport) {
            domain_ = domain;
            region_ = region;
            credentials_ = credentials;
            transport_ = transport;
        }

        const std::string &getDomain() const {
            return domain_;
        }

        void setDomain(const std::string &domain) {
            domain_ = domain;
        }

        const std::string &getRegion() const {
            return region_;
        }

        void setRegion(const std::string &region) {
            region_ = region;
        }

        const std::shared_ptr<CredentialsProvider> &getCredentials() const {
            return credentials_;
        }

        void setCredentials(const std::shared_ptr<CredentialsProvider> &credentials) {
            credentials_ = credentials;
        }

        const std::shared_ptr<Transport> &getTransport() const {
//            if (transport_== nullptr){
//                TransportConfig conf;
//                transport_ = std::make_shared<DefaultTransport>(conf);
//            }
            return transport_;
        }

        void setTransport(const std::shared_ptr<Transport> &transport) {
            transport_ = transport;
        }

        bool isDisableSSL() const {
            return disableSSL_;
        }

        void setDisableSSL(const bool disableSSL) {
            disableSSL_ = disableSSL;
        }

        const std::string &getUserAgent() const {
            return userAgent_;
        }


        ~VolcengineClientConfig() = default;

    private:
        std::string domain_ = "open.volcengineapi.com";
        std::string region_;
        bool disableSSL_ = false;
        std::shared_ptr<CredentialsProvider> credentials_;
        std::shared_ptr<Transport> transport_;

        //only Get Not support Set Now
        std::string userAgent_ = DefaultUserAgent();
    };
}

#endif // !VOLCENGINE_VOLCENGINE_CLIENT_CONFIG_H_

