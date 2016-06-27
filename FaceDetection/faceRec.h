#ifndef FACEREC_H
#define FACEREC_H
#include "opencv2/core.hpp"
#include "opencv2/face.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <cstdlib>
#include <string>
using namespace std;
using namespace cv;
using namespace cv::face;
class faceRec
{
public:
	faceRec();
	~faceRec();
	bool getImagesAndLabels(Mat image, int label);
	bool train();
	int getPredictedLabel(Mat image);
	bool read_csv(const string& filename);
	bool load_cascade();
	void init();
private:
	vector<Mat> images;
	vector<int> labels;
	Ptr<FaceRecognizer> model;
	int predictedLabel;

};
#endif // FACEREC_H