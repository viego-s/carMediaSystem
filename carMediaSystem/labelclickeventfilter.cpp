#include "labelclickeventfilter.h"
#include <QDebug>
labelClickEventFilter::labelClickEventFilter(QObject *parent)
    : QObject{parent}
{}

bool labelClickEventFilter::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()==QEvent::MouseButtonPress||
        event->type()==QEvent::MouseButtonDblClick){
        //qDebug()<<"被点击了";
        //发送信号
        emit goOtherWindow(watched);
    }
    return QObject::eventFilter(watched,event);
}
