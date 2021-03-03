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


signals:
    //本界面接受到信号
    void got_jobnum_per(QString);
public slots:
    //获取登录界面的用户信息
    void get_jobnum_per(QString);
    //void get_job_per(QString);
    //初始化用户信息
    void init_info(QString);
private:
    Ui::personal_inf *ui;
    QString jobnum_per;
   // QString job_per;

};

#endif // PERSONAL_INF_H
