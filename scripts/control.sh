#####################################################
# File Name: control.sh
# Author: Leo
# mail: yli97@jmc.com.cn
# Created Time: 2021年03月23日 星期二 16时37分39秒
#####################################################

#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "${DIR}/.."

export CM_CONFIG_FILE_PATH=${DIR}/modules/control/outputJson/
./Debug/modules/control/control --flagfile=modules/control/conf/control.conf --log_dir=data/log/
