#####################################################
# File Name: canbus.sh
# Author: Leo
# mail: yli97@jmc.com.cn
# Created Time: 2021年03月23日 星期二 16时34分44秒
#####################################################

#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "${DIR}/.."

export CM_CONFIG_FILE_PATH=${DIR}/modules/canbus/outputJson/
./Debug/modules/canbus/canbus --flagfile=modules/canbus/conf/canbus.conf --log_dir=data/log/
