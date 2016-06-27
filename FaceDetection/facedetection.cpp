#include "facedetection.h"
#include <opencv2/core/core.hpp>
#include <QtWidgets/qlabel.h>
#include <opencv2/highgui/highgui.hpp>
#include <QTextCodec>

FaceDetection::FaceDetection(QWidget *parent)
	: QMainWindow(parent)
	, extension(".avi")
	, close_flag(true)
	, method("mog2")
	, smoothMask(true)
	, update_bg_model(true)
	, pMOG2(cv::createBackgroundSubtractorMOG2())
	, isbg_sub(false)
	, bg_model (method == "knn" ?cv::createBackgroundSubtractorKNN().dynamicCast<cv::BackgroundSubtractor>():cv::createBackgroundSubtractorMOG2().dynamicCast<cv::BackgroundSubtractor>())
	, fast_detect(false)
	, count_f(7)
	, is_origin_detect(true)
	, scale(1)
	, tryflip(false)
	, isMutiFiles(false)
	, thresdhold_value(0)
	, stop(false)
	, revert(false)
	, isAutoAdj1(false)
	, nestVisible(false)
	, nestLimit(false)
	, isAutoAdj2(false)
	, autoScence(false)
	, isRec(false)
	, fileCount(0)
{
	cascade.load("res/face.xml");
	nestedCascade.load("res/nose.xml");
	nestedCascade2.load("res/eye.xml");
	nestedCascade3.load("res/mouth.xml");
	ui.setupUi(this);this->resize(964, 435);
	ui.bt_stop->hide();
	ui.label_src->setScaledContents(true);
	ui.label_out->setScaledContents(true);
	connect(ui.bt_close, SIGNAL(clicked()), this, SLOT(close_left()));
	connect(ui.bt_open, SIGNAL(clicked()), this, SLOT(file_open()));
	connect(ui.bt_process, SIGNAL(clicked()), this, SLOT(img_process()));
	connect(ui.bt_stop, SIGNAL(clicked()), this, SLOT(stopProcess()));
//	connect(ui.bt_fast_dt, SIGNAL(clicked()), this, SLOT(is_fast_detect()));
	connect(ui.actionLoad_cascade_File, SIGNAL(triggered()), this, SLOT(cascade_file_load()));
	connect(ui.actionLoad_nestedCascade_File, SIGNAL(triggered()), this, SLOT(nestedCascade_file_load()));
	connect(ui.actionTurn_on_recognition, SIGNAL(triggered()), this, SLOT(turn_on_rec()));
	connect(ui.actionTurn_off_recognition, SIGNAL(triggered()), this, SLOT(turn_off_rec()));
	connect(ui.actionImages_Train, SIGNAL(triggered()), this, SLOT(train_file_open()));
	connect(ui.actionVideo_Trainn, SIGNAL(triggered()), this, SLOT(saveFacesDir()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(save_dialog()));
	connect(ui.actionHelp, SIGNAL(triggered()), this, SLOT(help_dialog()));
	connect(ui.actionOpen_muti_files, SIGNAL(triggered()), this, SLOT(muti_open()));
	connect(ui.actionCamera_Train, SIGNAL(triggered()), this, SLOT(camera_save()));
	connect(ui.bt_fast_dt, SIGNAL(clicked()), this, SLOT(op_dialog()));
	connect(ui.actionClear_Screen, SIGNAL(triggered()), this, SLOT(clearScreen()));
	connect(ui.actionCamera, SIGNAL(triggered()), this, SLOT(cameraFirst()));
	connect(ui.actionCamera_Mode, SIGNAL(triggered()), this, SLOT(trackCameraMode()));
	connect(ui.actionVideo_Mode, SIGNAL(triggered()), this, SLOT(trackVideoMode()));
	connect(ui.actionAuto_Images_Train, SIGNAL(triggered()), this, SLOT(autoTrain()));
	//ui.widget_2->resize();
}

FaceDetection::~FaceDetection()
{
	
}

void FaceDetection::op_dialog()
{	
	//stopProcess();
	opdialog.show();
	opdialog.exec();
}
void FaceDetection::help_dialog() {
	//stopProcess();
	helpDialog.show();
	helpDialog.exec();
}
void FaceDetection::close_left() {
	if (close_flag)
	{
		ui.widget_1->hide(); close_flag = false; ui.widget_2->hide();  ui.widget_2->show(); this->resize(484, 435);
	}
	else
	{
		ui.widget_1->show(); close_flag = true; this->resize(964, 435);
	}
	this->update();
}
/*
	已弃用
*/
void FaceDetection::is_fast_detect() {
	/*if (fast_detect)
		fast_detect = false;
	else
		fast_detect = true;*/
}
/*
	打开文件时自动判断是是否是摄像头场景和情景判断
 */
void FaceDetection::diffAdj() {
	cv::Mat adjImg1, adjImg2, dst;
	int t1 = 3; int t2 = 10;
	while(t1--)
	capture >> adjImg1;
	while(t2--)
	capture >> adjImg2;
	cv::Mat adj1, adj2;
	cv::cvtColor(adjImg1, adj1, cv::COLOR_BGR2GRAY);
	cv::cvtColor(adjImg2, adj2, cv::COLOR_BGR2GRAY);
	dst = adj1.clone();
	cv::absdiff(adj1, adj2, dst);
	//cv::imshow("diff", dst);
	Histogram1D h; cv::MatND histo = h.getHistogram(dst); cv::Mat histImg = h.getHistogramImage(dst);
	float per; per = histo.at<float>(1) / (adj1.rows*adj1.cols) * 100;
	
		if (per > 15)
			autoisbg_sub = true;
		else
			autoisbg_sub = false;
		if (per > 35)
		{
			autoScence = true; opdialog.is_modup = false;
		}
		else
		{
			autoScence = false; opdialog.is_modup = true;
		}
		std::stringstream ss; st = "";  ss << per; st = ss.str(); st += "% ";
	isAutoAdj1 = opdialog.isAutoAdj1; isAutoAdj2 = opdialog.isAutoAdj2;
	if(isAutoAdj1||isAutoAdj2)
	ui.label->setText(st.c_str());
	//putText(histImg, st.c_str(), cv::Point(15, 15), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 0));cv::imshow("Histogram", histImg);
}


void FaceDetection::file_open()
{
	writer.release();
	capture.release();
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Video"), ".", tr("Video Files(*.avi *.wmv *.mov *.mpeg *.mp4)"));
	files.push_back(fileName);
	if (fileName != NULL)
	{
		QTextCodec *code = QTextCodec::codecForName("gb2312");
		std::string name = code->fromUnicode(fileName).data();
	//capture.open(fileName.toLatin1().data());
		capture.open(name);
	updateImage();
	curFile = fileName;
	long num;
	num = getFrameCounts();
	ui.progressBar->setRange(0, num);
	ui.progressBar->setValue(1);
	isMutiFiles = false;
	diffAdj();
	capture.release();
	capture.open(name);
	}
	
}
void FaceDetection::muti_open()
{
	 writer.release();
	 capture.release();
	 
	 files = QFileDialog::getOpenFileNames(this, tr("Open Video"), ".", tr("Video Files(*.avi *.wmv *.mov *.mpeg *.mp4)"));
	
	 if (files.size()!=0)
	 {	QString fileName = files[0];
		 QTextCodec *code = QTextCodec::codecForName("gb2312");
		 std::string name = code->fromUnicode(fileName).data();
		// capture.open(fileName.toLatin1().data());
		 capture.open(name);
		 updateImage();
		 stopProcess();revert = false;
		 curFile = fileName;
		 long num;
		 num = getFrameCounts();
		 ui.progressBar->setRange(0, num);
		 ui.progressBar->setValue(1);
		 isMutiFiles = true;
		 diffAdj();
	 }
}
void FaceDetection::cascade_file_load()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open xml file"), ".", tr("Xml Files(*.xml)"));
	QTextCodec *code = QTextCodec::codecForName("gb2312");
	std::string name = code->fromUnicode(fileName).data();
	//if (fileName != NULL)cascade.load(fileName.toLatin1().data());
	if (fileName != NULL)cascade.load(name);
	//if (cascade.load(fileName.toLatin1().data())) { sprintf("--(!) loading face cascade\n"); };
}
void FaceDetection::nestedCascade_file_load()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open xml file"), ".", tr("Xml Files(*.xml)"));
	QTextCodec *code = QTextCodec::codecForName("gb2312");
	std::string name = code->fromUnicode(fileName).data();
	//if (fileName != NULL)nestedCascade.load(fileName.toLatin1().data());
	if (fileName != NULL)nestedCascade.load(name);
	//if (!cascade.load(fileName.toLatin1().data())) { printf("--(!)Error loading face cascade\n"); };
}
void FaceDetection::save_dialog()
{
	QString fileName = QFileDialog::getSaveFileName(this,tr("Save video")); 
	setOutput(QFileInfo(fileName).filePath().toStdString());

}
void FaceDetection:: muti_process()
{
	writer.release();
	capture.release();
	revert = false;
	for (int i = 0; i < files.size();i++)
	{
		
			QString fileName = files[i];
			QTextCodec *code = QTextCodec::codecForName("gb2312");
			std::string name = code->fromUnicode(fileName).data();
			//capture.open(fileName.toLatin1().data());
			capture.open(name);
			QString outName;
			outName = QFileInfo(fileName).path();
			outName += "/out_";
			outName += QFileInfo(fileName).fileName();
			if (!writer.isOpened())
				setOutput(QFileInfo(outName).filePath().toStdString());
			curFile = fileName;
			updateImage();
			long num;
			num = getFrameCounts();
			ui.progressBar->setRange(0, num);
		
		while(true)
		{
			if (frame.empty())
				break;
			long num = getFrameNumber();
			ui.progressBar->setValue(num+1);
			FaceDetection::updateImage();
			double r = 1000 / getFrameRate();
			if (!stop)
				sleep(r);
			else
			{
				while(stop)
					sleep(100);
			}
		}
		if (!stop)
		{
			writer.release();
			capture.release();
		}
	}
	stopProcess();
}
/*
	暂停处理进程
*/

