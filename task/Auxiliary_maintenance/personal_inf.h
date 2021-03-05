#ifndef PERSONAL_INF_H
#define PERSONAL_INF_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>

namespace Ui {
class personal_inf;
}

class personal_inf : public QWidget
{
    Q_OBJECT

public:
    explicit personal_inf(QWidget *parent = nullptr);
    ~personal_inf();

public:
    //修改信息
    void modify_info();
    //申请账号
    void apply_for();
    //日期分解
    QString date_breakdown(QString);



signals:
    //本界面接受到信号
    void got_jobnum_per(QString);
    //发出已经修改信息的信号
    void modify_singal(QString);
public slots:
    //获取登录界面的用户信息
    void get_jobnum_per(QString);

    //初始化用户信息
    void init_info(QString);

    //提示信息
    void warning_job();


private:
    Ui::personal_inf *ui;
    QString jobnum_per;


};

#endif // PERSONAL_INF_H
