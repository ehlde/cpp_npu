cmake_minimum_required(VERSION 3.10)
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
project(OpenCVExample)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(OpenCVExample main.cpp)

target_link_libraries(OpenCVExample ${OpenCV_LIBS})
target_include_directories(OpenCVExample PRIVATE ${OpenCV_INCLUDE_DIRS})
