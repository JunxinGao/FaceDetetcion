#ifndef FACEDETECTION_H
#define FACEDETECTION_H

#include <QMainWindow>
#include <QTime>
#include "option.h"
#include "help.h"
#include "ui_option.h"
#include "ui_help.h"
#include "ui_facedetection.h"
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <qfiledialog.h>
#include <iomanip>
#include <opencv2/video/background_segm.hpp>
#include <sstream>
#include <string>
#include "Histogram1D.h"
#include "faceRec.h"
#include <qinputdialog.h>
#include <qmessagebox.h>
#include <direct.h>
#include<Windows.h>
#include"camshift.h"

class FaceDetection : public QMainWindow
{
	Q_OBJECT

public:
	FaceDetection(QWidget *parent = 0);
	~FaceDetection();
	bool is_origin_detect;
	double scale;
	bool tryflip;
	std::string method;
	bool update_bg_model;
	bool smoothMask;
	bool isbg_sub;
	int thresdhold_value;
	double alpha;
	int beta; 
	bool isAutoAdj1;
	bool nestVisible;
	bool nestLimit;
	bool isAutoAdj2;
	std::vector<std::string> dirNames;
	std::vector<std::string> fileNames;
	std::vector<cv::Mat> images;std::vector<int> labels;
	std::vector<std::string> dirNamesArr;
private:
	
	Ui::FaceDetectionClass ui; 
	Ui::Dialog opui;
	Ui::Dialog_help helpui;
	Help helpDialog;
	Option opdialog;
	cv::Mat img;
	cv::Mat image;
	cv::Mat frame;
	cv::Mat result;
	cv::Mat frame_prc;
	cv::Mat frame_prc1;
	cv::VideoCapture capture;
	QLabel *imageLabel;
	cv::CascadeClassifier cascade;
	cv::CascadeClassifier nestedCascade;
	cv::CascadeClassifier nestedCascade2;
	cv::CascadeClassifier nestedCascade3;
	cv::VideoWriter vw;
	cv::VideoWriter writer;
	cv::VideoWriter tempWriter;
	std::string extension;
	std::string outputFile;
	std::string tempFile;
	QString curFile;
	QStringList files;
	std::vector<std::string> tempFileList;
	bool close_flag;
	bool isMutiFiles;
	cv::Ptr<cv::BackgroundSubtractor> bg_model;
	cv::Mat fgMaskMOG2; //fg mask fg mask generated by MOG2 method
	cv::Ptr<cv::BackgroundSubtractor> pMOG2; //MOG2 Background subtractor
	bool fast_detect;
	std::vector<cv::Rect> temp_faces;
	int count_f;
	bool stop;
	bool revert;
	bool autoisbg_sub;
	bool autoScence;
	std::string st;
	faceRec fRec;
	bool isRec;
	std::string faceDirName;
	int fileCount;
	
private slots:
	
	void file_open();
	void close_left();
	void is_fast_detect();
	void diffAdj();
	void muti_open();
	void cascade_file_load();
	void nestedCascade_file_load();
	void save_dialog();
	void muti_process();
	void stopProcess();
	void img_process();
	void updateImage();
	QImage scaledQimage(QImage src);
	void detectAndDraw(cv::Mat & img);
	std::vector<cv::Rect> getROIRect(std::vector<std::vector<cv::Point>> contours, cv::Mat gray);
	void origin_detect(cv::Mat& img);
	cv::Rect rectScale(cv::Rect r);
	void mosaic(cv::Mat faceOrg);
	void sleep(int msecs);
	double getFrameRate();
	cv::Size getFrameSize();
	long getFrameNumber();
	long getFrameCounts();
	void getTempFile(std::string & str);
	void getCurTempFile(std::string & str);
	bool setOutput(const std::string & filename);
	bool createTemp(double framerate, bool isColor);
	int getCodec(char codec[]);
	std::vector<std::vector<cv::Point>> get_contours(cv::Mat image);
	std::vector<std::vector<cv::Point>> bgfg_segm(cv::Mat &img0);
	void frame_num();
	std::vector<std::vector<cv::Point>> process_contours(std::vector<std::vector<cv::Point>> contours);
	std::vector< std::vector<cv::Point> > find_maxcontours(std::vector<std::vector<cv::Point>> contours);
	void op_dialog();
	void help_dialog();
	std::vector< std::vector<cv::Point> > bg_sub(cv::Mat img);

	cv::Mat contrast_bright(cv::Mat  image);
	void turn_on_rec();
	void turn_off_rec();
	void train_file_open();
	int getPredict(cv::Mat faceOrg);
	void saveFacesDir();
	void camera_save();
	void clearScreen();
	void autoTrain();
	vector<string> get_filelist(char * foldname);
	void wirteTxtFile(vector<string> files);
	void trackCamera();
	void trackVideo();
	void cameraFirst();
	void trackCameraMode();
	void trackVideoMode();
};

#endif // FACEDETECTION_H

