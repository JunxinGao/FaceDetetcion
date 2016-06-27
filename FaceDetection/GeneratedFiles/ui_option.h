/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_Contrast1;
    QDoubleSpinBox *doubleSpinBox_contrast;
    QSlider *slider_contrast;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_bright1;
    QLabel *label_bright2;
    QSlider *slider_bright;
    QHBoxLayout *horizontalLayout;
    QLabel *label_scale;
    QDoubleSpinBox *doubleSpinBox;
    QSlider *slider_scale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_thres;
    QLabel *label_2;
    QSlider *slider_thres;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_flip;
    QGroupBox *groupBox_flip;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButton_flip1;
    QRadioButton *radioButton_flip2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_autoSight;
    QGroupBox *groupBox_autoSight;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *radioButton_autoSight1;
    QRadioButton *radioButton_autoSight2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_origin;
    QGroupBox *groupBox_origin;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButton_origin1;
    QRadioButton *radioButton_origin2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_mod;
    QGroupBox *groupBox_mod;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *radioButton_mog2;
    QRadioButton *radioButton_knn;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_ajd2;
    QGroupBox *groupBox_adj2;
    QHBoxLayout *horizontalLayout_22;
    QRadioButton *radioButton_adj21;
    QRadioButton *radioButton_adj22;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_slight;
    QGroupBox *groupBox_slight;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radioButton_slight1;
    QRadioButton *radioButton_slight2;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_nest;
    QGroupBox *groupBox_nest;
    QHBoxLayout *horizontalLayout_24;
    QRadioButton *radioButton_nest1;
    QRadioButton *radioButton_nest2;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_nestLimit;
    QGroupBox *groupBox_nestLimit;
    QHBoxLayout *horizontalLayout_20;
    QRadioButton *radioButton_nestLimit;
    QRadioButton *radioButton_nestLimit_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_bgup;
    QGroupBox *groupBox_bgup;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButton_bgup1;
    QRadioButton *radioButton_bgup2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_smooth;
    QGroupBox *groupBox_smooth;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioButton_smooth1;
    QRadioButton *radioButton_smooth2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(370, 548);
        QIcon icon;
        icon.addFile(QStringLiteral("res/a128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_Contrast1 = new QLabel(widget);
        label_Contrast1->setObjectName(QStringLiteral("label_Contrast1"));

        horizontalLayout_16->addWidget(label_Contrast1);

        doubleSpinBox_contrast = new QDoubleSpinBox(widget);
        doubleSpinBox_contrast->setObjectName(QStringLiteral("doubleSpinBox_contrast"));

        horizontalLayout_16->addWidget(doubleSpinBox_contrast);

        slider_contrast = new QSlider(widget);
        slider_contrast->setObjectName(QStringLiteral("slider_contrast"));
        slider_contrast->setOrientation(Qt::Horizontal);

        horizontalLayout_16->addWidget(slider_contrast);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_bright1 = new QLabel(widget);
        label_bright1->setObjectName(QStringLiteral("label_bright1"));

        horizontalLayout_15->addWidget(label_bright1);

        label_bright2 = new QLabel(widget);
        label_bright2->setObjectName(QStringLiteral("label_bright2"));

        horizontalLayout_15->addWidget(label_bright2);

        slider_bright = new QSlider(widget);
        slider_bright->setObjectName(QStringLiteral("slider_bright"));
        slider_bright->setOrientation(Qt::Horizontal);

        horizontalLayout_15->addWidget(slider_bright);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_scale = new QLabel(widget);
        label_scale->setObjectName(QStringLiteral("label_scale"));

        horizontalLayout->addWidget(label_scale);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);

        slider_scale = new QSlider(widget);
        slider_scale->setObjectName(QStringLiteral("slider_scale"));
        slider_scale->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider_scale);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_thres = new QLabel(widget);
        label_thres->setObjectName(QStringLiteral("label_thres"));

        horizontalLayout_2->addWidget(label_thres);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        slider_thres = new QSlider(widget);
        slider_thres->setObjectName(QStringLiteral("slider_thres"));
        slider_thres->setMaximum(255);
        slider_thres->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(slider_thres);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_flip = new QLabel(widget);
        label_flip->setObjectName(QStringLiteral("label_flip"));
        label_flip->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_flip);

        groupBox_flip = new QGroupBox(widget);
        groupBox_flip->setObjectName(QStringLiteral("groupBox_flip"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_flip);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        radioButton_flip1 = new QRadioButton(groupBox_flip);
        radioButton_flip1->setObjectName(QStringLiteral("radioButton_flip1"));
        radioButton_flip1->setChecked(false);

        horizontalLayout_9->addWidget(radioButton_flip1);

        radioButton_flip2 = new QRadioButton(groupBox_flip);
        radioButton_flip2->setObjectName(QStringLiteral("radioButton_flip2"));
        radioButton_flip2->setChecked(true);

        horizontalLayout_9->addWidget(radioButton_flip2);


        horizontalLayout_3->addWidget(groupBox_flip);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_autoSight = new QLabel(widget);
        label_autoSight->setObjectName(QStringLiteral("label_autoSight"));
        label_autoSight->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_autoSight);

        groupBox_autoSight = new QGroupBox(widget);
        groupBox_autoSight->setObjectName(QStringLiteral("groupBox_autoSight"));
        horizontalLayout_18 = new QHBoxLayout(groupBox_autoSight);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        radioButton_autoSight1 = new QRadioButton(groupBox_autoSight);
        radioButton_autoSight1->setObjectName(QStringLiteral("radioButton_autoSight1"));
        radioButton_autoSight1->setChecked(false);

        horizontalLayout_18->addWidget(radioButton_autoSight1);

        radioButton_autoSight2 = new QRadioButton(groupBox_autoSight);
        radioButton_autoSight2->setObjectName(QStringLiteral("radioButton_autoSight2"));
        radioButton_autoSight2->setChecked(true);

        horizontalLayout_18->addWidget(radioButton_autoSight2);


        horizontalLayout_17->addWidget(groupBox_autoSight);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_origin = new QLabel(widget);
        label_origin->setObjectName(QStringLiteral("label_origin"));
        label_origin->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_origin);

        groupBox_origin = new QGroupBox(widget);
        groupBox_origin->setObjectName(QStringLiteral("groupBox_origin"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_origin);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        radioButton_origin1 = new QRadioButton(groupBox_origin);
        radioButton_origin1->setObjectName(QStringLiteral("radioButton_origin1"));
        radioButton_origin1->setChecked(false);

        horizontalLayout_10->addWidget(radioButton_origin1);

        radioButton_origin2 = new QRadioButton(groupBox_origin);
        radioButton_origin2->setObjectName(QStringLiteral("radioButton_origin2"));
        radioButton_origin2->setChecked(true);

        horizontalLayout_10->addWidget(radioButton_origin2);


        horizontalLayout_4->addWidget(groupBox_origin);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_mod = new QLabel(widget);
        label_mod->setObjectName(QStringLiteral("label_mod"));
        label_mod->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_mod);

        groupBox_mod = new QGroupBox(widget);
        groupBox_mod->setObjectName(QStringLiteral("groupBox_mod"));
        horizontalLayout_11 = new QHBoxLayout(groupBox_mod);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        radioButton_mog2 = new QRadioButton(groupBox_mod);
        radioButton_mog2->setObjectName(QStringLiteral("radioButton_mog2"));
        radioButton_mog2->setChecked(true);

        horizontalLayout_11->addWidget(radioButton_mog2);

        radioButton_knn = new QRadioButton(groupBox_mod);
        radioButton_knn->setObjectName(QStringLiteral("radioButton_knn"));

        horizontalLayout_11->addWidget(radioButton_knn);


        horizontalLayout_5->addWidget(groupBox_mod);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_ajd2 = new QLabel(widget);
        label_ajd2->setObjectName(QStringLiteral("label_ajd2"));
        label_ajd2->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(label_ajd2);

        groupBox_adj2 = new QGroupBox(widget);
        groupBox_adj2->setObjectName(QStringLiteral("groupBox_adj2"));
        horizontalLayout_22 = new QHBoxLayout(groupBox_adj2);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        radioButton_adj21 = new QRadioButton(groupBox_adj2);
        radioButton_adj21->setObjectName(QStringLiteral("radioButton_adj21"));

        horizontalLayout_22->addWidget(radioButton_adj21);

        radioButton_adj22 = new QRadioButton(groupBox_adj2);
        radioButton_adj22->setObjectName(QStringLiteral("radioButton_adj22"));
        radioButton_adj22->setChecked(true);

        horizontalLayout_22->addWidget(radioButton_adj22);


        horizontalLayout_21->addWidget(groupBox_adj2);


        verticalLayout_2->addLayout(horizontalLayout_21);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_slight = new QLabel(widget);
        label_slight->setObjectName(QStringLiteral("label_slight"));
        label_slight->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_slight);

        groupBox_slight = new QGroupBox(widget);
        groupBox_slight->setObjectName(QStringLiteral("groupBox_slight"));
        horizontalLayout_12 = new QHBoxLayout(groupBox_slight);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        radioButton_slight1 = new QRadioButton(groupBox_slight);
        radioButton_slight1->setObjectName(QStringLiteral("radioButton_slight1"));

        horizontalLayout_12->addWidget(radioButton_slight1);

        radioButton_slight2 = new QRadioButton(groupBox_slight);
        radioButton_slight2->setObjectName(QStringLiteral("radioButton_slight2"));
        radioButton_slight2->setChecked(true);

        horizontalLayout_12->addWidget(radioButton_slight2);


        horizontalLayout_6->addWidget(groupBox_slight);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_nest = new QLabel(widget);
        label_nest->setObjectName(QStringLiteral("label_nest"));
        label_nest->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_nest);

        groupBox_nest = new QGroupBox(widget);
        groupBox_nest->setObjectName(QStringLiteral("groupBox_nest"));
        horizontalLayout_24 = new QHBoxLayout(groupBox_nest);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        radioButton_nest1 = new QRadioButton(groupBox_nest);
        radioButton_nest1->setObjectName(QStringLiteral("radioButton_nest1"));

        horizontalLayout_24->addWidget(radioButton_nest1);

        radioButton_nest2 = new QRadioButton(groupBox_nest);
        radioButton_nest2->setObjectName(QStringLiteral("radioButton_nest2"));
        radioButton_nest2->setChecked(true);

        horizontalLayout_24->addWidget(radioButton_nest2);


        horizontalLayout_23->addWidget(groupBox_nest);


        verticalLayout_2->addLayout(horizontalLayout_23);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_nestLimit = new QLabel(widget);
        label_nestLimit->setObjectName(QStringLiteral("label_nestLimit"));
        label_nestLimit->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_nestLimit);

        groupBox_nestLimit = new QGroupBox(widget);
        groupBox_nestLimit->setObjectName(QStringLiteral("groupBox_nestLimit"));
        horizontalLayout_20 = new QHBoxLayout(groupBox_nestLimit);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        radioButton_nestLimit = new QRadioButton(groupBox_nestLimit);
        radioButton_nestLimit->setObjectName(QStringLiteral("radioButton_nestLimit"));

        horizontalLayout_20->addWidget(radioButton_nestLimit);

        radioButton_nestLimit_2 = new QRadioButton(groupBox_nestLimit);
        radioButton_nestLimit_2->setObjectName(QStringLiteral("radioButton_nestLimit_2"));
        radioButton_nestLimit_2->setChecked(true);

        horizontalLayout_20->addWidget(radioButton_nestLimit_2);


        horizontalLayout_19->addWidget(groupBox_nestLimit);


        verticalLayout_2->addLayout(horizontalLayout_19);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_bgup = new QLabel(widget);
        label_bgup->setObjectName(QStringLiteral("label_bgup"));
        label_bgup->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_bgup);

        groupBox_bgup = new QGroupBox(widget);
        groupBox_bgup->setObjectName(QStringLiteral("groupBox_bgup"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_bgup);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        radioButton_bgup1 = new QRadioButton(groupBox_bgup);
        radioButton_bgup1->setObjectName(QStringLiteral("radioButton_bgup1"));
        radioButton_bgup1->setChecked(true);

        horizontalLayout_13->addWidget(radioButton_bgup1);

        radioButton_bgup2 = new QRadioButton(groupBox_bgup);
        radioButton_bgup2->setObjectName(QStringLiteral("radioButton_bgup2"));

        horizontalLayout_13->addWidget(radioButton_bgup2);


        horizontalLayout_7->addWidget(groupBox_bgup);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_smooth = new QLabel(widget);
        label_smooth->setObjectName(QStringLiteral("label_smooth"));
        label_smooth->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_smooth);

        groupBox_smooth = new QGroupBox(widget);
        groupBox_smooth->setObjectName(QStringLiteral("groupBox_smooth"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_smooth);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        radioButton_smooth1 = new QRadioButton(groupBox_smooth);
        radioButton_smooth1->setObjectName(QStringLiteral("radioButton_smooth1"));
        radioButton_smooth1->setChecked(true);

        horizontalLayout_14->addWidget(radioButton_smooth1);

        radioButton_smooth2 = new QRadioButton(groupBox_smooth);
        radioButton_smooth2->setObjectName(QStringLiteral("radioButton_smooth2"));

        horizontalLayout_14->addWidget(radioButton_smooth2);


        horizontalLayout_8->addWidget(groupBox_smooth);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(widget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        label_Contrast1->setText(QApplication::translate("Dialog", "\345\257\271\346\257\224\345\272\246", 0));
        label_bright1->setText(QApplication::translate("Dialog", "\344\272\256\345\272\246    ", 0));
        label_bright2->setText(QString());
        label_scale->setText(QApplication::translate("Dialog", "\347\274\251\346\224\276\345\200\274", 0));
        label_thres->setText(QApplication::translate("Dialog", "\351\230\210\345\200\274    ", 0));
        label_2->setText(QString());
        label_flip->setText(QApplication::translate("Dialog", "\347\277\273\350\275\254\346\243\200\346\265\213", 0));
        groupBox_flip->setTitle(QString());
        radioButton_flip1->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_flip2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_autoSight->setText(QApplication::translate("Dialog", "\350\207\252\345\212\250\345\210\244\346\226\255\346\221\204\345\203\217\345\244\264\346\230\257\345\220\246\345\233\272\345\256\232", 0));
        groupBox_autoSight->setTitle(QString());
        radioButton_autoSight1->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_autoSight2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_origin->setText(QApplication::translate("Dialog", "\346\221\204\345\203\217\345\244\264\345\233\272\345\256\232", 0));
        groupBox_origin->setTitle(QString());
        radioButton_origin1->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_origin2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_mod->setText(QApplication::translate("Dialog", "\345\273\272\346\250\241\346\226\271\346\263\225", 0));
        groupBox_mod->setTitle(QString());
        radioButton_mog2->setText(QApplication::translate("Dialog", "mog2", 0));
        radioButton_knn->setText(QApplication::translate("Dialog", "knn", 0));
        label_ajd2->setText(QApplication::translate("Dialog", "\350\207\252\345\212\250\346\203\205\346\231\257\346\243\200\346\265\213", 0));
        groupBox_adj2->setTitle(QString());
        radioButton_adj21->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_adj22->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_slight->setText(QApplication::translate("Dialog", "\346\243\200\346\265\213\346\203\205\346\231\257", 0));
        groupBox_slight->setTitle(QString());
        radioButton_slight1->setText(QApplication::translate("Dialog", "\350\203\214\346\231\257\344\270\215\345\212\250", 0));
        radioButton_slight2->setText(QApplication::translate("Dialog", "\350\277\220\345\212\250\346\243\200\346\265\213", 0));
        label_nest->setText(QApplication::translate("Dialog", "\347\211\271\345\276\201\351\203\250\344\275\215\346\240\207\350\256\260", 0));
        groupBox_nest->setTitle(QString());
        radioButton_nest1->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_nest2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_nestLimit->setText(QApplication::translate("Dialog", "\350\257\257\346\243\200\347\255\233\351\200\211", 0));
        groupBox_nestLimit->setTitle(QString());
        radioButton_nestLimit->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_nestLimit_2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_bgup->setText(QApplication::translate("Dialog", "\350\203\214\346\231\257\346\250\241\345\236\213\346\233\264\346\226\260", 0));
        groupBox_bgup->setTitle(QString());
        radioButton_bgup1->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_bgup2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
        label_smooth->setText(QApplication::translate("Dialog", "\345\271\263\346\273\221\345\244\204\347\220\206", 0));
        groupBox_smooth->setTitle(QString());
        radioButton_smooth1->setText(QApplication::translate("Dialog", "\346\230\257", 0));
        radioButton_smooth2->setText(QApplication::translate("Dialog", "\345\220\246", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
