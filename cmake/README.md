## 准备

下载对应版本的依赖包放在当前文件夹下

| Thirdparty | Version |
| ---------- | ------- |
| gflags     | 2.2.2   |
| eigen      | 3.3.8   |
|            |         |

Version:1.0

Date:2020.12.29

## 编译

使用MDC交叉编译工具，编译完成后头文件及链接库文件在工程的`include`及`lib`文件夹下

## 添加依赖

可按需依照下列步骤添加其他第三方库

1. 下载依赖包放在当前文件夹下

2. 按照以下格式创建`<third_party_name>.cmake`文件

   ```cmake
   include(ExternalProject)
   
   ExternalProject_Add(<third_party_name>
           URL                 "${CMAKE_SOURCE_DIR}/cmake/<third_party_name>-<version>.tar.gz"
           BUILD_COMMAND       "make"
           CMAKE_ARGS
                               "-DCMAKE_C_COMPILER=aarch64-linux-gnu-gcc"
                               "-DCMAKE_CXX_COMPILER=aarch64-linux-gnu-g++"
                               "-DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}"
                               "-DBUILD_SHARED_LIBS=ON"
   )
   ```

3. 在 `CMakeLists.txt`文件中 **添加第三方依赖**  的选项下新增`include(<third_party_name>)`

4. 在 `CMakeLists.txt`文件中  **用户可在此添加链接库**  的选项下，使用到该依赖的模块的`add_dependencies` 及`target_link_libraries`中添加链接库