include(ExternalProject)

ExternalProject_Add(glog
        URL                 "${CMAKE_SOURCE_DIR}/cmake/glog-0.3.5.tar.gz"
        BUILD_COMMAND       "make"
        CMAKE_ARGS
                            "-DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc"
                            "-DCMAKE_CXX_COMPILER=aarch64-linux-gnu-g++"
                            "-DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}"
                            "-DBUILD_SHARED_LIBS=ON"
)
