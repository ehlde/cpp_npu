# include(FetchContent)
# FetchContent_Declare(
#         intel_npu_acceleration_library
#         GIT_REPOSITORY "https://github.com/intel/intel-npu-acceleration-library"
#         GIT_TAG "main"
# )
# FetchContent_MakeAvailable(intel_npu_acceleration_library)

find_package(OpenCV REQUIRED)

include_directories(
  ${OpenCV_INCLUDE_DIRS}
  ${cpp_npu_SOURCE_DIR}/gemm/include
)

add_subdirectory(src)