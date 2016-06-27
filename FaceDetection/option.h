#ifndef OPTION_H
#define OPTION_H

#include <QDialog>
#include<ui_option.h>

//namespace Ui {
//	class Option;
//}

class Option : public QDialog
{
	Q_OBJECT

public:
	 Option(QWidget *parent = 0);
	 ~Option();

	

	
	 bool isAutoAdj2;
	 bool nestLimit;
	 bool isAutoAdj1;
	 bool nestVisible;
	 double scale;
	 bool tryflip;
	 bool is_origin;
	 bool method;
	 bool is_bgsub;
	 bool is_modup;
	 bool smoothMask;
	 int threshold_value;
	 double alpha; /**< 控制对比度 */
	 int beta;  /**< 控制亮度 */

private slots: 
		void setthresValue(int value);
		void setScaleValue(int value);
		void setSpinBox();
		void rb_flip();
		void rb_bgup();
		void rb_mod();
		void rb_origin();
		void rb_sight();
		void rb_smooth();
		void setbrightValue(int value);
		void setContrastValue(int value);
		void setSpinBox_contrast();
		void rb_auto1();
		void rb_nest();
		void rb_auto2();
		void rb_nestLimit();


private:
	Ui::Dialog ui;
	
};

#endif // OPTION_H