void FaceDetection::stopProcess() {
	
	stop = true; ui.bt_stop->hide(); ui.bt_process->show(); revert = true;
	
}
void FaceDetection::img_process()
{
	if (capture.isOpened())
	{
		stop = false;
		ui.bt_process->hide(); ui.bt_stop->show();
		if (isMutiFiles&&!revert)
			muti_process();
		else if(!isMutiFiles)
		{
			while (!stop)
			{
				if (frame.empty())
					break;
				//cv::imshow("test", frame);
				long num = getFrameNumber();
				ui.progressBar->setValue(num + 1);
				FaceDetection::updateImage();
				double r = 1000 / getFrameRate();
				sleep(r);
			}
			if (!stop)
			{
				writer.release();
				capture.release();
				stopProcess();
			}
		}
	}
	
	
	
}

void FaceDetection::updateImage()
{
	capture >> frame; 
	if (frame.data)
	{
		frame_prc = frame.clone();
		frame_prc1 = frame.clone();
		cv::cvtColor(frame_prc1, frame_prc1, CV_BGR2RGB);
		QImage img1 = QImage((const unsigned char*)(frame_prc1.data), frame_prc1.cols, frame_prc1.rows, QImage::Format_RGB888);
		QImage imgScaled1 = scaledQimage(img1);
		ui.label_src->setPixmap(QPixmap::fromImage(imgScaled1));
		//ui.label_src->resize(ui.widget_1->size());
		ui.label_src->show();
		frame_prc = contrast_bright(frame);
		if (!cascade.empty())
		{
			isAutoAdj1 = opdialog.isAutoAdj1;
			if (isAutoAdj1)
			{
				is_origin_detect = !autoisbg_sub;
				ui.label->setText(st.c_str());
			}
			else
			{
				is_origin_detect = opdialog.is_origin; ui.label->setText("");
			}
			if (isAutoAdj2)
				ui.label->setText(st.c_str());
			if (is_origin_detect)
			{
				origin_detect(frame_prc);// opui.slider_scale->setEnabled(true);
			}
			else
			{
				detectAndDraw(frame_prc);// opui.slider_scale->setDisabled(true);
			}
		}
		
		if(writer.isOpened())
		writer.write(frame_prc);
		
		ui.label_out->show();
		cv::cvtColor(frame_prc, frame_prc, CV_BGR2RGB);
		QImage img2 = QImage((const unsigned char*)(frame_prc.data), frame_prc.cols, frame_prc.rows, QImage::Format_RGB888);
		//img2.scaled(ui.widget_2->size(), Qt::KeepAspectRatio);
		QImage imgScaled2 = scaledQimage(img2);
		ui.label_out->setPixmap(QPixmap::fromImage(imgScaled2));
	}
}
/*
	原视频进行缩放，防止原视频太大显示器分辨率右太低
*/
QImage FaceDetection::scaledQimage(QImage src) {
	QImage imgScaled;
	imgScaled = src.scaled(480, 360, Qt::KeepAspectRatio);
	return imgScaled;
}
/*
	使用情景检测的人脸检测方法
 */
