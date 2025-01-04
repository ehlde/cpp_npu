#include "gemm_cv.hpp"

namespace gemm
{
cv::Mat performGemm(const cv::Mat& A, const cv::Mat& B)
{
  if (A.cols != B.rows)
  {
    throw std::invalid_argument(
        "Matrix dimensions do not match for multiplication");
  }
  cv::Mat C;
  cv::gemm(A, B, 1.0, cv::Mat(), 0.0, C);
  return C;
}
}  // namespace gemm