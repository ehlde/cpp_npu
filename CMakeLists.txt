cmake_minimum_required(VERSION 3.10)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")
project(OpenCVExample)

find_package(OpenCV REQUIRED)

add_executable(OpenCVExample main.cpp)

target_link_libraries(OpenCVExample ${OpenCV_LIBS})
