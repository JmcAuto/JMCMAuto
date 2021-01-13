#include "modules/leo/common/leo_gflags.h"

DEFINE_string(leoa_node_name, "leo_a", "The node name a in proto");
DEFINE_string(leob_node_name, "leo_b", "The node name  b in proto");
DEFINE_string(leoc_node_name, "leo_c", "The module name c in proto");
DEFINE_string(leo_module_name, "leo", "Module name");

DEFINE_string(leo_adapter_config_filename, "modules/leo/conf/adapter.conf", "The adapter config file.");
DEFINE_string(leo_conf_file, "modules/leo/conf/leo_conf.pb.txt", "Default leo conf file.");

DEFINE_double(leoa_freq, 100, "Leoa feedback timer frequency.");
DEFINE_double(leob_freq, 50, "Leob feedback timer frequency.");
DEFINE_double(leoc_freq, 20, "Leoc feedback timer frequency.");

DEFINE_string(leo_group_filename, "modules/leo/data/group.csv", "The groups infomation file.");
DEFINE_string(calculate, "a", "The computational method.");
