QT       += core gui network
QT +=quick quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    labelclickeventfilter.cpp \
    main.cpp \
    mainwindow.cpp \
    weatherwindow.cpp

HEADERS += \
    common.h \
    labelclickeventfilter.h \
    mainwindow.h \
    weatherwindow.h

FORMS += \
    mainwindow.ui \
    weatherwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../music/qml.qrc \
    ../music/res.qrc \
    resource.qrc

DISTFILES += \
    image/天气预报.svg \
    image/导航.svg \
    image/视频.svg \
    image/音乐.svg

SUBDIRS += \
    ../music/music.pro \
    ../music/music.pro
