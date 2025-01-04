find_package(OpenCV REQUIRED)

include_directories(
  ${OpenCV_INCLUDE_DIRS}
  ${cpp_npu_SOURCE_DIR}/runner/include
  ${cpp_npu_SOURCE_DIR}/gemm/include
)

link_directories( ${cpp_npu_SOURCE_DIR}/gemm/src)

add_executable(runner main.cpp)

target_link_libraries( runner ${OpenCV_LIBS} gemm)
