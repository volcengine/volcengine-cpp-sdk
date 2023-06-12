//
// Created by bytedance on 2023/5/30.
//
#include <sstream>
#include <volcengine/core/auth/StaticCredentialsProvider.h>

namespace volcengine{
    StaticCredentialsProvider::StaticCredentialsProvider(const std::string &accessKeyId,
                                                         const std::string &secretAccessKey)
                                                         : CredentialsProvider(), staticCredentials(accessKeyId,secretAccessKey,""){}

    StaticCredentialsProvider::StaticCredentialsProvider(const std::string &accessKeyId,
                                                         const std::string &secretAccessKey,
                                                         const std::string &sessionToken)
                                                         : CredentialsProvider(), staticCredentials(accessKeyId,secretAccessKey,sessionToken){}
    StaticCredentialsProvider::~StaticCredentialsProvider() {}

    Credentials StaticCredentialsProvider::credentials() {
        return staticCredentials;
    }

}