#include "modules/canbus/tools/teleop_gflags.h"

// System gflags
DEFINE_string(teleop_node_name, "teleop", "The chassis module name in proto");
DEFINE_string(teleop_module_name, "teleop", "Module name");

DEFINE_string(teleop_adapter_config_filename,
              "modules/canbus/tools/adapter.conf", "The adapter config file");

DEFINE_double(throttle_inc_delta, 2.0,
              "throttle pedal command delta percentage.");
DEFINE_double(brake_inc_delta, 2.0, "brake pedal delta percentage");
DEFINE_double(steer_inc_delta, 2.0, "steer delta percentage");