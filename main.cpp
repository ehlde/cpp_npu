#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("example.jpg");
    if (image.empty()) {
        std::cerr << "Could not open or find the image" << std::endl;
        return -1;
    }
    cv::imshow("Display window", image);
    cv::waitKey(0);
    return 0;
}