void FaceDetection::detectAndDraw(cv::Mat& img)
{
	double t = 0;
	std::vector<cv::Rect> faces, faces2;
	const static cv::Scalar colors[] =
	{
		cv::Scalar(255,0,0),
		cv::Scalar(255,128,0),
		cv::Scalar(255,255,0),
		cv::Scalar(0,255,0),
		cv::Scalar(0,128,255),
		cv::Scalar(0,255,255),
		cv::Scalar(0,0,255),
		cv::Scalar(255,0,255)
	};
	cv::Mat gray, smallImg;
	cv::Mat img_t = img.clone();
	cvtColor(img, gray, cv::COLOR_BGR2GRAY);
	scale = opdialog.scale;
	double fx = 1 / scale;
	cv::resize(gray, smallImg, cv::Size(), fx, fx, cv::INTER_LINEAR);
	//cv::imshow("before", smallImg);
	equalizeHist(smallImg, smallImg);
	cv::Mat smallimg = smallImg.clone();
	//cv::imshow("after", smallImg);
	std::vector< std::vector<cv::Point> > contours;
	//isbg_sub = opdialog.is_bgsub;
	isAutoAdj2 = opdialog.isAutoAdj2;
	if (isAutoAdj2)
	{
		isbg_sub = autoScence; ui.label->setText(st.c_str());
	}
	else
	{
		isbg_sub = opdialog.is_bgsub; ui.label->setText("");
	}
	if (isAutoAdj1)
		ui.label->setText(st.c_str());
	if(isbg_sub)
		 contours = bg_sub(smallImg);
	else 
		 contours=bgfg_segm(smallImg);
	std::vector< std::vector<cv::Point> > contours1= find_maxcontours(contours);
	//std::vector< std::vector<cv::Point> > contours1 = process_contours(contours);
	std::vector<cv::Rect> rects = getROIRect(contours1,gray);
	//cv::Mat prect(img.size(), CV_8U, cv::Scalar(255));
	//for (int i = 0; i < rects.size(); i++)
	//{
	//	cv::rectangle(prect, rects[i], cv::Scalar(0), -1);
	//}
	//cv::Rect trt; trt.x = 1; trt.y = 1; trt.width = img.cols-1; trt.height = img.rows-1;
	//cv::rectangle(prect, trt, cv::Scalar(255), 4);
	////cv::imshow("prect", prect);
	//std::vector< std::vector<cv::Point> > result0; cv::findContours(prect, result0, CV_RETR_CCOMP, CV_CHAIN_APPROX_NONE);
	////cv::Mat outrect(img.size(), CV_8U, cv::Scalar(255)); cv::drawContours(outrect, result0, -1, cv::Scalar(0), 2);cv::imshow("outrect", outrect);
	//std::vector<cv::Rect> rect0 = getROIRect(result0, img);
	if (rects.size() == 0) origin_detect(img);
	//std::vector< std::vector<cv::Point> >  temp=process_contours(contours);
	else {
		//equalizeHist(smallImg, smallImg);
		t = (double)cvGetTickCount();
		for (std::vector<cv::Rect>::iterator it = rects.begin(); it != rects.end(); it++)
		{
			cv::Rect rr = *it;
			
			cv::Mat faceROI = smallImg(rr);
			cv::Mat faceROI_t = img(rr);
			//cv::Mat faceROI_t = faceROI.clone();
			//cv::imshow("faceROI", faceROI_t);
			//	cv::rectangle(img, rr, cv::Scalar(0), 2);
			
			cascade.detectMultiScale(faceROI, faces,
				1.1, 3, 0
				//|CASCADE_FIND_BIGGEST_OBJECT
				//|CASCADE_DO_ROUGH_SEARCH
				| cv::CASCADE_SCALE_IMAGE,
				cv::Size(40, 40));
			
			tryflip = opdialog.tryflip;
			if (tryflip)
			{
				flip(faceROI, faceROI, 1);
				cascade.detectMultiScale(faceROI, faces2,
					1.1, 2, 0
					//|CASCADE_FIND_BIGGEST_OBJECT
					//|CASCADE_DO_ROUGH_SEARCH
					| cv::CASCADE_SCALE_IMAGE,
					cv::Size(30, 30));
				for (std::vector<cv::Rect>::const_iterator r = faces2.begin(); r != faces2.end(); r++)
				{

					faces.push_back(cv::Rect(faceROI.cols - r->x - r->width, r->y, r->width, r->height));
					//cv::rectangle(img, faces.back(), cv::Scalar(0), 2);
				}
			}
			if (faces.size() != 0)
			{
				temp_faces.clear();
				temp_faces.assign(faces.begin(), faces.end());
			}
			for (size_t i = 0; i < faces.size(); i++)
			{
				cv::Rect r = faces[i];
				//cv::rectangle(faceROI_t, r, cv::Scalar(0), 2);
				cv::Rect rr = rectScale(r);
				cv::Mat faceOrg = faceROI_t(rr);
				//cv::Mat faceOrg1 = faceROI(faces[i]);
				//cv::imshow("face", faceOrg);
				
				cv::Mat smallImgROI;
				std::vector<cv::Rect> nestedObjects;
				std::vector<cv::Rect> nestedObjects2;
				std::vector<cv::Rect> nestedObjects3;
				cv::Point center;
				cv::Scalar color = colors[i % 8];
				int radius;
				if (!nestedCascade.empty())
				{
					smallImgROI = faceROI(r);
					nestedCascade.detectMultiScale(smallImgROI, nestedObjects,
						1.13, 3, 0
						//|CASCADE_FIND_BIGGEST_OBJECT
						//|CASCADE_DO_ROUGH_SEARCH
						//|CASCADE_DO_CANNY_PRUNING
						| cv::CASCADE_SCALE_IMAGE,
						cv::Size(10, 10));
					nestVisible = opdialog.nestVisible;
					
				}
				if (!nestedCascade2.empty())
				{
					nestedCascade2.detectMultiScale(smallImgROI, nestedObjects2,
						1.13, 3, 0
						//|CASCADE_FIND_BIGGEST_OBJECT
						//|CASCADE_DO_ROUGH_SEARCH
						//|CASCADE_DO_CANNY_PRUNING
						| cv::CASCADE_SCALE_IMAGE,
						cv::Size(10, 10));
				}
				if (!nestedCascade3.empty())
				{
					nestedCascade2.detectMultiScale(smallImgROI, nestedObjects3,
						1.13, 3, 0| cv::CASCADE_SCALE_IMAGE,cv::Size(10, 20));
				}
				nestLimit = opdialog.nestLimit;
				if (nestLimit)
				{
					if (nestedObjects.size() || nestedObjects2.size() || nestedObjects3.size())
						mosaic(faceOrg);
				}
				else
					mosaic(faceOrg);
				if (nestVisible&&!nestedCascade.empty())
					for (size_t j = 0; j < nestedObjects.size(); j++)
					{
						cv::Rect nr = nestedObjects[j];
						center.x = cvRound((r.x + nr.x + nr.width*0.5)*scale);
						center.y = cvRound((r.y + nr.y + nr.height*0.5)*scale);
						radius = cvRound((nr.width + nr.height)*0.25*scale);
						circle(faceOrg, center, radius, color, 3, 8, 0);
			
						
					}

			}
		}
		t = (double)cvGetTickCount() - t;
		std::string st = "Detection Time: ";
		std::stringstream ss;
		ss << (t / ((double)cvGetTickFrequency()*1000.));
		st += ss.str();
		st += " ms";
		ui.label_rate->setText(st.c_str());
	}
	
	//if (faces.size() == 0)origin_detect(img);
	
}
/*
	进行指定区域检测矩形的筛选
*/
std::vector<cv::Rect> FaceDetection::getROIRect(std::vector< std::vector<cv::Point> > contours,cv::Mat gray)
{
	//cv::Mat result1(img.size(), CV_8U, cv::Scalar(255));
	std::vector<cv::Rect> rects; double ctmx = cv::contourArea(contours[0]);
	for (std::vector< std::vector<cv::Point> >::iterator it = contours.begin(); it != contours.end(); it++)
	{
		if (cv::contourArea(*it)>ctmx)
		{
			ctmx = cv::contourArea(*it);
		}
		cv::Rect rr = cv::boundingRect(cv::Mat(*it));
		if (rr.width<40 || rr.height<40)
			continue;
		if (cv::contourArea(*it)>(gray.cols*gray.rows*8/9))
			continue;
		rects.push_back(rr);
		//cv::rectangle(result1, rr, cv::Scalar(0), 2);
	}
	//cv::imshow("result1", result1);
	return rects;
}
/*
	原始人脸检测方法
*/
void FaceDetection::origin_detect(cv::Mat& img) {
	double t = 0;
	std::vector<cv::Rect> faces, faces2;
	const static cv::Scalar colors[] =
	{
		cv::Scalar(255,0,0),
		cv::Scalar(255,128,0),
		cv::Scalar(255,255,0),
		cv::Scalar(0,255,0),
		cv::Scalar(0,128,255),
		cv::Scalar(0,255,255),
		cv::Scalar(0,0,255),
		cv::Scalar(255,0,255)
	};
	cv::Mat gray, smallImg;

	cvtColor(img, gray, cv::COLOR_BGR2GRAY);
	scale = opdialog.scale;
	double fx = 1 / scale;
	cv::resize(gray, smallImg, cv::Size(), fx, fx, cv::INTER_LINEAR);
	//cv::imshow("before", smallImg);
	equalizeHist(smallImg, smallImg);
	//cv::imshow("after", smallImg);

	t = (double)cvGetTickCount();
	cascade.detectMultiScale(smallImg, faces,
		1.1, 3, 0
		//|CASCADE_FIND_BIGGEST_OBJECT
		//|CASCADE_DO_ROUGH_SEARCH
		| cv::CASCADE_SCALE_IMAGE,
		cv::Size(40, 40));
	tryflip = opdialog.tryflip;
	if (tryflip)
	{
		flip(smallImg, smallImg, 1);
		cascade.detectMultiScale(smallImg, faces2,
			1.1, 2, 0
			//|CASCADE_FIND_BIGGEST_OBJECT
			//|CASCADE_DO_ROUGH_SEARCH
			| cv::CASCADE_SCALE_IMAGE,
			cv::Size(30, 30));
		for (std::vector<cv::Rect>::const_iterator r = faces2.begin(); r != faces2.end(); r++)
		{
			faces.push_back(cv::Rect(smallImg.cols - r->x - r->width, r->y, r->width, r->height));
		}
	}
	t = (double)cvGetTickCount() - t;
	std::string st = "Detection Time: ";
	std::stringstream ss;
	ss << (t / ((double)cvGetTickFrequency()*1000.));
	st += ss.str();
	st += " ms";
	ui.label_rate->setText(st.c_str());
	frame_num();
	//printf("detection time = %g ms\n", t / ((double)cvGetTickFrequency()*1000.));
	for (size_t i = 0; i < faces.size(); i++)
	{
		cv::Rect r = faces[i];
		cv::Mat smallImgROI;
		std::vector<cv::Rect> nestedObjects;
		std::vector<cv::Rect> nestedObjects2;
		std::vector<cv::Rect> nestedObjects3;
		cv::Point center;
		cv::Scalar color = colors[i % 8];
		int radius;
		cv::Rect rr = rectScale(r);
		cv::Mat faceOrg = img(rr);
		
		if (!nestedCascade.empty())
		{
			smallImgROI = smallImg(r);
			nestedCascade.detectMultiScale(smallImgROI, nestedObjects,
				1.13, 3, 0
				//|CASCADE_FIND_BIGGEST_OBJECT
				//|CASCADE_DO_ROUGH_SEARCH
				//|CASCADE_DO_CANNY_PRUNING
				| cv::CASCADE_SCALE_IMAGE,
				cv::Size(10, 10));
			nestVisible = opdialog.nestVisible;
			
		}
		if (!nestedCascade2.empty())
		{
			nestedCascade2.detectMultiScale(smallImgROI, nestedObjects2,
				1.13, 3, 0
				//|CASCADE_FIND_BIGGEST_OBJECT
				//|CASCADE_DO_ROUGH_SEARCH
				//|CASCADE_DO_CANNY_PRUNING
				| cv::CASCADE_SCALE_IMAGE,
				cv::Size(10, 10));
		}
		if (!nestedCascade3.empty())
		{
			nestedCascade2.detectMultiScale(smallImgROI, nestedObjects3,
				1.13, 3, 0
				//|CASCADE_FIND_BIGGEST_OBJECT
				//|CASCADE_DO_ROUGH_SEARCH
				//|CASCADE_DO_CANNY_PRUNING
				| cv::CASCADE_SCALE_IMAGE,
				cv::Size(10, 20));
		}
		
		if (isRec&&(nestedObjects.size() || nestedObjects2.size() || nestedObjects3.size())) {
		int preLable = getPredict(faceOrg);
		std::string textStr;
		if (preLable == -1 || preLable == 0||preLable>dirNamesArr.size())
			textStr = "Uknown";
		else
			textStr = dirNamesArr[preLable-1];
			putText(img, textStr.c_str(), cv::Point(rr.x + 6, rr.y + rr.height + 15), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(0, 255, 0), 2);
		}
		if (faceDirName != "")
		{
			fileCount++;
			
			std::stringstream ss;
			ss << fileCount;
			std::string toStr = ss.str();
			cv::Mat ggray;
			cvtColor(faceOrg, ggray, cv::COLOR_BGR2GRAY);
			if (nestedObjects.size() || nestedObjects2.size() || nestedObjects3.size())
			cv::imwrite("res\\TrainImages\\" + faceDirName + "\\" + toStr + ".jpg", ggray);
		}
		nestLimit = opdialog.nestLimit;
		if (isRec) {
			cv::rectangle(img, rr, color, 2);
			int preLable = getPredict(faceOrg);
			std::string textStr;
			if (preLable == -1 || preLable == 0 || preLable>dirNamesArr.size())
				textStr = "Uknown";
			else
				textStr = dirNamesArr[preLable - 1];
			putText(img, textStr.c_str(), cv::Point(rr.x + 6, rr.y + rr.height + 15), cv::FONT_HERSHEY_SIMPLEX, 0.8, cv::Scalar(0, 255, 0), 2);
		}
		else
		{
				if (nestLimit) {
					if (nestedObjects.size() || nestedObjects2.size() || nestedObjects3.size())
						mosaic(faceOrg);
		}
					else
					mosaic(faceOrg);
		}
		
		
		if (nestVisible&&!nestedCascade.empty())
			for (size_t j = 0; j < nestedObjects.size(); j++)
			{
				cv::Rect nr = nestedObjects[j];
				center.x = cvRound((r.x + nr.x + nr.width*0.5)*scale);
				center.y = cvRound((r.y + nr.y + nr.height*0.5)*scale);
				radius = cvRound((nr.width + nr.height)*0.25*scale);
				circle(img, center, radius, color, 3, 8, 0);
			}
		
	}
}

