#!/bin/bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "${DIR}/.."

export CM_CONFIG_FILE_PATH=${DIR}/../modules/control/outputJson/
./Debug/modules/canbus/tools/teleop --flagfile=modules/canbus/tools/teleop.conf --alsologtostderr --log_dir=data/log/
