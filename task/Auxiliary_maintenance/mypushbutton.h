#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
//#include "maintenance_mask.h"
#pragma execution_character_set("utf-8")

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushButton(QWidget *parent = nullptr);
    //构造函数
    MyPushButton(QString normalImg="",QString pressImg="");
    QString normalImagePath;
    QString pressImagePath;

    //弹跳特效
    void zoomdown();
    void zoomup();

signals:

public slots:
};

#endif // MYPUSHBUTTON_H
