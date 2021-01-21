load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "message_header",
    hdrs = ["message_header.h"],
)


cc_library(
    name = "message_traits",
    hdrs = ["message_traits.h"],
    deps = [
        ":message_header",
        ":protobuf_traits",
        ":py_message_traits",
        ":raw_message_traits",
        "//modules/common:macro",
    ],
)


cc_library(
    name = "protobuf_factory",
    srcs = ["protobuf_factory.cc"],
    hdrs = ["protobuf_factory.h"],
    deps = [
        "//modules/common:log",
        "//modules/common:macros",
        "//modules/common/proto:proto_desc_cc_proto",
    ],
)

cc_library(
    name = "protobuf_traits",
    hdrs = ["protobuf_traits.h"],
    deps = [
        ":protobuf_factory",
    ],
)

cc_library(
    name = "py_message",
    hdrs = ["py_message.h"],
    deps = [
        ":protobuf_factory",
    ],
)

cc_library(
    name = "py_message_traits",
    hdrs = ["py_message_traits.h"],
    deps = [
        ":protobuf_factory",
        ":py_message",
    ],
)

cc_library(
    name = "raw_message",
    hdrs = ["raw_message.h"],
    deps = [
        ":protobuf_factory",
    ],
)

cc_library(
    name = "raw_message_traits",
    hdrs = ["raw_message_traits.h"],
    deps = [
        ":protobuf_factory",
        ":raw_message",
    ],
)

cpplint()
