#include <iostream>

#include "gemm_cv.hpp"
#include "utils.hpp"

void compareMatmul()
{
  const auto A = gemm::utils::GenerateRandomMat(1000, 1000, CV_32F);
  const auto B = gemm::utils::GenerateRandomMat(1000, 1000, CV_32F);

  // Start time.
  const auto start = std::chrono::high_resolution_clock::now();

  // Perform matrix multiplication.
  const auto C = gemm::performGemm(A, B);

  // End time.
  const auto end = std::chrono::high_resolution_clock::now();

  // Calculate the duration.
  const auto duration =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

  std::cout << "OpenCV-version: " << duration.count() << " ms." << std::endl;
}

int main()
{
  compareMatmul();
  return 0;
}
