
cc_library(
    name = "status",
    hdrs = [
        "status.h",
    ],
    deps = [
        "//modules/common/proto:error_code_proto",
        "@com_google_protobuf//:protobuf",
    ],
)

cc_test(
    name = "status_test",
    size = "small",
    srcs = [
        "status_test.cc",
    ],
    deps = [
        ":status",
        "@gtest//:main",
    ],
)

