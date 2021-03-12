#ifndef MASK_MANAGEMENT_H
#define MASK_MANAGEMENT_H

#include <QWidget>
#include <QTreeWidget>

namespace Ui {
class mask_management;
}

class mask_management : public QWidget
{
    Q_OBJECT
public:
    explicit mask_management(QWidget *parent = nullptr);
    ~mask_management();
    //创建、搜索装配体
    void search_create_ass(QString);
    //是否存在
    bool is_exist(QString,QString,QString);
    //分解
    QString break_down_choice(QString);
    //
    void clearUI();
    //结构表
    void structure_Tree(QString root, QTreeWidgetItem *item);  //后续递归调用，插入到父亲节点
    void structure_Tree(QTreeWidget *tree);       //第一次插入，根节点，最高级部门
    void structure_Tree_produce(QString root, QTreeWidgetItem *item);


public slots:
    //增加部件，工序选项
    void addeditems();
    //删除部件，工序选项
    void de_part_produce();
    //下拉菜单选项改变时，清理UI
    void combobox_valuechanged(QString);
    //tree对象选择
    void selectitems(QTreeWidgetItem * ,int);


private:
    Ui::mask_management *ui;
    bool Object;
    bool Part;
    bool Produce;
};

#endif // MASK_MANAGEMENT_H
