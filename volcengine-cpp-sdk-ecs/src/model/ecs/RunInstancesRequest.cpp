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
#include <sstream>
#include <volcengine/core/RequestBuilder.h>
#include <volcengine/core/utils/StringUtils.h>
#include "volcengine/ecs/model/RunInstancesRequest.h"

using namespace volcengine;
using namespace volcengine::ecs;
RunInstancesRequest::RunInstancesRequest(){
    v_autoRenew = false;
    v_autoRenewHasBeenSet = false;
    v_autoRenewPeriod = 0;
    v_autoRenewPeriodHasBeenSet = false;
    v_count = 0;
    v_countHasBeenSet = false;
    v_dryRun = false;
    v_dryRunHasBeenSet = false;
    v_keepImageCredential = false;
    v_keepImageCredentialHasBeenSet = false;
    v_minCount = 0;
    v_minCountHasBeenSet = false;
    v_period = 0;
    v_periodHasBeenSet = false;
    v_suffixIndex = 0;
    v_suffixIndexHasBeenSet = false;
    v_uniqueSuffix = false;
    v_uniqueSuffixHasBeenSet = false;
}

RequestBuilder RunInstancesRequest::withRequestBuilder(RequestBuilder rb, const std::string &chain) const {
    rb.withQuery("Action","RunInstances");
    rb.withQuery("Version","2020-04-01");

    if(v_autoRenewHasBeenSet){
        rb.withQuery(chain + "AutoRenew", std::to_string(v_autoRenew));

    }

    if(v_autoRenewPeriodHasBeenSet){
        rb.withQuery(chain + "AutoRenewPeriod", std::to_string(v_autoRenewPeriod));

    }

    if(v_clientTokenHasBeenSet){
        rb.withQuery(chain + "ClientToken", v_clientToken);

    }

    if(v_countHasBeenSet){
        rb.withQuery(chain + "Count", std::to_string(v_count));

    }

    if(v_creditSpecificationHasBeenSet){
        rb.withQuery(chain + "CreditSpecification", v_creditSpecification);

    }

    if(v_deploymentSetIdHasBeenSet){
        rb.withQuery(chain + "DeploymentSetId", v_deploymentSetId);

    }

    if(v_descriptionHasBeenSet){
        rb.withQuery(chain + "Description", v_description);

    }

    if(v_dryRunHasBeenSet){
        rb.withQuery(chain + "DryRun", std::to_string(v_dryRun));

    }

    if(v_hostNameHasBeenSet){
        rb.withQuery(chain + "HostName", v_hostName);

    }

    if(v_hostnameHasBeenSet){
        rb.withQuery(chain + "Hostname", v_hostname);

    }

    if(v_hpcClusterIdHasBeenSet){
        rb.withQuery(chain + "HpcClusterId", v_hpcClusterId);

    }

    if(v_imageIdHasBeenSet){
        rb.withQuery(chain + "ImageId", v_imageId);

    }

    if(v_instanceChargeTypeHasBeenSet){
        rb.withQuery(chain + "InstanceChargeType", v_instanceChargeType);

    }

    if(v_instanceNameHasBeenSet){
        rb.withQuery(chain + "InstanceName", v_instanceName);

    }

    if(v_instanceTypeHasBeenSet){
        rb.withQuery(chain + "InstanceType", v_instanceType);

    }

    if(v_instanceTypeIdHasBeenSet){
        rb.withQuery(chain + "InstanceTypeId", v_instanceTypeId);

    }

    if(v_keepImageCredentialHasBeenSet){
        rb.withQuery(chain + "KeepImageCredential", std::to_string(v_keepImageCredential));

    }

    if(v_keyPairNameHasBeenSet){
        rb.withQuery(chain + "KeyPairName", v_keyPairName);

    }

    if(v_minCountHasBeenSet){
        rb.withQuery(chain + "MinCount", std::to_string(v_minCount));

    }

    if(v_networkInterfacesHasBeenSet){
      unsigned v_networkInterfacesCount = 1;
      for(auto& item : v_networkInterfaces){
        std::stringstream ss;
        ss << chain << "NetworkInterfaces." << v_networkInterfacesCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_networkInterfacesCount ++;
      }
    }

    if(v_passwordHasBeenSet){
        rb.withQuery(chain + "Password", v_password);

    }

    if(v_periodHasBeenSet){
        rb.withQuery(chain + "Period", std::to_string(v_period));

    }

    if(v_periodUnitHasBeenSet){
        rb.withQuery(chain + "PeriodUnit", v_periodUnit);

    }

    if(v_projectNameHasBeenSet){
        rb.withQuery(chain + "ProjectName", v_projectName);

    }

    if(v_securityEnhancementStrategyHasBeenSet){
        rb.withQuery(chain + "SecurityEnhancementStrategy", v_securityEnhancementStrategy);

    }

    if(v_spotStrategyHasBeenSet){
        rb.withQuery(chain + "SpotStrategy", v_spotStrategy);

    }

    if(v_suffixIndexHasBeenSet){
        rb.withQuery(chain + "SuffixIndex", std::to_string(v_suffixIndex));

    }

    if(v_tagsHasBeenSet){
      unsigned v_tagsCount = 1;
      for(auto& item : v_tags){
        std::stringstream ss;
        ss << chain << "Tags." << v_tagsCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_tagsCount ++;
      }
    }

    if(v_uniqueSuffixHasBeenSet){
        rb.withQuery(chain + "UniqueSuffix", std::to_string(v_uniqueSuffix));

    }

    if(v_userDataHasBeenSet){
        rb.withQuery(chain + "UserData", v_userData);

    }

    if(v_volumesHasBeenSet){
      unsigned v_volumesCount = 1;
      for(auto& item : v_volumes){
        std::stringstream ss;
        ss << chain << "Volumes." << v_volumesCount;
        rb = item.withRequestBuilder(rb, ss.str()+".");
        v_volumesCount ++;
      }
    }

    if(v_zoneIdHasBeenSet){
        rb.withQuery(chain + "ZoneId", v_zoneId);

    }

    return rb;
}

