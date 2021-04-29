#ifndef MODULES_CANBUS_TOOLS_GFLAGS_H_
#define MODULES_CANBUS_TOOLS_GFLAGS_H_

#include "gflags/gflags.h"

// System gflags
DECLARE_string(teleop_node_name);
DECLARE_string(teleop_module_name);
DECLARE_string(teleop_adapter_config_filename);

DEFINE_double(throttle_inc_delta);
DEFINE_double(brake_inc_delta);
DEFINE_double(steer_inc_delta);

#endif
