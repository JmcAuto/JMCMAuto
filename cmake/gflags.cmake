include(ExternalProject)

ExternalProject_Add(gflags
        URL                 "${CMAKE_SOURCE_DIR}/cmake/gflags-2.2.2.tar.gz"
        BUILD_COMMAND       "make"
        CMAKE_ARGS
                            "-DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc"
                            "-DCMAKE_CXX_COMPILER=aarch64-linux-gnu-g++"
                            "-DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}"
                            "-DBUILD_SHARED_LIBS=ON"
)
