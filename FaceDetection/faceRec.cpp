#include "faceRec.h"

faceRec::faceRec()
{
}

faceRec::~faceRec()
{
}
bool faceRec::getImagesAndLabels(Mat image, int label) {
	images.push_back(image);
	labels.push_back(label);
	return true;
}

bool faceRec::train()
{
	init();
	if (images.size() && labels.size())
	{
		model->train(images, labels);
		model->save("res\\FaceRec.xml");
		return true;
	}
	else
		return false;
}

int faceRec::getPredictedLabel(Mat image)
{
	//model->load("res\\FaceRec.xml");
	predictedLabel = -1;
	predictedLabel = model->predict(image);
	return predictedLabel;
}

bool faceRec::read_csv(const string & filename )
{
	char separator = ';';
	std::ifstream file(filename.c_str(), ifstream::in);
	if (!file) {
		string error_message = "No valid input file was given, please check the given filename.";
		return false;
		CV_Error(Error::StsBadArg, error_message);
	}
	string line, path, classlabel;
	while (getline(file, line)) {
		stringstream liness(line);
		getline(liness, path, separator);
		getline(liness, classlabel);
		if (!path.empty() && !classlabel.empty()) {
			images.push_back(imread(path, 0));
			labels.push_back(atoi(classlabel.c_str()));
		}
	}
	return true;
}

bool faceRec::load_cascade()
{
	init();
	model->load("res\\FaceRec.xml");
	return true; 
}

void faceRec::init()
{
	model = createLBPHFaceRecognizer();
	//model = createEigenFaceRecognizer();
	//model = createFisherFaceRecognizer();
}
