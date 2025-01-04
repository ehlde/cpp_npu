find_package(OpenCV REQUIRED)

include_directories(
  ${OpenCV_INCLUDE_DIRS}
  ${cpp_npu_SOURCE_DIR}/gemm/include
)


add_library(gemm 
  gemm_cv.cpp
  gemm_npu.cpp
)

target_link_libraries( gemm ${OpenCV_LIBS} )