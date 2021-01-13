load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "leo_common",
    srcs = [
        "leo_gflags.cc",
    ],
    hdrs = [
        "leo_gflags.h",
    ],
    deps = [
        "//external:gflags",
    ],
)

cpplint()
