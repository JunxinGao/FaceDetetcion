/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_help
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Dialog_help)
    {
        if (Dialog_help->objectName().isEmpty())
            Dialog_help->setObjectName(QStringLiteral("Dialog_help"));
        Dialog_help->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral("res/a128.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_help->setWindowIcon(icon);
        gridLayout = new QGridLayout(Dialog_help);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textBrowser = new QTextBrowser(Dialog_help);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Dialog_help);

        QMetaObject::connectSlotsByName(Dialog_help);
    } // setupUi

    void retranslateUi(QDialog *Dialog_help)
    {
        Dialog_help->setWindowTitle(QApplication::translate("Dialog_help", "\345\270\256\345\212\251", 0));
        textBrowser->setHtml(QApplication::translate("Dialog_help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\345\270\256\345\212\251</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:600;\"><br /></p>\n"
"<hr width=\"100%\"/>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; text-decoration: underline;\"><br /></p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\350\217\234\345\215\225\346\240\217\351\200\211\351\241\271\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">File-&gt;open</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\257\344\273\245\351\200\211\346\213\251\346\211\223\345\274\200\344\270\200\344\270\252\346\210\226\345\244\232\344\270\252\350\247\206\351\242\221\357\274\214\351\273\230\350\256\244\344\277\235\345\255\230\350\267\257\345\276\204\345\234\250\345\216\237\350\247"
                        "\206\351\242\221\344\275\215\347\275\256\350\276\223\345\207\272\346\240\274\345\274\217\344\270\272out_+\345\216\237\350\247\206\351\242\221\345\220\215\347\247\260\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">File-&gt;camera</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \347\224\250\346\235\245\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264\346\235\245\350\277\233\350\241\214\346\243\200\346\265\213\345\244\204\347\220\206</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">File-&gt;save path</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\257\344"
                        "\273\245\350\256\276\347\275\256\344\277\235\345\255\230\350\267\257\345\276\204\357\274\214\345\220\214\346\227\266\344\271\237\345\217\257\344\273\245\346\233\264\346\224\271\351\273\230\350\256\244\344\277\235\345\255\230\350\267\257\345\276\204\345\217\212\345\220\215\347\247\260\343\200\202</span></p>\n"
"<hr />\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Setting-&gt;change cascade file</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\257\344\273\245\346\233\264\346\215\242\351\273\230\350\256\244\345\212\240\350\275\275\347\232\204\344\272\272\350\204\270\350\256\255\347\273"
                        "\203\346\226\207\344\273\266\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Setting-&gt;change nestedCascade file</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \345\217\257\344\273\245\346\233\264\346\215\242\351\273\230\350\256\244\350\246\201\346\230\276\347\244\272\347\232\204\344\272\272\350\204\270\347\211\271\345\276\201\351\203\250\344\275\215\350\256\255\347\273\203\346\226\207\344\273\266\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Setting-&gt;turn on confignition </span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\257\344\273\245\346\211"
                        "\223\345\274\200\344\272\272\350\204\270\350\257\206\345\210\253</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Setting-&gt;turn off confignition</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \345\217\257\344\273\245\345\205\263\351\227\255\344\272\272\350\204\270\350\257\206\345\210\253</span></p>\n"
"<hr />\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Train-&gt;Save camera faces</span><span style=\" font"
                        "-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \346\230\257\345\217\257\344\273\245\344\277\235\345\255\230\346\221\204\345\203\217\345\244\264\346\213\215\346\221\204\347\232\204\344\272\272\350\204\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Train-&gt;Save video faces</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \346\230\257\345\217\257\344\273\245\344\277\235\345\255\230\350\247\206\351\242\221\344\270\255\347\232\204\344\272\272\350\204\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Train-&gt;Auto images train</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#0000"
                        "00;\"> \346\230\257\347\224\250\346\235\245\350\207\252\345\212\250\350\256\255\347\273\203\344\270\212\350\277\260\344\277\235\345\255\230\347\232\204\344\272\272\350\204\270</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Train-&gt;Train with CSV</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \346\230\257\344\275\277\347\224\250CSV\347\232\204\346\226\271\345\274\217\345\215\263\350\257\273\345\205\245\344\277\235\345\255\230\350\267\257\345\276\204\347\232\204TXT\346\226\207\344\273\266\346\235\245\350\277\233\350\241\214\350\256\255\347\273\203</span></p>\n"
"<hr />\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p s"
                        "tyle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Tracking-&gt;Camera Mode</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \345\217\257\344\273\245\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264\345\210\222\345\256\232\351\200\211\344\270\255\345\214\272\345\237\237\350\277\233\350\241\214\350\267\237\350\270\252</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Tracking-&gt;Video Mode</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \346\230\257\345\217\257\344\273\245\346\211\223\345\274\200\350\247\206\351\242\221\346\235\245\345\210\222\345\256\232\351\200\211\345\256\232\345\214\272\345\237"
                        "\237\350\277\233\350\241\214\350\267\237\350\270\252</span></p>\n"
"<hr />\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">ClearAndEnd-&gt;Clear Screen And End</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\230\257\345\217\257\344\273\245\346\235\245\350\277\233\350\241\214\346\270\205\345\261\217\346\210\226\350\200\205\347\273\223\346\235\237\345\275\223\345\211\215\350\256\255\347\273\203\346\210\226\346\243\200\346\265\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-famil"
                        "y:'Arial,Verdana'; font-size:10pt; color:#000000;\">	</span></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Help-&gt;Help</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"> \346\237\245\347\234\213\345\270\256\345\212\251\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\344\270\255\351\227\264\346\230\276\347\244\272\347\252\227\344\275\223\357\274\232</span></p>\n"
"<p style="
                        "\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\267\246\347\252\227\344\275\223</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\230\276\347\244\272\345\216\237\350\247\206\351\242\221\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\217\263\347\252\227\344\275\223</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\230\276\347\244\272\345\256\236\346"
                        "\227\266\345\244\204\347\220\206\350\247\206\351\242\221\357\274\214\351\273\230\350\256\244\344\270\215\345\212\240\350\275\275\350\247\206\351\242\221\346\227\266\346\230\276\347\244\272No Video\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\344\270\213\351\235\242\346\230\276\347\244\272\351\203\250\344\273\266</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana"
                        "'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\200\222\346\225\260\347\254\254\344\272\214\350\241\214\345\267\246\350\276\271\346\230\276\347\244\272\347\232\204</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Detection Time: 0 ms</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\345\275\223\345\211\215\345\244\204\347\220\206\350\247\206\351\242\221\345\270\247\347\232\204\350\200\227\346\227\266\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\344\270\255\351\227\264\347\232\204</span><span style=\" font-family:'Arial,Verd"
                        "ana'; font-size:10pt; font-weight:600; color:#000000;\">\350\277\233\345\272\246\346\235\241</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\230\276\347\244\272\345\275\223\345\211\215\350\247\206\351\242\221\345\244\204\347\220\206\347\232\204\350\277\233\345\272\246\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\350\277\233\345\272\246\346\235\241\344\270\212\351\235\242</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\230\257\351\242\204\345\210\244\346\226\255\346\230\276\347\244\272\347\233\270\344\274\274\345\272\246\347\232\204\347\231\276\345\210\206\346\257\224\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-famil"
                        "y:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\263\350\276\271\347\232\204</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">Frame Num: 0</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\345\275\223\345\211\215\345\244\204\347\220\206\345\210\260\350\247\206\351\242\221\347\232\204\347\254\254\345\207\240\345\270\247\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\234\200\345\220\216\344\270\200\350\241\214\345\233\276\346\240\207\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-t"
                        "ype:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\344\273\216\345\267\246\345\276\200\345\217\263\357\274\232</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\217\211\345\217\211\347\232\204\346\214\211\351\222\256</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\345\205\263\351\227\255\345\267\246\350\276\271\346\230\276\347\244\272\347\252\227\344\275\223\344\271\237\345\217\257\344\273\245\346\201\242\345\244\215\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\212\240\345\217\267\347\232\204\346\214\211\351\222\256</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\346\267\273\345\212\240\344\270\200\344\270\252\350\247\206\351\242\221\346\226\207\344\273\266\351\273\230\350\256\244\344\270\215\350\276\223\345\207\272\357\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\347\261\273\344\274\274\346\222\255\346\224\276\345\231\250\347\232\204</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\346\222\255\346\224\276\346\214\211\351\222\256</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\345\244\204\347\220\206\350\247\206\351\242\221\357"
                        "\274\214</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\234\200\345\220\216\344\270\200\344\270\252\350\256\276\347\275\256\346\214\211\351\222\256\346\214\211\344\270\213\345\217\257\344\273\245\346\211\223\345\274\200\344\270\200\344\270\252\345\257\271\350\257\235\346\241\206\357\274\214\351\207\214\351\235\242\346\234\211\350\256\270\345\244\232\345\217\202\346\225\260\350\256\276\347\275\256\343\200\202</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:60"
                        "0; color:#000000;\">\345\217\202\346\225\260\350\256\276\347\275\256</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\257\271\350\257\235\346\241\206\357\274\232</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\257\271\346\257\224\345\272\246\345\222\214\344\272\256\345\272\246</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\347\232\204\350\260\203\346\225\264\345\210\206\345\210\253\345\244\204\347\220\206\350\247\206\351\242\221\347\232\204\345\257\271\346\257\224\345\272\246\345\222\214\344\272\256\345\272\246\343\200\202</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\347\274\251\346\224\276\345\200\274</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\276\227\350\260\203\346\225\264\345\217\257\344\273\245\347\274\251\345\260\217\345\244\204\347\220\206\350\247\206\351\242\221\345\270\247\347\232\204\345\244\247\345\260\217\344\273\216\350\200\214\345\212\240\345\277\253\346\243\200\346\265\213\351\200\237\345\272\246\357\274\214\344\275\206\345\207\206\347\241\256\345\272\246\344\271\237\344\274\232\346\234\211\344\270\200\345\256\232\347\232\204\345\275\261\345\223\215\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\351\230\210\345"
                        "\200\274</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\347\232\204\350\260\203\346\225\264\345\217\257\344\273\245\345\234\250\345\220\216\351\235\242\346\203\205\346\231\257\346\243\200\346\265\213\345\244\204\347\220\206\344\270\255\344\275\277\344\272\214\345\200\274\345\214\226\345\233\276\345\203\217\350\264\264\350\277\221\347\220\206\346\203\263\347\212\266\346\200\201\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\350\207\252\345\212\250\345\210\244\346\226\255\346\221\204\345\203\217\345\244\264\346\230\257\345\220\246\345\233\272\345\256\232</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\257\344\273\245\350\207\252\345\212\250\346\243\200\346\265\213\350\247\206\351\242\221\346\230\257\345\261\236\344\272\216\346\221\204\345\203"
                        "\217\345\244\264\345\233\272\345\256\232\350\277\230\346\230\257\346\221\204\345\203\217\345\244\264\344\270\215\345\233\272\345\256\232\347\232\204\345\234\272\346\231\257\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\273\272\346\250\241\346\226\271\346\263\225</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\346\230\257\345\220\216\351\235\242\346\203\205\346\231\257\346\243\200\346\265\213\344\270\255\344\275\277\347\224\250\347\232\204\345\273\272\346\250\241\346\226\271\346\263\225\357\274\214\345\205\267\344\275\223\345\217\257\344\273\245\347\231\276\345\272\246\357\274\214\351\273\230\350\256\244\344\275\277\347\224\250mog\351\253\230\346\226\257\345\273\272\346\250\241\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\350\207\252\345\212\250\346\203\205\346\231\257\346\243\200\346\265\213</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\217\257\344\273\245\350\207\252\345\212\250\345\210\244\346\226\255\350\247\206\351\242\221\344\270\255\347\232\204\346\203\205\346\231\257\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\346\203\205\346\231\257\346\243\200\346\265\213</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\345\210\206\344\270\272\350\203\214\346\231\257\344\270\215\345\212\250\345\222\214\350\277\220\345\212\250\346\243\200\346\265\213\357\274\214\345\211\215\350\200\205\350\203\214\346\231\257\346\230\257\351\235"
                        "\231\346\255\242\347\211\251\344\275\223\357\274\214\345\220\216\350\200\205\350\203\214\346\231\257\346\230\257\346\234\211\347\202\271\350\277\220\345\212\250\347\232\204\347\261\273\344\274\274\346\240\221\345\217\266\345\234\250\351\243\230\347\232\204\350\203\214\346\231\257\345\234\272\346\231\257\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\347\211\271\345\276\201\351\203\250\344\275\215\346\240\207\350\256\260</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\346\214\207\345\256\232\350\204\270\351\203\250\347\211\271\345\276\201\346\240\207\350\256\260\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size"
                        ":10pt; font-weight:600; color:#000000;\">\350\257\257\346\243\200\347\255\233\351\200\211</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\346\230\257\345\220\246\344\275\277\347\224\250\344\272\272\350\204\270\347\211\271\345\276\201\351\203\250\344\275\215\347\255\233\351\200\211\344\270\215\345\261\236\344\272\216\344\272\272\347\261\273\347\232\204\350\257\257\346\243\200\345\214\272\345\237\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\350\203\214\346\231\257\346\250\241\345\236\213\346\233\264\346\226\260</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\345\234\250\346\203\205\346\231\257\346\243\200\346\265\213\344\270\255\346\230\257\345\220\246\346\233\264\346\226\260\350\203\214\346\231\257"
                        "\346\250\241\345\236\213\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial,Verdana'; font-size:10pt; font-weight:600; color:#000000;\">\345\271\263\346\273\221\345\244\204\347\220\206</span><span style=\" font-family:'Arial,Verdana'; font-size:10pt; color:#000000;\">\350\241\250\347\244\272\346\203\205\346\231\257\346\243\200\346\265\213\344\270\255\346\230\257\345\220\246\345\257\271\344\272\214\345\200\274\345\214\226\347\232\204\345\233\276\345\203\217\350\277\233\350\241\214\345\271\263\346\273\221\345\244\204\347\220\206\343\200\202</span></p>\n"
"<hr /></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_help: public Ui_Dialog_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
