#include "facedetection.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FaceDetection w;
	w.show();
	return a.exec();
}
