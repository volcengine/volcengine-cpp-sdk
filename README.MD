### Volcengine SDK for C++
####  概述
1. 火山引擎-云计算-C++SDK
2. CMAKE_CXX_STANDARD 11 
3. 依赖 OpenSSL & Curl 请预先装好,否则无法编译
4. 标准CMakeLists方式依赖

#### 详细使用说明
##### 依赖准备工作
###### MacOS
```shell
berw install openssl
```
###### RedHat/CentOS
```shell
yum install openssl-devel libcurl-devel
```
##### Debian/Ubuntu
```shell
sudo apt-get install libcurl4-openssl-dev libssl-dev
```
###### 环境变量设置
```shell
#请确保如下环境变量被正确设置 这里的值为示例值 请根据各自情况进行设置
export OPENSSL_ROOT_DIR=/usr/local/Cellar/openssl@3/3.1.0
export OPENSSL_LIBRARIES=/usr/local/Cellar/openssl@3/3.1.0/lib
export OPENSSL_INCLUDE_DIRS=/usr/local/Cellar/openssl@3/3.1.0/include

export CMAKE_LIBRARY_PATH=/usr/local/lib
export LIBRARY_PATH=/usr/local/lib
export LIBRARY_PATH=$LIBRARY_PATH:$OPENSSL_LIBRARIES

```
###### 编译安装
```shell
#编译方式二选一
#编译安装所有的业务的包
sh install.sh
#编译安装指定业务的包
sh install.sh ecs
```
###### 代码使用实例
```c++
//创建一个cpp文件 命名为test.cpp

#include <sstream>
#include "volcengine/core/Volcengine.h"
#include "volcengine/core/VolcengineClientConfig.h"
#include "volcengine/vpc/VpcClient.h"

using namespace volcengine;
using namespace volcengine::vpc;

int main() {
    std::string region("cn-beijing");
    std::string ak("ak");
    std::string sk("sk");

    InitializeSdk();

    auto c = std::make_shared<VolcengineClientConfig>(region, ak,sk,"");
    auto client = std::make_shared<VpcClient>(c);

    DescribeEipAddressesRequest describeVpcsRequest;
    ResultData<VolcengineMetadata, DescribeEipAddressesResult> output = client->DescribeEipAddresses(describeVpcsRequest);


    CloseSdk();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


```
```shell
#编译
 g++ -o sdk_test test.cpp --std=c++11 -lvolcengine-cpp-sdk-core -lvolcengine-cpp-sdk-vpc -lcurl -lcrypto
#执行
 ./sdk_test
```
