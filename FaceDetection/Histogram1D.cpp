#include"Histogram1D.h"
Histogram1D::Histogram1D()
{
	histSize[0] = 256;
	hranges[0] = 0.0;
	hranges[1] = 255.0;
	ranges[0] = hranges;
	channels[0] = 0;
}

Histogram1D::~Histogram1D()
{
}
cv::Mat Histogram1D::getHistogram(cv::Mat &image) {
	cv::MatND hist;
	cv::calcHist(&image, 1, channels, cv::Mat(), hist, 1, histSize, ranges);
	return hist;
}
cv::Mat  Histogram1D::getHistogramImage(cv::Mat &image) {
	cv::MatND hist = getHistogram(image);
	double maxVal = 0; double minVal = 0;
	cv::minMaxLoc(hist, &minVal, &maxVal, 0, 0);
	cv::Mat histImg(256, 256, CV_8U, cv::Scalar(255));
	int hpt = static_cast<int>(0.9 * 256);
	for (int h = 0; h < 256; h++) {
		float binVal = hist.at<float>(h);
		int intensity = static_cast<int>(binVal*hpt / maxVal);
		cv::line(histImg, cv::Point(h, 256), cvPoint(h, 256 - intensity), cv::Scalar::all(0));
	}
	return histImg;
}