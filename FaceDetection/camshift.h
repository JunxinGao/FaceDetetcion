#ifndef CAMSHIFT_H
#define CAMSHIFT_H
#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <ctype.h>
using namespace cv;
using namespace std;
class camshift {
public:
	void process(string filename);
};
#endif // CAMSHIFT_H