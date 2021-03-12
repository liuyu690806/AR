#ifndef MYPUSHBUTTON1_H
#define MYPUSHBUTTON1_H

#include <QWidget>
#include <QPushButton>

class MyPushButton1 : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton1(QWidget *parent = nullptr);
    //弹跳特效
    void zoomdown();
    void zoomup();


signals:

public slots:
};

#endif // MYPUSHBUTTON1_H
