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



    //维修标记场景
    maintenance_mask * m_maskscence=NULL;

    //标记管理场景
    mask_management * m_managescence=NULL;

    //视频查询场景
    vedio_query *v_queryscence=NULL;

    //个人信息场景
    personal_inf * p_infscence=NULL;

    //用户管理场景
    user_management * u_managescence=NULL;

    //自动关闭widget窗体
   // void closeEvent(QCloseEvent *);

    //自定义槽函数
public slots:
    void selectitems(QTreeWidgetItem * ,int);



private:
    Ui::mainscence *ui;
};

#endif // MAINSCENCE_H
