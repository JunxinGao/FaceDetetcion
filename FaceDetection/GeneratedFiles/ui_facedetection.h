/********************************************************************************
** Form generated from reading UI file 'facedetection.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEDETECTION_H
#define UI_FACEDETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceDetectionClass
{
public:
    QAction *actionLoad_cascade_File;
    QAction *actionLoad_nestedCascade_File;
    QAction *actionSave;
    QAction *actionOpen_muti_files;
    QAction *actionHelp;
    QAction *actionCamera_Train;
    QAction *actionVideo_Trainn;
    QAction *actionSet_Label;
    QAction *actionImages_Train;
    QAction *actionTurn_on_recognition;
    QAction *actionTurn_off_recognition;
    QAction *actionCamera_Mode;
    QAction *actionVideo_Mode;
    QAction *actionAuto_Images_Train;
    QAction *actionCamera;
    QAction *actionClear_Screen;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *bt_open;
    QLabel *label_time;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_1;
    QVBoxLayout *verticalLayout;
    QLabel *label_src;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_out;
    QSpacerItem *horizontalSpacer_1;
    QProgressBar *progressBar;
    QPushButton *bt_stop;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_rate;
    QPushButton *bt_fast_dt;
    QPushButton *bt_process;
    QPushButton *bt_close;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuSetting;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTrain;
    QMenu *menuTracking;
    QMenu *menuClear;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FaceDetectionClass)
    {
        if (FaceDetectionClass->objectName().isEmpty())
            FaceDetectionClass->setObjectName(QStringLiteral("FaceDetectionClass"));
        FaceDetectionClass->resize(960, 488);
        QIcon icon;
        icon.addFile(QStringLiteral(":/FaceDetection/res/a128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FaceDetectionClass->setWindowIcon(icon);
        actionLoad_cascade_File = new QAction(FaceDetectionClass);
        actionLoad_cascade_File->setObjectName(QStringLiteral("actionLoad_cascade_File"));
        actionLoad_nestedCascade_File = new QAction(FaceDetectionClass);
        actionLoad_nestedCascade_File->setObjectName(QStringLiteral("actionLoad_nestedCascade_File"));
        actionSave = new QAction(FaceDetectionClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionOpen_muti_files = new QAction(FaceDetectionClass);
        actionOpen_muti_files->setObjectName(QStringLiteral("actionOpen_muti_files"));
        actionHelp = new QAction(FaceDetectionClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionCamera_Train = new QAction(FaceDetectionClass);
        actionCamera_Train->setObjectName(QStringLiteral("actionCamera_Train"));
        actionVideo_Trainn = new QAction(FaceDetectionClass);
        actionVideo_Trainn->setObjectName(QStringLiteral("actionVideo_Trainn"));
        actionSet_Label = new QAction(FaceDetectionClass);
        actionSet_Label->setObjectName(QStringLiteral("actionSet_Label"));
        actionImages_Train = new QAction(FaceDetectionClass);
        actionImages_Train->setObjectName(QStringLiteral("actionImages_Train"));
        actionTurn_on_recognition = new QAction(FaceDetectionClass);
        actionTurn_on_recognition->setObjectName(QStringLiteral("actionTurn_on_recognition"));
        actionTurn_off_recognition = new QAction(FaceDetectionClass);
        actionTurn_off_recognition->setObjectName(QStringLiteral("actionTurn_off_recognition"));
        actionCamera_Mode = new QAction(FaceDetectionClass);
        actionCamera_Mode->setObjectName(QStringLiteral("actionCamera_Mode"));
        actionVideo_Mode = new QAction(FaceDetectionClass);
        actionVideo_Mode->setObjectName(QStringLiteral("actionVideo_Mode"));
        actionAuto_Images_Train = new QAction(FaceDetectionClass);
        actionAuto_Images_Train->setObjectName(QStringLiteral("actionAuto_Images_Train"));
        actionCamera = new QAction(FaceDetectionClass);
        actionCamera->setObjectName(QStringLiteral("actionCamera"));
        actionClear_Screen = new QAction(FaceDetectionClass);
        actionClear_Screen->setObjectName(QStringLiteral("actionClear_Screen"));
        centralWidget = new QWidget(FaceDetectionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(3);
        bt_open = new QPushButton(centralWidget);
        bt_open->setObjectName(QStringLiteral("bt_open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/FaceDetection/res/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_open->setIcon(icon1);

        gridLayout->addWidget(bt_open, 5, 3, 1, 1);

        label_time = new QLabel(centralWidget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setStyleSheet(QStringLiteral("font: 75 9pt \"YaHei Consolas Hybrid\";"));
        label_time->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_time, 3, 8, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_1 = new QWidget(centralWidget);
        widget_1->setObjectName(QStringLiteral("widget_1"));
        sizePolicy.setHeightForWidth(widget_1->sizePolicy().hasHeightForWidth());
        widget_1->setSizePolicy(sizePolicy);
        widget_1->setAutoFillBackground(false);
        widget_1->setStyleSheet(QLatin1String("background-color:qconicalgradient(cx:1, cy:0, angle:90, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(widget_1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_src = new QLabel(widget_1);
        label_src->setObjectName(QStringLiteral("label_src"));
        sizePolicy.setHeightForWidth(label_src->sizePolicy().hasHeightForWidth());
        label_src->setSizePolicy(sizePolicy);
        label_src->setAutoFillBackground(false);
        label_src->setStyleSheet(QString::fromUtf8("font: italic 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_src->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_src);


        horizontalLayout_2->addWidget(widget_1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setAutoFillBackground(false);
        widget_2->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0, cy:0, angle:90, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 255))"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_out = new QLabel(widget_2);
        label_out->setObjectName(QStringLiteral("label_out"));
        sizePolicy.setHeightForWidth(label_out->sizePolicy().hasHeightForWidth());
        label_out->setSizePolicy(sizePolicy);
        label_out->setAutoFillBackground(false);
        label_out->setStyleSheet(QString::fromUtf8("font: italic 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_out->setAlignment(Qt::AlignCenter);
        label_out->setMargin(0);

        verticalLayout_2->addWidget(label_out);


        horizontalLayout_2->addWidget(widget_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 9);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_1, 5, 1, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setStyleSheet(QStringLiteral("font: 75 9pt \"YaHei Consolas Hybrid\";"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar, 3, 2, 1, 6);

        bt_stop = new QPushButton(centralWidget);
        bt_stop->setObjectName(QStringLiteral("bt_stop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/FaceDetection/res/actions/gtk-media-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_stop->setIcon(icon2);

        gridLayout->addWidget(bt_stop, 5, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 8, 1, 1);

        label_rate = new QLabel(centralWidget);
        label_rate->setObjectName(QStringLiteral("label_rate"));
        label_rate->setStyleSheet(QStringLiteral("font: 75 9pt \"YaHei Consolas Hybrid\";"));
        label_rate->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_rate, 3, 1, 1, 1);

        bt_fast_dt = new QPushButton(centralWidget);
        bt_fast_dt->setObjectName(QStringLiteral("bt_fast_dt"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/FaceDetection/res/actions/gnome-run.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_fast_dt->setIcon(icon3);

        gridLayout->addWidget(bt_fast_dt, 5, 7, 1, 1);

        bt_process = new QPushButton(centralWidget);
        bt_process->setObjectName(QStringLiteral("bt_process"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/FaceDetection/res/actions/gtk-media-play-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_process->setIcon(icon4);

        gridLayout->addWidget(bt_process, 5, 5, 1, 1);

        bt_close = new QPushButton(centralWidget);
        bt_close->setObjectName(QStringLiteral("bt_close"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/FaceDetection/res/actions/gtk-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        bt_close->setIcon(icon5);

        gridLayout->addWidget(bt_close, 5, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 2, 1, 6);


        horizontalLayout->addLayout(gridLayout);

        FaceDetectionClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FaceDetectionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 23));
        menuSetting = new QMenu(menuBar);
        menuSetting->setObjectName(QStringLiteral("menuSetting"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTrain = new QMenu(menuBar);
        menuTrain->setObjectName(QStringLiteral("menuTrain"));
        menuTracking = new QMenu(menuBar);
        menuTracking->setObjectName(QStringLiteral("menuTracking"));
        menuClear = new QMenu(menuBar);
        menuClear->setObjectName(QStringLiteral("menuClear"));
        FaceDetectionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FaceDetectionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FaceDetectionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FaceDetectionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FaceDetectionClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSetting->menuAction());
        menuBar->addAction(menuTrain->menuAction());
        menuBar->addAction(menuTracking->menuAction());
        menuBar->addAction(menuClear->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuSetting->addAction(actionLoad_cascade_File);
        menuSetting->addAction(actionLoad_nestedCascade_File);
        menuSetting->addAction(actionTurn_on_recognition);
        menuSetting->addAction(actionTurn_off_recognition);
        menuFile->addAction(actionOpen_muti_files);
        menuFile->addAction(actionCamera);
        menuFile->addAction(actionSave);
        menuHelp->addAction(actionHelp);
        menuTrain->addAction(actionAuto_Images_Train);
        menuTrain->addAction(actionImages_Train);
        menuTrain->addAction(actionCamera_Train);
        menuTrain->addAction(actionVideo_Trainn);
        menuTracking->addAction(actionCamera_Mode);
        menuTracking->addAction(actionVideo_Mode);
        menuClear->addAction(actionClear_Screen);

        retranslateUi(FaceDetectionClass);

        QMetaObject::connectSlotsByName(FaceDetectionClass);
    } // setupUi

    void retranslateUi(QMainWindow *FaceDetectionClass)
    {
        FaceDetectionClass->setWindowTitle(QApplication::translate("FaceDetectionClass", "DFace", 0));
        actionLoad_cascade_File->setText(QApplication::translate("FaceDetectionClass", "Change cascade File", 0));
        actionLoad_nestedCascade_File->setText(QApplication::translate("FaceDetectionClass", "Change nestedCascade File", 0));
        actionSave->setText(QApplication::translate("FaceDetectionClass", "Save Path", 0));
        actionOpen_muti_files->setText(QApplication::translate("FaceDetectionClass", "Open", 0));
        actionHelp->setText(QApplication::translate("FaceDetectionClass", "Help", 0));
        actionCamera_Train->setText(QApplication::translate("FaceDetectionClass", "Save Camera faces", 0));
        actionVideo_Trainn->setText(QApplication::translate("FaceDetectionClass", "Save Video faces", 0));
        actionSet_Label->setText(QApplication::translate("FaceDetectionClass", "Set Label", 0));
        actionImages_Train->setText(QApplication::translate("FaceDetectionClass", "Train With CSV", 0));
        actionTurn_on_recognition->setText(QApplication::translate("FaceDetectionClass", "Turn on recognition", 0));
        actionTurn_off_recognition->setText(QApplication::translate("FaceDetectionClass", "Turn off recognition", 0));
        actionCamera_Mode->setText(QApplication::translate("FaceDetectionClass", "Camera Mode", 0));
        actionVideo_Mode->setText(QApplication::translate("FaceDetectionClass", "Video Mode", 0));
        actionAuto_Images_Train->setText(QApplication::translate("FaceDetectionClass", "Auto Images Train", 0));
        actionCamera->setText(QApplication::translate("FaceDetectionClass", "Camera", 0));
        actionClear_Screen->setText(QApplication::translate("FaceDetectionClass", "Clear Screen And End", 0));
        bt_open->setText(QString());
        label_time->setText(QApplication::translate("FaceDetectionClass", "Frame Num: 0", 0));
        label_src->setText(QApplication::translate("FaceDetectionClass", "No Video", 0));
        label_out->setText(QApplication::translate("FaceDetectionClass", "No Video", 0));
        bt_stop->setText(QString());
        label_rate->setText(QApplication::translate("FaceDetectionClass", "Detection Time: 0 ms", 0));
        bt_fast_dt->setText(QString());
        bt_process->setText(QString());
        bt_close->setText(QString());
        label->setText(QString());
        menuSetting->setTitle(QApplication::translate("FaceDetectionClass", "Setting", 0));
        menuFile->setTitle(QApplication::translate("FaceDetectionClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("FaceDetectionClass", "Help", 0));
        menuTrain->setTitle(QApplication::translate("FaceDetectionClass", "Train", 0));
        menuTracking->setTitle(QApplication::translate("FaceDetectionClass", "Tracking", 0));
        menuClear->setTitle(QApplication::translate("FaceDetectionClass", "ClearAndEnd", 0));
    } // retranslateUi

};

namespace Ui {
    class FaceDetectionClass: public Ui_FaceDetectionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEDETECTION_H
