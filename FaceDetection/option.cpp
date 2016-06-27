#include "option.h"
#include <string>
#include "ui_option.h"
#include "facedetection.h"

Option::Option(QWidget *parent) :
	QDialog(parent)
	, threshold_value(0)
	, smoothMask(true)
	, tryflip(false)
	, method(true)
	, scale(1)
	, is_origin(true)
	, is_bgsub(false)
	, is_modup(true)
	, alpha(1.0)
	, beta(0)
	, nestVisible(false)
	, isAutoAdj1(false)
	, isAutoAdj2(false)
	, nestLimit(false)

{
	//FaceDetection fc;
	ui.setupUi(this);
	ui.slider_thres->setRange(0, 255);
	ui.slider_thres->setValue(0);
	setthresValue(0);
	ui.slider_scale->setRange(100, 800);
	ui.slider_scale->setValue(100);
	setScaleValue(100);
	ui.slider_bright->setRange(0, 100); ui.slider_bright->setValue(0);
	ui.slider_contrast->setRange(100, 300); ui.slider_contrast->setValue(100);
	connect(ui.slider_bright, SIGNAL(valueChanged(int)), this, SLOT(setbrightValue(int)));
	connect(ui.doubleSpinBox_contrast, SIGNAL(valueChanged(double)), this, SLOT(setSpinBox()));
	connect(ui.slider_contrast, SIGNAL(valueChanged(int)), this, SLOT(setContrastValue(int)));
	connect(ui.slider_thres, SIGNAL(valueChanged(int)), this, SLOT(setthresValue(int)));
	connect(ui.doubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(setSpinBox()));
	connect(ui.slider_scale, SIGNAL(valueChanged(int)), this, SLOT(setScaleValue(int)));
	connect(ui.radioButton_flip1, SIGNAL(toggled(bool)), this, SLOT(rb_flip()));
	connect(ui.radioButton_mog2, SIGNAL(toggled(bool)), this, SLOT(rb_mod()));
	connect(ui.radioButton_bgup1, SIGNAL(toggled(bool)), this, SLOT(rb_bgup()));
	connect(ui.radioButton_origin1, SIGNAL(toggled(bool)), this, SLOT(rb_origin()));
	connect(ui.radioButton_slight2, SIGNAL(toggled(bool)), this, SLOT(rb_sight()));
	connect(ui.radioButton_smooth1, SIGNAL(toggled(bool)), this, SLOT(rb_smooth()));
	connect(ui.radioButton_autoSight1, SIGNAL(toggled(bool)), this, SLOT(rb_auto1()));
	connect(ui.radioButton_nest1, SIGNAL(toggled(bool)), this, SLOT(rb_nest()));
	connect(ui.radioButton_nestLimit, SIGNAL(toggled(bool)), this, SLOT(rb_nestLimit()));
	connect(ui.radioButton_adj21, SIGNAL(toggled(bool)), this, SLOT(rb_auto2()));
}

Option::~Option()
{

}
void Option::rb_nestLimit() {
	if (ui.radioButton_nestLimit->isChecked())
	{
		nestLimit = true;
	}
	else
		nestLimit = false;
}
void Option::rb_auto2() {
	if (ui.radioButton_adj21->isChecked())
	{
		isAutoAdj2 = true;
		ui.groupBox_slight->setDisabled(true); setthresValue(0); ui.slider_scale->setDisabled(true);
		ui.groupBox_bgup->setDisabled(true);
	}
	else {
		isAutoAdj2 = false; ui.groupBox_slight->setEnabled(true); ui.slider_scale->setEnabled(true);
		ui.groupBox_bgup->setEnabled(true);
	}
}
void Option::rb_auto1() {
	if (ui.radioButton_autoSight1->isChecked())
	{
		isAutoAdj1 = true;// ui.radioButton_origin1->setCheckable(false); ui.radioButton_origin2->setCheckable(false);
		ui.groupBox_origin->setDisabled(true); ui.groupBox_nest->setDisabled(true);
		ui.slider_scale->setDisabled(true); setthresValue(0);
	}
	else
	{
		isAutoAdj1 = false; ui.groupBox_origin->setEnabled(true); ui.slider_scale->setEnabled(true);
		ui.groupBox_nest->setEnabled(true);
	}
}
void Option::rb_nest() {
	if (ui.radioButton_nest1->isChecked())
		nestVisible = true;
	else
		nestVisible = false;
}
void Option::setbrightValue(int value)
{
	int pos = ui.slider_bright->value();
	QString str = QString("%1").arg(pos);
	ui.label_bright2->setText(str);
	beta = pos;
}
void Option::setContrastValue(int value)
{
	int pos = ui.slider_contrast->value();
	setSpinBox_contrast();
}
void Option::setSpinBox_contrast()
{
	double tt = (double)((double)ui.slider_contrast->value() / 100);
	ui.doubleSpinBox_contrast->setValue(tt);
	alpha = tt;
}


void Option::rb_smooth()
{
	if (ui.radioButton_smooth1->isChecked())
		smoothMask = true;
	else
		smoothMask = false;
	//FaceDetection fc; fc.smoothMask = smoothMask;
}
void Option::rb_sight()
{
	if (ui.radioButton_slight2->isChecked())
		is_bgsub = false;
	else
		is_bgsub = true;
	//FaceDetection fc; fc.isbg_sub = is_bgsub;
}
void Option::rb_origin() {
	if (ui.radioButton_origin1->isChecked())
	{
		is_origin = false; ui.slider_scale->setDisabled(true);
		ui.groupBox_nest->setDisabled(true);
	}
	else
	{
		is_origin = true; ui.slider_scale->setEnabled(true);
		ui.groupBox_nest->setEnabled(true);
	}
	//FaceDetection fc; fc.is_origin_detect = is_origin;
}
void Option::rb_mod() {
	if (ui.radioButton_mog2->isChecked())
		method = true;
	else
		method = false;
	FaceDetection fc; 
	if (method)fc.method = "mog2";
	else
		fc.method = "knn";
}
void Option::rb_bgup() {
	if (ui.radioButton_bgup1->isChecked())
		is_modup = true;
	else
		is_modup = false;
	//FaceDetection fc; fc.update_bg_model = is_modup;
}
void Option::rb_flip() {
	if (ui.radioButton_flip1->isChecked())
		tryflip = true;
	else
		tryflip = false;
	//FaceDetection fc; fc.tryflip = tryflip;
}

void Option::setthresValue(int value)
{
	int pos = ui.slider_thres->value();
	QString str = QString("%1").arg(pos);
	ui.label_2->setText(str);
	threshold_value = pos;
	//FaceDetection fc; fc.thresdhold_value = threshold_value;
}
void Option::setScaleValue(int value)
{
	int pos = ui.slider_thres->value();
	setSpinBox();
}
void Option::setSpinBox()
{
	double tt = (double)((double)ui.slider_scale->value() / 100);
	ui.doubleSpinBox->setValue(tt);
	scale = tt;
	//FaceDetection fc; fc.scale = scale;
}