/*
	根据原先帧的缩放值进行要处理区域的缩放
*/
cv::Rect FaceDetection::rectScale(cv::Rect r) {
	cv::Rect rr; scale = opdialog.scale;
	rr.x = r.x*scale; rr.y = r.y*scale;
	rr.width = r.width*scale; rr.height = r.height*scale;
	return rr;
}
void FaceDetection::mosaic(cv::Mat faceOrg)
{
	int W = 6;
	int H = 6;
	int tScale = frame.rows / 240;
	W *= tScale;
	H *= tScale;
	for (int mi = W; mi<faceOrg.cols; mi += W)
		for (int mj = H; mj<faceOrg.rows; mj += H)
		{
			//Vec3b tmp = faceOrg.at<cv::Vec3b>(mj - H / 2, mi - W / 2);
			cv::Vec3b *tmp = faceOrg.ptr<cv::Vec3b>(mj - H / 2, mi - W / 2);
			for (int mx = mi - W; mx <= mi; mx++)
			{
				cv::Vec3b *data = faceOrg.ptr<cv::Vec3b>(mx);
				for (int my = mj - H; my <= mj; my++)
					//faceOrg.at<cv::Vec3b>(my, mx) = tmp;
					data[my] = *tmp;
			}

		}
	
}
/*
	延时程序
*/
void FaceDetection::sleep(int msecs)
{
	QTime dieTime = QTime::currentTime().addMSecs(msecs);
	while (QTime::currentTime() < dieTime)
		QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
double FaceDetection::getFrameRate()
{
	if (files.size() == 0)
		return 11;
	double r = capture.get(CV_CAP_PROP_FPS);

	return r;
}

cv::Size FaceDetection::getFrameSize()
{
	if (files.size() == 0)
		return cv::Size(frame.cols, frame.rows);
	int w = static_cast<int>(capture.get(CV_CAP_PROP_FRAME_WIDTH));
	int h = static_cast<int>(capture.get(CV_CAP_PROP_FRAME_HEIGHT));

	return cv::Size(w, h);
}


long FaceDetection::getFrameNumber()
{
	long f = static_cast<long>(capture.get(CV_CAP_PROP_POS_FRAMES));

	return f;
}
long FaceDetection::getFrameCounts()
{
	long f = static_cast<long>(capture.get(CV_CAP_PROP_FRAME_COUNT));
	return f;
}
/*
	暂时没使用
*/
void FaceDetection::getTempFile(std::string &str)
{
	if (!tempFileList.empty()) {
		str = tempFileList.back();
		tempFileList.pop_back();
	}
	else {
		str = "";
	}
}
/*
	未使用
*/
void FaceDetection::getCurTempFile(std::string &str)
{
	str = tempFile;
}
/*
	输出视频设置
*/
bool FaceDetection::setOutput(const std::string &filename)
{
	outputFile = filename;
	extension.clear();

	
	double	framerate = getFrameRate(); // same as input

	char c[4];
	// use same codec as input
	
	int	codec = getCodec(c);
	
	int isColor = (int)capture.get(CV_CAP_PROP_FRAME_HEIGHT);
	return writer.open(outputFile,codec,framerate,getFrameSize(),isColor);     
}
/*
	未使用
*/
bool FaceDetection::createTemp(double framerate, bool isColor)
{
	std::stringstream ss;
	ss << "temp_" << QDateTime::currentDateTime().toTime_t() << ".avi";
	tempFile = ss.str();

	tempFileList.push_back(tempFile);

	if (framerate == 0.0)
		framerate = getFrameRate();

	return tempWriter.open(tempFile,CV_FOURCC('M', 'J', 'P', 'G'),framerate,    getFrameSize(), isColor);     
}
/*
	获取原视频的编码
*/
int FaceDetection::getCodec(char codec[])
{
	if (files.size() == 0)
		return -1;
	union {
		int value;
		char code[4];
	} returned;

	returned.value = static_cast<int>(capture.get(CV_CAP_PROP_FOURCC));

	codec[0] = returned.code[0];
	codec[1] = returned.code[1];
	codec[2] = returned.code[2];
	codec[3] = returned.code[3];

	return returned.value;
}

std::vector< std::vector<cv::Point> > FaceDetection::get_contours(cv::Mat image) {
	std::vector< std::vector<cv::Point> > contours;
	cv::findContours(image, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
	return contours;

}

/*
	运用高斯建模提取前景
*/
std::vector< std::vector<cv::Point> > FaceDetection::bgfg_segm(cv::Mat &img0)
{
	std::vector< std::vector<cv::Point> > contours;
	//cv::Ptr<cv::BackgroundSubtractor> 
	cv::Mat fgmask, fgimg, result;
	//if (!img0.empty())
	//cv::resize(img0, img, cv::Size(640, 640 * img0.rows / img0.cols), cv::INTER_LINEAR);
	double fx = 1;
	cv::resize(img0, img, cv::Size(),fx,fx, cv::INTER_LINEAR);
	if (fgimg.empty())
		fgimg.create(img.size(), img.type());
	//update the model
	/*if (opdialog.method)
		method = "mog2";
	else
		method = "knn";
	bg_model = (method == "knn" ? cv::createBackgroundSubtractorKNN().dynamicCast<cv::BackgroundSubtractor>() : cv::createBackgroundSubtractorMOG2().dynamicCast<cv::BackgroundSubtractor>());*/
	
	update_bg_model = opdialog.is_modup;
	bg_model->apply(img, fgmask, update_bg_model ? -1 : 0);// cv::imshow("fgmask", img);
	smoothMask = opdialog.smoothMask;
	if (smoothMask)
	{
		GaussianBlur(fgmask, fgmask, cv::Size(11, 11), 3.5, 3.5);
		thresdhold_value = opdialog.threshold_value;
		threshold(fgmask, fgmask, thresdhold_value, 255, cv::THRESH_BINARY);//default 10
	}
	fgimg = cv::Scalar::all(0);
	//if (opdialog.method) cv::imshow("fgmask", fgmask);
	//
	img.copyTo(fgimg, fgmask);
	cv::Mat bgimg;
	bg_model->getBackgroundImage(bgimg);// cv::imshow("bgimg", bgimg);
	//display frame number
	std::stringstream ss;
	//rectangle(frame_prc, cv::Point(10, 2), cv::Point(100, 20),cv::Scalar(255, 255, 255), -1);
	ss << capture.get(cv::CAP_PROP_POS_FRAMES);
	std::string st = "Frame Num: ";
	std::string frameNumberString =st+ ss.str();
	ui.label_time->setText(frameNumberString.c_str());
	//putText(frame_prc, frameNumberString.c_str(), cv::Point(15, 15),cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 0));
	cv::Mat img_src = fgmask.clone();
	cv::Mat eroded, dilated;
	cv::Mat ereer; ereer.rows = 55; ereer.cols = 55;
	//cv::imshow("img_scr", img_src);
	cv::erode(img_src, eroded, ereer);
	//cv::imshow("erode", eroded);
	cv::dilate(img_src, dilated, cv::Mat());
	//cv::imshow("dilate", dilated);
	contours = get_contours(eroded);
	//std::vector< std::vector<cv::Moments> > contours = process_contours(contour, img0);
	//cv::Mat result1(img0.size(), CV_8U, cv::Scalar(255));cv::drawContours(result1, contours, -1, cv::Scalar(0), 2); cv::imshow("origin contours", result1);
	return contours;
}
void FaceDetection::frame_num()
{
	std::stringstream ss;
	//rectangle(frame_prc, cv::Point(10, 2), cv::Point(100, 20),cv::Scalar(255, 255, 255), -1);
	ss << capture.get(cv::CAP_PROP_POS_FRAMES);
	std::string st = "Frame Num: ";
	std::string frameNumberString = st + ss.str();
	ui.label_time->setText(frameNumberString.c_str());
}
/*
	轮廓处理多边矩包围，未使用
*/
std::vector< std::vector<cv::Point> > FaceDetection::process_contours(std::vector< std::vector<cv::Point> > contours)
{
	cv::Mat result1(frame.size(), CV_8U, cv::Scalar(255));
	std::vector< std::vector<cv::Point> >::iterator itc = contours.begin();
	while (itc!=contours.end())
	{
		//cv::Moments mom = cv::moments(cv::Mat(*itc++));
		//cv::circle(result1, cv::Point(mom.m10 / mom.m00, mom.m01 / mom.m00), 2, cv::Scalar(0), 2); 
		std::vector<cv::Point> poly;
		cv::approxPolyDP(cv::Mat(*itc++), poly, 5, true);
		std::vector<cv::Point>::const_iterator itp = poly.begin();
		while (itp != (poly.end() - 1))
		{
			cv::line(result1, *itp, *(itp + 1), cv::Scalar(0), 2);
			++itp;
		}
		cv::line(result1, *(poly.begin()), *(poly.end() - 1), cv::Scalar(0), 2);
		
	}//cv::imshow("result2", result1); 
	//cv::Mat ress(frame.size(), CV_32S, cv::Scalar(255)); cv::connectedComponents(result1, ress, 8, CV_32S); cv::imshow("connect process", ress);
	std::vector< std::vector<cv::Point> > result0; cv::findContours(result1, result0, CV_RETR_CCOMP, CV_CHAIN_APPROX_NONE);
	//cv::Mat result2(frame.size(), CV_8U, cv::Scalar(k)); cv::drawContours(result2, result0, -1, cv::Scalar(0), 2); cv::imshow("result3", result2);
	return result0;
}
/*
	轮廓处理，矩形包围，进行一定的筛选
*/
std::vector< std::vector<cv::Point> >  FaceDetection::find_maxcontours(std::vector< std::vector<cv::Point> > contours)
{
	/*cv::Mat img_src(frame.size(), CV_8U, cv::Scalar(255)); 
	cv::drawContours(img_src, contours, -1, cv::Scalar(0), 2);
	cv::Mat eroded, dilated;
	cv::imshow("img_scr", img_src);
	cv::erode(img_src, eroded, cv::Mat());
	cv::imshow("erode", eroded);
	cv::dilate(img_src, dilated, cv::Mat());
	cv::imshow("dilate", dilated);*/
	cv::Mat result1(frame.size(), CV_8U, cv::Scalar(255));
	std::vector< std::vector<cv::Point> >::iterator itc = contours.begin();
	while (itc != contours.end())
	{
		cv::Rect r0 = cv::boundingRect(cv::Mat(*itc++));
		if (r0.width<40 || r0.height<40)
			continue;
		if (r0.width > result1.cols * 7 / 8 || r0.height>result1.rows * 7 / 8)
			continue;
		cv::Rect r1; r1.x = r0.x * 8 / 9; r1.y = r0.y * 8 / 9;
		r1.width = (r0.x-r1.x+r0.width) * 9 / 8; r1.height =(r0.y-r1.y+ r0.height) * 9 / 8;
		cv::rectangle(result1, r1, cv::Scalar(0), -1);
		
	}
	cv::Rect ddt; ddt.x = 1; ddt.y = 1; ddt.width = result1.cols - 1; ddt.height = result1.rows - 1; cv::rectangle(result1, ddt, cv::Scalar(255), 3);
	//cv::imshow("result2", result1);
	//cv::Mat ress(frame.size(), CV_32S, cv::Scalar(255)); cv::connectedComponents(result1, ress, 8, CV_32S); cv::imshow("connect process", ress);
	//std::vector< std::vector<cv::Point> > tete = get_contours(result1); 
	std::vector< std::vector<cv::Point> > result0; cv::findContours(result1, result0, CV_RETR_CCOMP, CV_CHAIN_APPROX_NONE);

	//cv::Mat result2(frame.size(), CV_8U, cv::Scalar(255)); cv::drawContours(result2, result0, -1, cv::Scalar(0), 2); cv::imshow("result3", result2);
	return result0;
}
/*
	背景差分法
*/
std::vector< std::vector<cv::Point> >  FaceDetection::bg_sub(cv::Mat img) {
	//update the background model
	update_bg_model = opdialog.is_modup;
	pMOG2->apply(img, fgMaskMOG2, update_bg_model ?-1:0);
	std::stringstream ss;
	//rectangle(frame_prc, cv::Point(10, 2), cv::Point(100, 20),cv::Scalar(255, 255, 255), -1);
	ss << capture.get(cv::CAP_PROP_POS_FRAMES);
	std::string frameNumberString = ss.str();
	//putText(frame_prc, frameNumberString.c_str(), cv::Point(15, 15),cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 0));
	//threshold
	GaussianBlur(fgMaskMOG2, fgMaskMOG2, cv::Size(11, 11), 3.5, 3.5);
	thresdhold_value = opdialog.threshold_value;
	threshold(fgMaskMOG2, fgMaskMOG2, thresdhold_value, 255, cv::THRESH_BINARY); //cv::imshow("fgMask", fgMaskMOG2);

	cv::Mat img_src = fgMaskMOG2.clone();
	//cv::drawContours(img_src, contours, -1, cv::Scalar(0), 2);
	cv::Mat eroded, dilated;
	cv::Mat ereer; ereer.rows = 55; ereer.cols = 55;
	//cv::imshow("img_scr", img_src);
	cv::erode(img_src, eroded, ereer);
	//cv::imshow("erode", eroded);
	cv::dilate(img_src, dilated, cv::Mat());
	//cv::imshow("dilate", dilated);
	std::vector< std::vector<cv::Point> > contours = get_contours(eroded);
	return contours;
}
/*
	对比度亮度的调整
*/
cv::Mat FaceDetection::contrast_bright(cv::Mat image) {
	beta = opdialog.beta; alpha = opdialog.alpha;
	cv::Mat new_image = cv::Mat::zeros(image.size(), image.type());
	for (int y = 0; y < image.rows; y++)
	{
		for (int x = 0; x < image.cols; x++)
		{
			for (int c = 0; c < 3; c++)
			{
				new_image.at<cv::Vec3b>(y, x)[c] = cv::saturate_cast<uchar>(alpha*(image.at<cv::Vec3b>(y, x)[c]) + beta);
			}
		}
	}
	return new_image;
}

void FaceDetection::turn_on_rec()
{
	string out;
	ifstream file("AllFiles.txt");
	if (file) {
		while (getline(file,out)) {
			dirNamesArr.push_back(out);
		}
	}
	file.close();
	fRec.load_cascade();
	isRec = true;
}

void FaceDetection::turn_off_rec()
{
	isRec = false;
}

void FaceDetection::train_file_open()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Txt File"), ".", tr("Txt File(*.txt )"));
	if (fileName != NULL)
	{
		QTextCodec *code = QTextCodec::codecForName("gb2312");
		std::string name = code->fromUnicode(fileName).data();
		//capture.open(fileName.toLatin1().data());
		fRec.read_csv(name);
		fRec.train();
	}
}

int FaceDetection::getPredict(cv::Mat faceOrg)
{
	cv::Mat gray; int predictedLabel;
	cvtColor(faceOrg, gray, cv::COLOR_BGR2GRAY);
	predictedLabel = fRec.getPredictedLabel(gray);
	return predictedLabel;
}

void FaceDetection::saveFacesDir()
{
	bool ok;
	QString fileName = QInputDialog::getText(this, tr("InputDialog"), tr("Input the name:"),
		QLineEdit::Normal,"MyDir", &ok);
	if (ok && !fileName.isEmpty())
	{
		QTextCodec *code = QTextCodec::codecForName("gb2312");
		std::string name = code->fromUnicode(fileName).data();
		faceDirName = name;
		std::string strTemp = "res\\TrainImages\\" + faceDirName;
		_mkdir(strTemp.c_str());
	}
}

void FaceDetection::camera_save()
{
	saveFacesDir();
	capture.open(0);
	while (capture.isOpened())
	{
		
		updateImage();
		sleep(10);
	}
}

void FaceDetection::clearScreen()
{
	capture.release();
	writer.release();
	ui.label_src->clear();
	ui.label_out->clear();
}

void FaceDetection::autoTrain()
{
	string rootPath = "res/TrainImages/";
	dirNames = get_filelist((char*)(rootPath + "*").c_str());
	wirteTxtFile(dirNames);
	dirNamesArr.clear();
	for (int i = 0; i < dirNames.size(); i++)
	{
		dirNamesArr.push_back(dirNames[i]);
		string filePath = rootPath + dirNames[i];

		vector<string> tempNames;
		tempNames = get_filelist((char*)(filePath + "/*").c_str());
		for (int j = 0; j < tempNames.size(); j++)
		{
			string finalPath = filePath + "/" + tempNames[j];
			fRec.getImagesAndLabels(imread(finalPath, 0), i + 1);
			int finalNum = i + 1; char tc[40]; itoa(finalNum, tc, 10);
			fileNames.push_back(finalPath + ";" + tc);
		}

	}
	fRec.train();
	
}

vector<string> FaceDetection::get_filelist(char * foldname)
{
	vector<string> flist;
	HANDLE file;
	WIN32_FIND_DATA fileData;
	char line[1024];
	wchar_t fn[1000];
	mbstowcs(fn, (const char*)foldname, 999);
	file = FindFirstFile(fn, &fileData);
	FindNextFile(file, &fileData);
	while (FindNextFile(file, &fileData)) {
		wcstombs(line, (const wchar_t*)fileData.cFileName, 259);
		flist.push_back(line);
	}
	return flist;
}

void FaceDetection::wirteTxtFile(vector<string> files)
{
	char * distAll = "AllFiles.txt";
	ofstream ofn(distAll);
	int size = files.size();
	//ofn << size << endl;
	for (int i = 0; i<size; i++)
	{
		ofn << files[i] << endl;
	}
	ofn.close();
}

void FaceDetection::trackCamera()
{
}

void FaceDetection::trackVideo()
{
}

void FaceDetection::cameraFirst()
{
	capture.open(0);
	opdialog.scale = 2.0;
	while (capture.isOpened())
	{
		updateImage();
		sleep(10);
	}
}

void FaceDetection::trackCameraMode()
{
	string filename = "";
	camshift tracker;
	tracker.process(filename);
	
}

void FaceDetection::trackVideoMode()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Video"), ".", tr("Video Files(*.avi *.wmv *.mov *.mpeg *.mp4)"));
	if (fileName != NULL)
	{
		QTextCodec *code = QTextCodec::codecForName("gb2312");
		std::string name = code->fromUnicode(fileName).data();
		//capture.open(fileName.toLatin1().data());
		camshift tracker;
		tracker.process(name);
		
	}
}
