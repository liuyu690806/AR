#ifndef MAINSCENCE_H
#define MAINSCENCE_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QTreeWidget>
#include "maintenance_mask.h"
#include "mask_management.h"
#include "vedio_query.h"
#include "personal_inf.h"
#include "user_management.h"
#include <QCloseEvent>
#pragma execution_character_set("utf-8")
namespace Ui {
class mainscence;
}

class mainscence : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainscence(QWidget *parent = nullptr);
    ~mainscence();
    //屏幕大小
     QRect screenRect;
     void closeEvent(QCloseEvent *event);    // 重写closeEvent的申明



signals:
    void send_jobnum_main_to_pinfo(QString);

private:
    //维修标记场景
    maintenance_mask * m_maskscence;

    //标记管理场景
    mask_management * m_managescence;

    //视频查询场景
    vedio_query *v_queryscence;

    //个人信息场景
    personal_inf * p_infscence;

    //用户管理场景
    user_management * u_managescence;

    //登录用户信息
    QString job_num;
    QString job;
    //场景
    QString scence;




    //自动关闭widget窗体
   // void closeEvent(QCloseEvent *);

    //自定义槽函数
public slots:
    //tree对象选择
    void selectitems1(QTreeWidgetItem * ,int);
    //获取sign_in界面的工号
    void get_jobnum(QString);
    //获取sign_in界面的工作
    void get_job(QString);
    //申请账号进入个人信息收集界面
    void get_personal_inf(QString);
    //接受personal_info的修改信息
    void get_modify_personal_inf(QString);



private:
    Ui::mainscence *ui;

};

#endif // MAINSCENCE_H
