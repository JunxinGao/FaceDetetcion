#ifndef HELP_H
#define HELP_H

#include <QDialog>
#include<ui_help.h>

//namespace Ui {
//	class help;
//}

class Help : public QDialog
{
	Q_OBJECT

public:
	Help(QWidget *parent = 0);
	~Help();


	private slots:
	
private:
	Ui::Dialog_help ui;

};

#endif // help_H