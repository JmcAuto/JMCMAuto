load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "leo_lib",
    hdrs = ["leo.h"],
    deps = [
        "//modules/leo/common:leo_common",
        "//modules/common",
        "//modules/common:jmc_auto_app",
        "//modules/common/adapters:adapter_manager",
        "//modules/common/util:string_tokenizer",
    ],
)

cc_binary(
    name = "leoa",
    srcs = ["leoa.cc"],
    deps = [
        ":leo_lib",
        "//external:gflags",
        "//modules/common:log",
        "//modules/common:jmc_auto_app",
        "@ros//:ros_common",
    ],
)

cc_binary(
    name = "leob",
    srcs = ["leob.cc"],
    deps = [
        ":leo_lib",
        "//external:gflags",
        "//modules/common:log",
        "//modules/common:jmc_auto_app",
        "@ros//:ros_common",
    ],
)

cc_binary(
    name = "leoc",
    srcs = ["leoc.cc"],
    deps = [
        ":leo_lib",
        "//external:gflags",
        "//modules/common:log",
        "//modules/common:jmc_auto_app",
        "@ros//:ros_common",
    ],
)

cpplint()
