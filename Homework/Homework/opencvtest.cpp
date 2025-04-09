#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
	std::cout << "OpenCV Version: " << CV_VERSION;
	cv::Mat img = cv::imread("Lenna.png", cv::IMREAD_GRAYSCALE);
	cv::imshow("lennawindow", img);
	cv::waitKey(0);
}