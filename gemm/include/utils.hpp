#pragma once

#include <opencv2/core.hpp>
#include <random>

namespace gemm
{
namespace utils
{
inline cv::Mat GenerateRandomMat(int rows, int cols, int type)
{
  cv::Mat mat(rows, cols, type);
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(0, 1);

  for (int i = 0; i < mat.rows; ++i)
  {
    for (int j = 0; j < mat.cols; ++j)
    {
      mat.at<float>(i, j) = static_cast<float>(dis(gen));
    }
  }

  return mat;
}
}  // namespace utils
}  // namespace gemm