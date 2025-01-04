#pragma once

#include <opencv2/core.hpp>

namespace gemm
{
cv::Mat performGemm(const cv::Mat& A, const cv::Mat& B);
}  // namespace gemm