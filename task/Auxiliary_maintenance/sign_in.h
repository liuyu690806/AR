#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QMainWindow>
#include "mainscence.h"
#include "personal_inf.h"

namespace Ui {
class Sign_in;
}

class Sign_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sign_in(QWidget *parent = nullptr);
    ~Sign_in();
    //数据库加载
    void connect_mysql();
    //清空用户名和密码
    void clearUI();

    //重写paintEvent事件，画背景图
    void paintEvent(QPaintEvent *);
    void login();

signals:
    void send_job(QString);
    void send_jobnum(QString);


private slots:
    //登录槽函数
    //void login();
    //界面重现
    void reshow();
    //处理申请账号的信号，进入个人信息界面
    void getpersonal_info();





private:
    mainscence * M_scence1=NULL;
    personal_inf * p_infscence=NULL;
    QString job;
    QString user_name;
    QString job_num;






private:
    Ui::Sign_in *ui;
};

#endif // SIGN_IN_H
