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
#ifndef VOLCENGINE_ECS_NETWORKFORDESCRIBEINSTANCETYPESOUTPUT_H
#define VOLCENGINE_ECS_NETWORKFORDESCRIBEINSTANCETYPESOUTPUT_H
#include <string>
#include <volcengine/core/RequestBuilder.h>
#include "volcengine/core/utils/json.hpp"
namespace volcengine{
    namespace ecs{
        class NetworkForDescribeInstanceTypesOutput {
        public:
            NetworkForDescribeInstanceTypesOutput() = default;
            ~NetworkForDescribeInstanceTypesOutput() = default;
            void fromJsonString(const std::string &input);
            const int getBaselineBandwidthMbps() const { return  v_baselineBandwidthMbps; }
            void setBaselineBandwidthMbps(const int s_baselineBandwidthMbps ) {
                v_baselineBandwidthMbps = s_baselineBandwidthMbps;
            }
            const int getMaximumBandwidthMbps() const { return  v_maximumBandwidthMbps; }
            void setMaximumBandwidthMbps(const int s_maximumBandwidthMbps ) {
                v_maximumBandwidthMbps = s_maximumBandwidthMbps;
            }
            const int getMaximumNetworkInterfaces() const { return  v_maximumNetworkInterfaces; }
            void setMaximumNetworkInterfaces(const int s_maximumNetworkInterfaces ) {
                v_maximumNetworkInterfaces = s_maximumNetworkInterfaces;
            }
            const int getMaximumPrivateIpv4AddressesPerNetworkInterface() const { return  v_maximumPrivateIpv4AddressesPerNetworkInterface; }
            void setMaximumPrivateIpv4AddressesPerNetworkInterface(const int s_maximumPrivateIpv4AddressesPerNetworkInterface ) {
                v_maximumPrivateIpv4AddressesPerNetworkInterface = s_maximumPrivateIpv4AddressesPerNetworkInterface;
            }
            const int getMaximumQueuesPerNetworkInterface() const { return  v_maximumQueuesPerNetworkInterface; }
            void setMaximumQueuesPerNetworkInterface(const int s_maximumQueuesPerNetworkInterface ) {
                v_maximumQueuesPerNetworkInterface = s_maximumQueuesPerNetworkInterface;
            }
            const int getMaximumThroughputKpps() const { return  v_maximumThroughputKpps; }
            void setMaximumThroughputKpps(const int s_maximumThroughputKpps ) {
                v_maximumThroughputKpps = s_maximumThroughputKpps;
            }
        private:
            int v_baselineBandwidthMbps{};
            int v_maximumBandwidthMbps{};
            int v_maximumNetworkInterfaces{};
            int v_maximumPrivateIpv4AddressesPerNetworkInterface{};
            int v_maximumQueuesPerNetworkInterface{};
            int v_maximumThroughputKpps{};
        };
    }
}
#endif // !VOLCENGINE_ECS_NETWORKFORDESCRIBEINSTANCETYPESOUTPUT_H