package(default_visibility = ["//visibility:public"])

proto_library(
    name = "leo_conf_proto_lib",
    srcs = [
        "leo_conf.proto"
    ],
)

cc_proto_library(
    name = "leoa_proto",
    deps = [
        ":leoa_proto_lib",
    ],
)

proto_library(
    name = "leoa_proto_lib",
    srcs = [
        "leoa.proto",
    ],
    deps = [
        ":leo_conf_proto_lib",
        ":group_proto_lib",
        "//modules/common/proto:common_proto_lib",
        "//modules/common/proto:header_proto_lib",
    ],
)

cc_proto_library(
    name = "leob_proto",
    deps = [
        ":leob_proto_lib",
    ],
)

proto_library(
    name = "leob_proto_lib",
    srcs = [
        "leob.proto",
    ],
    deps = [
        ":leo_conf_proto_lib",
        ":group_proto_lib",
        "//modules/common/proto:common_proto_lib",
        "//modules/common/proto:header_proto_lib",
    ],
)

cc_proto_library(
    name = "leoc_proto",
    deps = [
        ":leoc_proto_lib",
    ],
)

proto_library(
    name = "leoc_proto_lib",
    srcs = [
        "leoc.proto",
    ],
    deps = [
        ":leo_conf_proto_lib",
        ":group_proto_lib",
        "//modules/common/proto:common_proto_lib",
        "//modules/common/proto:header_proto_lib",
    ],
)

cc_proto_library(
    name = "group_proto",
    deps = [
        ":group_proto_lib",
    ],
)

proto_library(
    name = "group_proto_lib",
    srcs = [
        "group.proto",
    ],
)
