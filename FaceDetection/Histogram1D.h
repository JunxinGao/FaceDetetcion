#ifndef HISTOGRAM1D_H
#define HISTOGRAM1D_H
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
class Histogram1D
{
public:
	Histogram1D();
	~Histogram1D();

	cv::Mat getHistogram(cv::Mat & image);

	cv::Mat getHistogramImage(cv::Mat & image);

private:
	int histSize[1];
	float hranges[2];
	const float* ranges[1];
	int channels[1];

};
#endif // HISTOGRAM1D_H