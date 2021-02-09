#####################################################
# File Name: build.sh
# Author: Leo
# mail: yli97@jmc.com.cn
# Created Time: 2021年02月09日 星期二 14时32分57秒
#####################################################

#!/bin/bash

cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_SYSTEM_NAME=Linux -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=ON -DCMAKE_SYSROOT=/usr/ubuntu_crossbuild_devkit/mdc_crossbuild_sysroot -DTOOL_CHAIN_SYSROOT=/usr/ubuntu_crossbuild_devkit/mdc_crossbuild_sysroot -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/aarch64-linux-gnu-gcc -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/aarch64-linux-gnu-g++ -DCMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/make /home/leo/eclipse-workspace/JMCMAuto
