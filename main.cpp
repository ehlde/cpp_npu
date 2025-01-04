#include <opencv2/opencv.hpp>

int main() {
  std::cout << "Hello, World!" << std::endl;
  auto mat = cv::Mat(1337, 1337, CV_8UC1);
  mat.setTo(cv::Scalar(0));

  return 0;
}
