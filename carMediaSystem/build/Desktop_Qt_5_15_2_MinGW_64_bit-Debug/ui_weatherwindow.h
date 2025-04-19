/********************************************************************************
** Form generated from reading UI file 'weatherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERWINDOW_H
#define UI_WEATHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_back;
    QLabel *label_datetime;
    QLabel *label_icon;
    QLabel *label_weather;
    QPushButton *btn_city;
    QLabel *label_temprature;
    QLabel *label_date1;
    QLabel *label_temp1;
    QLabel *label_icon1;
    QLabel *label_wea1;
    QLabel *label_date2;
    QLabel *label_icon2;
    QLabel *label_temp2;
    QLabel *label_wea2;
    QLabel *label_date3;
    QLabel *label_icon3;
    QLabel *label_temp3;
    QLabel *label_wea3;
    QLabel *label_date4;
    QLabel *label_icon4;
    QLabel *label_temp4;
    QLabel *label_wea4;
    QLabel *label_date5;
    QLabel *label_icon5;
    QLabel *label_temp5;
    QLabel *label_wea5;
    QLabel *label_date6;
    QLabel *label_icon6;
    QLabel *label_temp6;
    QLabel *label_wea6;
    QLabel *label_date7;
    QLabel *label_icon7;
    QLabel *label_temp7;
    QLabel *label_wea7;

    void setupUi(QMainWindow *WeatherWindow)
    {
        if (WeatherWindow->objectName().isEmpty())
            WeatherWindow->setObjectName(QString::fromUtf8("WeatherWindow"));
        WeatherWindow->resize(900, 500);
        centralwidget = new QWidget(WeatherWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{border-image: url(:/image/weather/weather_background.jpg);}\n"
"#btn_back{border-image: url(:/image/back.svg);}\n"
"QLabel{\n"
"   color:white;\n"
"font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"}\n"
"#label_datetime{font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"font-size:18pt;\n"
"}\n"
"#label_weather{\n"
"font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"font-size:18pt;\n"
"font-weight:bold;\n"
"}\n"
"#btn_city{\n"
"color:white;\n"
"font-family:\345\256\213\344\275\223;\n"
"background:transparent;\n"
"font-size:18pt;\n"
"font-weight:bold;\n"
"}\n"
"#label_temprature{\n"
"font-family:\345\276\256\350\275\257\351\233\205\351\273\221;\n"
"font-size:28pt;\n"
"font-weight:bold;\n"
"}\n"
"#label_date1,#label_temp1,#label_wea1{\n"
"color:yellow\n"
"}"));
        btn_back = new QPushButton(centralwidget);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(0, 0, 61, 41));
        btn_back->setStyleSheet(QString::fromUtf8(""));
        label_datetime = new QLabel(centralwidget);
        label_datetime->setObjectName(QString::fromUtf8("label_datetime"));
        label_datetime->setGeometry(QRect(650, 70, 201, 101));
        label_datetime->setAlignment(Qt::AlignCenter);
        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(100, 70, 69, 61));
        label_icon->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_weather = new QLabel(centralwidget);
        label_weather->setObjectName(QString::fromUtf8("label_weather"));
        label_weather->setGeometry(QRect(20, 130, 220, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        font.setBold(true);
        label_weather->setFont(font);
        label_weather->setAlignment(Qt::AlignCenter);
        btn_city = new QPushButton(centralwidget);
        btn_city->setObjectName(QString::fromUtf8("btn_city"));
        btn_city->setGeometry(QRect(270, 60, 93, 51));
        label_temprature = new QLabel(centralwidget);
        label_temprature->setObjectName(QString::fromUtf8("label_temprature"));
        label_temprature->setGeometry(QRect(240, 130, 151, 61));
        label_temprature->setAlignment(Qt::AlignCenter);
        label_date1 = new QLabel(centralwidget);
        label_date1->setObjectName(QString::fromUtf8("label_date1"));
        label_date1->setGeometry(QRect(50, 270, 85, 51));
        label_date1->setAlignment(Qt::AlignCenter);
        label_temp1 = new QLabel(centralwidget);
        label_temp1->setObjectName(QString::fromUtf8("label_temp1"));
        label_temp1->setGeometry(QRect(50, 330, 85, 20));
        label_temp1->setAlignment(Qt::AlignCenter);
        label_icon1 = new QLabel(centralwidget);
        label_icon1->setObjectName(QString::fromUtf8("label_icon1"));
        label_icon1->setGeometry(QRect(70, 370, 45, 45));
        label_icon1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_wea1 = new QLabel(centralwidget);
        label_wea1->setObjectName(QString::fromUtf8("label_wea1"));
        label_wea1->setGeometry(QRect(40, 430, 110, 20));
        label_wea1->setAlignment(Qt::AlignCenter);
        label_date2 = new QLabel(centralwidget);
        label_date2->setObjectName(QString::fromUtf8("label_date2"));
        label_date2->setGeometry(QRect(170, 270, 85, 51));
        label_date2->setAlignment(Qt::AlignCenter);
        label_icon2 = new QLabel(centralwidget);
        label_icon2->setObjectName(QString::fromUtf8("label_icon2"));
        label_icon2->setGeometry(QRect(190, 370, 45, 45));
        label_icon2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_temp2 = new QLabel(centralwidget);
        label_temp2->setObjectName(QString::fromUtf8("label_temp2"));
        label_temp2->setGeometry(QRect(170, 330, 85, 20));
        label_temp2->setAlignment(Qt::AlignCenter);
        label_wea2 = new QLabel(centralwidget);
        label_wea2->setObjectName(QString::fromUtf8("label_wea2"));
        label_wea2->setGeometry(QRect(160, 430, 110, 20));
        label_wea2->setAlignment(Qt::AlignCenter);
        label_date3 = new QLabel(centralwidget);
        label_date3->setObjectName(QString::fromUtf8("label_date3"));
        label_date3->setGeometry(QRect(290, 270, 85, 51));
        label_date3->setAlignment(Qt::AlignCenter);
        label_icon3 = new QLabel(centralwidget);
        label_icon3->setObjectName(QString::fromUtf8("label_icon3"));
        label_icon3->setGeometry(QRect(310, 370, 45, 45));
        label_icon3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_temp3 = new QLabel(centralwidget);
        label_temp3->setObjectName(QString::fromUtf8("label_temp3"));
        label_temp3->setGeometry(QRect(290, 330, 85, 20));
        label_temp3->setAlignment(Qt::AlignCenter);
        label_wea3 = new QLabel(centralwidget);
        label_wea3->setObjectName(QString::fromUtf8("label_wea3"));
        label_wea3->setGeometry(QRect(280, 430, 110, 20));
        label_wea3->setAlignment(Qt::AlignCenter);
        label_date4 = new QLabel(centralwidget);
        label_date4->setObjectName(QString::fromUtf8("label_date4"));
        label_date4->setGeometry(QRect(410, 270, 85, 51));
        label_date4->setAlignment(Qt::AlignCenter);
        label_icon4 = new QLabel(centralwidget);
        label_icon4->setObjectName(QString::fromUtf8("label_icon4"));
        label_icon4->setGeometry(QRect(430, 370, 45, 45));
        label_icon4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_temp4 = new QLabel(centralwidget);
        label_temp4->setObjectName(QString::fromUtf8("label_temp4"));
        label_temp4->setGeometry(QRect(410, 330, 85, 20));
        label_temp4->setAlignment(Qt::AlignCenter);
        label_wea4 = new QLabel(centralwidget);
        label_wea4->setObjectName(QString::fromUtf8("label_wea4"));
        label_wea4->setGeometry(QRect(400, 430, 110, 20));
        label_wea4->setAlignment(Qt::AlignCenter);
        label_date5 = new QLabel(centralwidget);
        label_date5->setObjectName(QString::fromUtf8("label_date5"));
        label_date5->setGeometry(QRect(530, 270, 85, 51));
        label_date5->setAlignment(Qt::AlignCenter);
        label_icon5 = new QLabel(centralwidget);
        label_icon5->setObjectName(QString::fromUtf8("label_icon5"));
        label_icon5->setGeometry(QRect(550, 370, 45, 45));
        label_icon5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_temp5 = new QLabel(centralwidget);
        label_temp5->setObjectName(QString::fromUtf8("label_temp5"));
        label_temp5->setGeometry(QRect(530, 330, 85, 20));
        label_temp5->setAlignment(Qt::AlignCenter);
        label_wea5 = new QLabel(centralwidget);
        label_wea5->setObjectName(QString::fromUtf8("label_wea5"));
        label_wea5->setGeometry(QRect(520, 430, 110, 20));
        label_wea5->setAlignment(Qt::AlignCenter);
        label_date6 = new QLabel(centralwidget);
        label_date6->setObjectName(QString::fromUtf8("label_date6"));
        label_date6->setGeometry(QRect(650, 270, 85, 51));
        label_date6->setAlignment(Qt::AlignCenter);
        label_icon6 = new QLabel(centralwidget);
        label_icon6->setObjectName(QString::fromUtf8("label_icon6"));
        label_icon6->setGeometry(QRect(670, 370, 45, 45));
        label_icon6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_temp6 = new QLabel(centralwidget);
        label_temp6->setObjectName(QString::fromUtf8("label_temp6"));
        label_temp6->setGeometry(QRect(650, 330, 85, 20));
        label_temp6->setAlignment(Qt::AlignCenter);
        label_wea6 = new QLabel(centralwidget);
        label_wea6->setObjectName(QString::fromUtf8("label_wea6"));
        label_wea6->setGeometry(QRect(640, 430, 110, 20));
        label_wea6->setAlignment(Qt::AlignCenter);
        label_date7 = new QLabel(centralwidget);
        label_date7->setObjectName(QString::fromUtf8("label_date7"));
        label_date7->setGeometry(QRect(770, 270, 85, 51));
        label_date7->setAlignment(Qt::AlignCenter);
        label_icon7 = new QLabel(centralwidget);
        label_icon7->setObjectName(QString::fromUtf8("label_icon7"));
        label_icon7->setGeometry(QRect(790, 370, 45, 45));
        label_icon7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/weather/qing.png);"));
        label_temp7 = new QLabel(centralwidget);
        label_temp7->setObjectName(QString::fromUtf8("label_temp7"));
        label_temp7->setGeometry(QRect(770, 330, 85, 20));
        label_temp7->setAlignment(Qt::AlignCenter);
        label_wea7 = new QLabel(centralwidget);
        label_wea7->setObjectName(QString::fromUtf8("label_wea7"));
        label_wea7->setGeometry(QRect(760, 430, 110, 20));
        label_wea7->setAlignment(Qt::AlignCenter);
        WeatherWindow->setCentralWidget(centralwidget);

        retranslateUi(WeatherWindow);

        QMetaObject::connectSlotsByName(WeatherWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WeatherWindow)
    {
        WeatherWindow->setWindowTitle(QCoreApplication::translate("WeatherWindow", "MainWindow", nullptr));
        btn_back->setText(QString());
        label_datetime->setText(QCoreApplication::translate("WeatherWindow", "2025-04-17\n"
"16:54:05  \345\221\250\345\233\233", nullptr));
        label_icon->setText(QString());
        label_weather->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        btn_city->setText(QCoreApplication::translate("WeatherWindow", "\346\210\220\351\203\275", nullptr));
        label_temprature->setText(QCoreApplication::translate("WeatherWindow", "32\342\204\203", nullptr));
        label_date1->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_temp1->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_icon1->setText(QString());
        label_wea1->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        label_date2->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_icon2->setText(QString());
        label_temp2->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_wea2->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        label_date3->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_icon3->setText(QString());
        label_temp3->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_wea3->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        label_date4->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_icon4->setText(QString());
        label_temp4->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_wea4->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        label_date5->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_icon5->setText(QString());
        label_temp5->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_wea5->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        label_date6->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_icon6->setText(QString());
        label_temp6->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_wea6->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
        label_date7->setText(QCoreApplication::translate("WeatherWindow", "17\346\227\245\n"
"\346\230\237\346\234\237\345\233\233", nullptr));
        label_icon7->setText(QString());
        label_temp7->setText(QCoreApplication::translate("WeatherWindow", "17\342\204\203~32\342\204\203", nullptr));
        label_wea7->setText(QCoreApplication::translate("WeatherWindow", "\346\231\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeatherWindow: public Ui_WeatherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERWINDOW_H
