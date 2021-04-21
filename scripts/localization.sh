#####################################################
# File Name: scripts/localization.sh
# Author: Leo
# mail: yli97@jmc.com.cn
# Created Time: 2021年04月21日 星期三 17时02分41秒
#####################################################

#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "${DIR}/.."

export CM_CONFIG_FILE_PATH=${DIR}/../modules/localization/outputJson/
./Debug/modules/localization/localization --flagfile=modules/localization/conf/localization.conf --log_dir=data/log/
