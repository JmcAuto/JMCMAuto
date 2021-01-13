#ifndef MODULES_LEO_COMMON_GFLAGS_H_
#define MODULES_LEO_COMMON_GFLAGS_H_

#include "gflags/gflags.h"

DECLARE_string(leoa_node_name);
DECLARE_string(leob_node_name);
DECLARE_string(leoc_node_name);
DECLARE_string(leo_module_name);

DECLARE_string(leo_adapter_config_filename);
DECLARE_string(leo_conf_file);

DECLARE_double(leoa_freq);
DECLARE_double(leob_freq);
DECLARE_double(leoc_freq);
DECLARE_string(leo_group_filename);
DECLARE_string(calculate);

#endif
