#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QMainWindow>
#include "mainscence.h"

namespace Ui {
class Sign_in;
}

class Sign_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sign_in(QWidget *parent = nullptr);
    ~Sign_in();

    //重写paintEvent事件，画背景图
    void paintEvent(QPaintEvent *);

    mainscence * M_scence1=NULL;






private:
    Ui::Sign_in *ui;
};

#endif // SIGN_IN_H
