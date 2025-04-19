/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_weather;
    QLabel *label_time;
    QLabel *label_date;
    QLabel *label_music;
    QLabel *label_video;
    QLabel *label_map;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{background-image: url(:/image/33857552_140701783106_2.jpg);}\n"
"#label_date{font: 700 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);}\n"
"#label_time{font: 700 28pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);}\n"
"#label_weather{image: url(:/image/weather.svg);}\n"
"#label_music{image: url(:/image/music.svg);}\n"
"#label_video{image: url(:/image/video.svg);}\n"
"#label_map{image: url(:/image/map.svg);}"));
        label_weather = new QLabel(centralwidget);
        label_weather->setObjectName(QString::fromUtf8("label_weather"));
        label_weather->setGeometry(QRect(30, 310, 221, 161));
        label_weather->setStyleSheet(QString::fromUtf8(""));
        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(30, 40, 221, 41));
        label_time->setStyleSheet(QString::fromUtf8(""));
        label_date = new QLabel(centralwidget);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(20, 130, 251, 51));
        label_date->setStyleSheet(QString::fromUtf8(""));
        label_music = new QLabel(centralwidget);
        label_music->setObjectName(QString::fromUtf8("label_music"));
        label_music->setGeometry(QRect(300, 310, 191, 151));
        label_music->setStyleSheet(QString::fromUtf8(""));
        label_video = new QLabel(centralwidget);
        label_video->setObjectName(QString::fromUtf8("label_video"));
        label_video->setGeometry(QRect(560, 320, 181, 141));
        label_video->setStyleSheet(QString::fromUtf8(""));
        label_map = new QLabel(centralwidget);
        label_map->setObjectName(QString::fromUtf8("label_map"));
        label_map->setGeometry(QRect(570, 80, 181, 131));
        label_map->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_weather->setText(QString());
        label_time->setText(QCoreApplication::translate("MainWindow", "13:41:05", nullptr));
        label_date->setText(QCoreApplication::translate("MainWindow", "2025-04-17  \345\221\250\345\233\233", nullptr));
        label_music->setText(QString());
        label_video->setText(QString());
        label_map->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
