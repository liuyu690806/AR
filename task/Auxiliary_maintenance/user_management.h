#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <QWidget>

namespace Ui {
class user_management;
}

class user_management : public QWidget
{
    Q_OBJECT

public:
    explicit user_management(QWidget *parent = nullptr);
    ~user_management();

    //搜索结果
    void search(QString);
    //删除
    void delete_info();
    //修改
    void modify_info();
    //日期分解
    QString date_breakdown(QString);
    //清理UI
    void clearUI();
    //操作记录
    void show_operation_record(QString);




private:
    Ui::user_management *ui;
    QString jobnum_from_search;
    QString jobname_from_search;
};

#endif // USER_MANAGEMENT_H
