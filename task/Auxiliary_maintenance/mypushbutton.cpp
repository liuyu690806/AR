#include "mypushbutton.h"
#include <QDebug>
#include <QPropertyAnimation>
#pragma execution_character_set("utf-8")
//MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
//{

//}
  MyPushButton::MyPushButton(QString normalImg,QString pressImg)
  {
      this->normalImagePath=normalImg;
      this->pressImagePath=pressImg;

      QPixmap pix;
      bool ret=pix.load(normalImg);
      if(!ret)
      {
         // qDebug()<<"图片加载失败！";
          return;
      }
      this->setFixedSize(pix.width(),pix.height());
      this->setStyleSheet("QPushButton{border:0px}");
      this->setIcon(pix);
      this->setIconSize(QSize(pix.width(),pix.height()));


  }

  void MyPushButton::zoomdown()
  {
        QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
        animation->setDuration(200);
        animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
        animation->setEndValue(QRect(this->x(),this->y()+4,this->width(),this->height()));
        animation->setEasingCurve(QEasingCurve::OutBounce);
        animation->start();
  }


 void MyPushButton::zoomup()
  {
     QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
     animation->setDuration(200);
     animation->setStartValue(QRect(this->x(),this->y()+4,this->width(),this->height()));
     animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
     animation->setEasingCurve(QEasingCurve::OutBounce);
     animation->start();

  }
