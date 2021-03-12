#include "mypushbutton1.h"
#include <QPropertyAnimation>

MyPushButton1::MyPushButton1(QWidget *parent) : QPushButton(parent)
{

}

void MyPushButton1::zoomdown()
{
      QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
      animation->setDuration(400);
      animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
      animation->setEndValue(QRect(this->x(),this->y()+5,this->width(),this->height()));
      animation->setEasingCurve(QEasingCurve::OutBounce);
      animation->start();
}


void MyPushButton1::zoomup()
{
   QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
   animation->setDuration(400);
   animation->setStartValue(QRect(this->x(),this->y()+5,this->width(),this->height()));
   animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
   animation->setEasingCurve(QEasingCurve::OutBounce);
   animation->start();

}
