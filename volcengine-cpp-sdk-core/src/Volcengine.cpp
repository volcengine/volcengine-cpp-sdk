//
// Created by bytedance on 2023/5/30.
//

#include <curl/curl.h>
#include "volcengine/core/Volcengine.h"
#include "volcengine/core/transport/http/HttpClient.h"


void volcengine::InitializeSdk() {
    if (!hasInitHttpClient) {
            curl_global_init(CURL_GLOBAL_ALL);
            hasInitHttpClient = true;
    }
}

void volcengine::CloseSdk() {
    curl_global_cleanup();
    hasInitHttpClient = false;
}