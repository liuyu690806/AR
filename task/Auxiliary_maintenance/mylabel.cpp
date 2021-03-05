#include "mylabel.h"
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QTimer>
#pragma execution_character_set("utf-8")
Mylabel::Mylabel(QWidget *parent) : QLabel(parent)
{

}

void Mylabel::zoomdown()
{
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    animation->setDuration(300);
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y()+4,this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

void Mylabel::zoomup()
{
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    animation->setDuration(300);
    animation->setStartValue(QRect(this->x(),this->y()+4,this->width(),this->height()));
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

void Mylabel::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
    {
        QTimer::singleShot(300,this,[=](){

            zoomdown();
            zoomup();
            emit Afor_an_accout();
        });
    }
    QLabel::mousePressEvent(ev);
}

Mylabel::~Mylabel()
{

}

