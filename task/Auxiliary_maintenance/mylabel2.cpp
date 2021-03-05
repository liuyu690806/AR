#include "mylabel2.h"
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QTimer>
#include <QMessageBox>
#pragma execution_character_set("utf-8")
Mylabel2::Mylabel2(QWidget *parent) : QLabel(parent)
{

}

void Mylabel2::zoomdown()
{
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    animation->setDuration(300);
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y()+4,this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

void Mylabel2::zoomup()
{
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    animation->setDuration(300);
    animation->setStartValue(QRect(this->x(),this->y()+4,this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

void Mylabel2::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        QTimer::singleShot(300,this,[=](){

            zoomdown();
            zoomup();
            QMessageBox::warning(this,"info","请您联系管理员！");
            return;

        });
    }
    QLabel::mousePressEvent(ev);
}

Mylabel2::~Mylabel2()
{

}
