cmake_minimum_required(VERSION 3.20.0)

# change this to your path
set(CMAKE_TOOLCHAIN_FILE "E:/src/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(demo)

add_executable(${PROJECT_NAME} main.cpp)

# use your prefix paht if the toolchain doesn't work
# set(CMAKE_PREFIX_PATH "E:/src/vcpkg/installed/x64-windows/share")
find_package(fmt CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
