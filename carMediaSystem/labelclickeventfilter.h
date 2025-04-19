#ifndef LABELCLICKEVENTFILTER_H
#define LABELCLICKEVENTFILTER_H

#include <QObject>
#include <QEvent>
class labelClickEventFilter : public QObject
{
    Q_OBJECT
public:
    explicit labelClickEventFilter(QObject *parent = nullptr);
    bool eventFilter(QObject *watched,QEvent *event);
signals:
    void goOtherWindow(QObject *watched);
};

#endif // LABELCLICKEVENTFILTER_H
