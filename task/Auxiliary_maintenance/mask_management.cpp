#include "mask_management.h"
#include "ui_mask_management.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QSqlDatabase>
#include "mypushbutton1.h"
#include <QSqlQuery>
#include <QMessageBox>
#include "mycombobox.h"
#pragma execution_character_set("utf-8")
mask_management::mask_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mask_management)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
//信息
    ui->gb_info->setFixedSize(700,880);
    ui->gb_info->move(240,10);
    ui->gb_show_info->setFixedSize(600,880);
    ui->gb_show_info->move(970,10);
    ui->parts_type->setContextMenuPolicy(Qt::CustomContextMenu);

//tree
     ui->treeWidget->setHeaderLabels(QStringList()<<"维修项目");
     ui->treeWidget->setFixedSize(240,880);
     ui->treeWidget->move(0,10);
     ui->treeWidget->setFont(QFont("微软雅黑",12,QFont::Bold));
     ui->treeWidget->setStyleSheet("QHeaderView::section{ color:white;  height:35px;  background-color:rgb(0,0,0,200);}"
                                    "QTreeView::item:hover{background-color:rgb(200,200,200,120);}"
                                    "QTreeView::item:selected{background: #1E90FF;}"
                                    "QTreeView::item{margin:5px;}"
                                    "QTreeView{background-color:rgb(200,200,200,100);}");

     connect(ui->btn_search_create,&MyPushButton1::clicked,this,[=]{
        ui->btn_search_create->zoomdown();
        ui->btn_search_create->zoomup();
        search_create_ass(ui->LE_assembly_name->text());
     });
     connect(ui->btn_add,&MyPushButton1::clicked,this,[=]{
        ui->btn_add->zoomdown();
        ui->btn_add->zoomup();
        addeditems();
     });
     connect(ui->btn_delete,&MyPushButton1::clicked,this,[=]{
        ui->btn_add->zoomdown();
        ui->btn_add->zoomup();
        de_part_produce();
     });
     structure_Tree(ui->treeWidget);
     connect(ui->parts_type,SIGNAL(currentIndexChanged(QString)),this,SLOT(combobox_valuechanged(QString)));
     connect(ui->procedure_type,SIGNAL(currentIndexChanged(QString)),this,SLOT(combobox_valuechanged(QString)));
     connect(ui->treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),this,SLOT(selectitems(QTreeWidgetItem*,int)));

}

//后续递归调用,工序
void mask_management::structure_Tree_produce(QString root, QTreeWidgetItem *item)
{

    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    query.exec(QString("select * from produce where upper_ID='%1';").arg(root));
    while (query.next())
        {
            int i=query.value("produce_ID").toString().lastIndexOf("-");
            QString n=query.value("produce_ID").toString().mid(i+1);
            QString PRODUCE_NAME = QString("工序%1:").arg(n)+query.value("produce_name").toString(); //获取名称
            //qDebug()<<PART_NAME;
            QString PRODUCE_ID = query.value("produce_ID").toString();   //获取ID
            //qDebug()<<PART_ID;
            QTreeWidgetItem *itemss = new QTreeWidgetItem(item,QStringList(QString(PRODUCE_NAME)));
            /*创建新的ITEM,插入到ITEM中，设置名称为当前查询到的部门名称*/
            if(! PRODUCE_NAME.isEmpty())
            {
              //structure_Tree_produce(PART_ID,items);   //递归，判断是否还有下级
            }

        }
        return;
}
//后续递归调用，插入到父亲节点
void mask_management::structure_Tree(QString root, QTreeWidgetItem *item)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    query.exec(QString("select * from parts where upper_ID='%1';").arg(root));
    while (query.next())
        {
            int i=query.value("part_ID").toString().lastIndexOf("-");
            QString n=query.value("part_ID").toString().mid(i+1);
            QString PART_NAME = QString("部件%1:").arg(n)+query.value("part_name").toString(); //获取部门名称
            qDebug()<<PART_NAME;
            QString PART_ID = query.value("part_ID").toString();   //获取部门ID
            qDebug()<<PART_ID;
            QTreeWidgetItem *items = new QTreeWidgetItem(item,QStringList(QString(PART_NAME)));
            /*创建新的ITEM,插入到ITEM中，设置名称为当前查询到的部门名称*/
            if(!PART_NAME.isEmpty())
            {
              structure_Tree_produce(PART_ID,items);   //递归，若传入查询到的部门，判断是否还有下级
            }

        }
        return;
}
//第一次插入，根节点，最高级
void mask_management::structure_Tree(QTreeWidget *tree)
{
    ui->treeWidget->clear();
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    query.exec("select * from assembly order by ID;");
    while(query.next())
    {
        QString OBJECT_NAME = query.value("object").toString();
        QString ID = query.value("ID").toString();
        QTreeWidgetItem *item = new QTreeWidgetItem(tree,QStringList(QString(OBJECT_NAME)));
        if(!OBJECT_NAME.isEmpty())
        {
            structure_Tree(ID,item);    //开启递归
        }
        return;
    }
}
//添加下拉菜单选项
void mask_management::addeditems()
{
    QMessageBox mess(QMessageBox::Information, tr("提醒"), tr("请选择要添加的类型！"));
    QPushButton *button1= (mess.addButton(tr("部件"), QMessageBox::YesRole));
    QPushButton *button2= (mess.addButton(tr("工序"), QMessageBox::NoRole));
    QPushButton *buttonCancel = (mess.addButton(tr("取消"), QMessageBox::RejectRole));
    mess.exec();
    if(mess.clickedButton() == button1)
    {
        int n=ui->parts_type->count();
        QString num=QString("%1").arg(n+1);
        QString kind=ui->parts_type->itemText(0).mid(0,2);
        QString str=kind+num;
        ui->parts_type->addItem(str);
        ui->parts_type->setCurrentIndex(n);
        ui->LE_parts_name->clear();
        ui->parts->clear();
        ui->LE_procedure_name->clear();
        ui->produce->clear();
        ui->text_info->clear();
        QMessageBox::information(this, "提示",QString("成功添加'%1'").arg(str));
    }
    else if (mess.clickedButton() == button2)
    {
        int n=ui->procedure_type->count();
        QString num=QString("%1").arg(n+1);
        QString kind=ui->procedure_type->itemText(0).mid(0,2);
        QString str=kind+num;
        ui->procedure_type->addItem(str);
        ui->procedure_type->setCurrentIndex(n);
        ui->LE_procedure_name->clear();
        ui->produce->clear();
        ui->text_info->clear();
        QMessageBox::information(this, "提示",QString("成功添加'%1'").arg(str));
    }
    else if(mess.clickedButton() == buttonCancel)
    {
        return;
    }


}
//清理有关下拉菜单改变的UI值
void mask_management::combobox_valuechanged(QString str)
{
  str=str.mid(0,2);
  if(str=="部件")
  {
      ui->LE_parts_name->clear();
      ui->LE_procedure_name->clear();
      ui->parts->clear();
      ui->produce->clear();
      ui->text_info->clear();
  }
  else if (str=="工序")
  {
      ui->LE_procedure_name->clear();
      ui->produce->clear();
      ui->text_info->clear();
  }
}
//清理界面
void mask_management::clearUI()
{
    ui->LE_assembly_name->clear();
    ui->LE_parts_name->clear();
    ui->LE_procedure_name->clear();
    ui->assembly->clear();
    ui->parts->clear();
    ui->produce->clear();
    ui->text_info->clear();
}
//分解
QString mask_management::break_down_choice(QString str)
{
    QString num;
    if(str.indexOf("部件")==0)
    {
        int n=str.lastIndexOf("件");
        num=str.mid(n+1);
        qDebug()<<num;
    }
    else {
        int n=str.lastIndexOf("序");
        num=str.mid(n+1);
        qDebug()<<num;
    }
    return num;
}
//是否存在
bool mask_management::is_exist(QString assembly_name,QString parts_name,QString profuce_name)
{
    QString is_exist;
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    is_exist=QString("select * from assembly where object = '%1';").arg(assembly_name);
    query.exec(is_exist);
    if(query.first())
    {
        Object=true;
        ui->assembly->setText(assembly_name);
        ui->LE_assembly_name->setText(assembly_name);
        QString assembly_num=query.value("ID").toString();
        QString parts_num=assembly_num+"-"+break_down_choice(parts_name);
        is_exist=QString("select * from parts where part_ID = '%1';").arg(parts_num);
        query.exec(is_exist);
        if(query.first())
        {
            Part=true;
            ui->LE_parts_name->setText(query.value("part_name").toString());
            ui->parts->setText(query.value("part_name").toString());
            QString produce_num=parts_num+"-"+break_down_choice(profuce_name);
            is_exist=QString("select * from produce where produce_ID = '%1';").arg(produce_num);
            query.exec(is_exist);
            if(query.first())
            {
               Produce=true;
               ui->LE_procedure_name->setText(query.value("produce_name").toString());
               ui->produce->setText(query.value("produce_name").toString());
               ui->text_info->setText(query.value("pro_text").toString());
               return true;
            }
            else
            {
                //clearUI();
                QMessageBox::information(this, "提示",QString ("对不起，%1中%2不存在%3。").arg(assembly_name).arg(parts_name).arg(ui->procedure_type->currentText()));
                //ui->produce->clear();
                Produce=false;
                return false;
            }

        }
        else
        {
           // clearUI();
            QMessageBox::information(this, "提示",QString ("对不起，%1没有对象%2。").arg(assembly_name).arg(ui->parts_type->currentText()));
           // ui->parts->clear();
            //ui->produce->clear();
            Part=false;
            Produce=false;
            return false;
        }
    }
    else
    {
       //clearUI();
       QMessageBox::information(this, "提示","对不起，没有此对象。");
       //clearUI();
       Object=false;
       Part=false;
       Produce=false;
       return false;
    }

}
//搜索或创建
void mask_management::search_create_ass(QString assembly_name)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    if(is_exist(ui->LE_assembly_name->text(),ui->parts_type->currentText(),ui->procedure_type->currentText()))
    {
       qDebug()<<"存在";
    }
    else
    {
        //question
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "提示","对不起，数据库中没有此对象！是否需要创建？", QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            qDebug()<<"yes创建新对象";

            if(ui->LE_assembly_name->text()==""||ui->LE_procedure_name->text()==""||ui->LE_parts_name->text()==""||ui->text_info->document()->isEmpty())
            {

                qDebug()<<ui->LE_assembly_name->text()<<ui->LE_procedure_name->text()<<ui->LE_parts_name->text()<<ui->text_info->toPlainText();
                QMessageBox::information(this, "提示","对不起，请正确填写相关信息！");
            }
            else
            {
                    QString info=ui->text_info->toPlainText();
                    if(!Object)
                    {
                        QString assembly=QString("INSERT INTO assembly VALUES(NULL,'%1');").arg(assembly_name);
                        query.exec(assembly);
                    }
                    QString assembly_order=QString("select * from assembly where object = '%1';").arg(assembly_name);
                    query.exec(assembly_order);
                    if(query.first())
                    {
                        QString assemly_ID=query.value("ID").toString();

                        QString part_ID=assemly_ID+"-"+break_down_choice(ui->parts_type->currentText());
                        QString produce_ID=part_ID+"-"+break_down_choice(ui->procedure_type->currentText());
                        if(!Part){
                            if(break_down_choice(ui->parts_type->currentText()).toInt()==1)
                            {
                                QString part_order=QString("INSERT INTO parts VALUES('%1','%2','%3');").arg(ui->LE_parts_name->text())\
                                        .arg(part_ID).arg(assemly_ID);
                                query.exec(part_order);
                            }
                            else
                            {
                                int n=break_down_choice(ui->parts_type->currentText()).toInt()-1;
                                //qDebug()<<n;
                                QString part_ID_last=assemly_ID+"-"+QString("%1").arg(n);
                                QString part_ID_last_order=QString("select * from parts where part_ID = '%1';").arg(part_ID_last);
                                query.exec(part_ID_last_order);
                                if(query.first())
                                {
                                    QString part_order=QString("INSERT INTO parts VALUES('%1','%2','%3');").arg(ui->LE_parts_name->text())\
                                            .arg(part_ID).arg(assemly_ID);
                                    query.exec(part_order);
                                }
                                else
                                {
                                    QMessageBox::information(this, "提示",QString("请按次序创建部件!"));
                                    return;
                                }

                            }

                        }
                        if(!Produce)
                        {
                            if(break_down_choice(ui->procedure_type->currentText()).toInt()==1)
                            {
                                QString produce_order=QString("INSERT INTO produce VALUES('%1','%2','%3','%4','%5');")\
                                        .arg(ui->LE_procedure_name->text()).arg(produce_ID).arg(assemly_ID).arg(part_ID).arg(ui->text_info->toPlainText());
                                query.exec(produce_order);
                                structure_Tree(ui->treeWidget);
                            }
                            else
                            {
                                int n=break_down_choice(ui->procedure_type->currentText()).toInt()-1;
                               // qDebug()<<n;
                                QString produce_ID_last=part_ID+"-"+QString("%1").arg(n);
                                QString produce_ID_last_order=QString("select * from produce where produce_ID = '%1';").arg(produce_ID_last);
                                query.exec(produce_ID_last_order);
                                if(query.first())
                                {
                                    QString produce_order=QString("INSERT INTO produce VALUES('%1','%2','%3','%4','%5');")\
                                            .arg(ui->LE_procedure_name->text()).arg(produce_ID).arg(assemly_ID).arg(part_ID).arg(ui->text_info->toPlainText());
                                    query.exec(produce_order);
                                    structure_Tree(ui->treeWidget);
                                }
                                else
                                {
                                    QMessageBox::information(this, "提示",QString("请按次序创建工序!"));
                                    return;
                                }
                            }

                        }
                    }else
                    {
                      qDebug()<<"创建失败！";
                      return;
                    }

                    QMessageBox::information(this, "提示",QString("成功创建!"));
                    search_create_ass(ui->assembly->text());
                    return;
            }
        }
        else
        {
             //qDebug()<<"No";
            if(Object==false)
            {
               clearUI();
            }
            else if (Object==true&&Part==false)
            {
               ui->LE_parts_name->clear();
               ui->LE_procedure_name->clear();
               ui->parts->clear();
               ui->produce->clear();
               ui->text_info->clear();
            }
            else if (Object==true&&Part==true&&Produce==false)
            {
                ui->LE_procedure_name->clear();
                ui->produce->clear();
                ui->text_info->clear();
            }
            return;
        }
    }
}
//删除
void mask_management::de_part_produce()
{
    if(ui->assembly->text()==""&&ui->parts->text()==""&&ui->produce->text()=="")
    {
      QMessageBox::information(this,"提示","请先搜索或创建要删除的对象！");
      return;
    }
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    QMessageBox mess(QMessageBox::Information, tr("提醒"), tr("请选择要删除的类型！"));
    QPushButton *button1= (mess.addButton(tr("装配体"), QMessageBox::YesRole));
    QPushButton *button2= (mess.addButton(tr("部件"), QMessageBox::ActionRole));
    QPushButton *button3 = (mess.addButton(tr("工序"), QMessageBox::HelpRole));
    mess.addButton(QMessageBox::No);
    mess.button(QMessageBox::No)->setHidden(true);
    mess.exec();
    QString assembly_order=QString("select * from assembly where object = '%1';").arg(ui->assembly->text());
    query.exec(assembly_order);
    QString assembly_ID;
    QString part_ID;
    if(query.first())
    {
       assembly_ID=query.value("ID").toString();
        //qDebug()<<assembly_ID<<"zhuangpei";
    }
    //装配体
    if(mess.clickedButton() == button1)
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "提示","确定删除有关此装配体有关的数据吗？", QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            query.exec(QString("delete from assembly where object = '%1';").arg(ui->assembly->text()));
            query.exec(QString("delete from parts where upper_ID = '%1';").arg(assembly_ID));
            query.exec(QString("delete from produce where root_ID = '%1';").arg(assembly_ID));
            QMessageBox::information(this, "提示",QString("成功删除%1").arg(ui->assembly->text()));
            structure_Tree(ui->treeWidget);
            clearUI();
            return;
        }
        else if(reply == QMessageBox::No)
        {
            return;
        }
    }
    else if (mess.clickedButton() == button2)
    {
        if(ui->parts->text()=="")
        {
          QMessageBox::information(this, "提示",QString("部件不存在，请重新搜索或创建！"));
          return;
        }
        else
        {
            part_ID=assembly_ID+"-"+break_down_choice(ui->parts_type->currentText());
            //qDebug()<<part_ID<<"bujian";
            query.exec(QString("select * from parts where part_ID = '%1';").arg(part_ID));
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "提示","确定删除有关此部件有关的数据吗？", QMessageBox::Yes | QMessageBox::No);
            if(reply == QMessageBox::Yes)
            {
                query.exec(QString("delete from parts where part_ID = '%1';").arg(part_ID));
                query.exec(QString("delete from produce where upper_ID = '%1';").arg(part_ID));
                QMessageBox::information(this, "提示",QString("成功删除%1").arg(ui->parts->text()));
                structure_Tree(ui->treeWidget);
                ui->LE_parts_name->clear();
                ui->LE_procedure_name->clear();
                ui->parts->clear();
                ui->produce->clear();
                ui->text_info->clear();
                return;
            }
           else if(reply == QMessageBox::No)
           {
               return;
           }
        }
    }
    else if(mess.clickedButton() == button3)
    {
        if(ui->produce->text()=="")
        {
          QMessageBox::information(this, "提示",QString("工序不存在，请重新搜索或创建！"));
          return;
        }
        else
        {
          QMessageBox::StandardButton reply;
          reply = QMessageBox::question(this, "提示","确定删除有关此工序有关的数据吗？", QMessageBox::Yes | QMessageBox::No);
          if(reply == QMessageBox::Yes)
          {
              part_ID=assembly_ID+"-"+break_down_choice(ui->parts_type->currentText());
              QString produce_ID=part_ID+"-"+break_down_choice(ui->procedure_type->currentText());
              //qDebug()<<produce_ID<<"gonxun";
              query.exec(QString("delete from produce where produce_ID = '%1';").arg(produce_ID));
              QMessageBox::information(this, "提示",QString("成功删除%1").arg(ui->produce->text()));
              structure_Tree(ui->treeWidget);
              ui->LE_procedure_name->clear();
              ui->produce->clear();
              ui->text_info->clear();
              return;
          }
          else if(reply == QMessageBox::No)
          {
              return;
          }

        }
    }
}
//tree对象选择
void mask_management::selectitems(QTreeWidgetItem *in1 ,int in2)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    //qDebug()<<in1->parent()<<"11111";
    if(!in1->parent())
    {
      //qDebug()<<in1->parent()<<"lie";
        clearUI();
        ui->assembly->setText(in1->text(in2));
        ui->LE_assembly_name->setText(in1->text(in2));
    }
    else if (in1->text(in2).mid(0,2)=="部件")
    {
        clearUI();
        QString part_ID;
        int n1=in1->text(in2).lastIndexOf(":");
        QString num=in1->text(in2).mid(2,n1-2);
        int n=num.toInt();
        if(ui->parts_type->count()>=n)
        {
           ui->parts_type->setCurrentIndex(n-1);
        }
        else
        {
           int i=ui->parts_type->count();
           //qDebug()<<i<<"geshu";
           while(ui->parts_type->count()<n)
           {
               ui->parts_type->addItem(QString("部件%1").arg(i+1));
               qDebug()<<QString("部件%1").arg(i+1);
               i++;
           }
           ui->parts_type->setCurrentIndex(n-1);
        }
        query.exec(QString("select * from assembly where object = '%1';").arg(in1->parent()->text(in2)));
        if(query.first())
        {
           part_ID=query.value("ID").toString()+"-"+num;
        }
        query.exec(QString("select * from parts where part_ID = '%1';").arg(part_ID));
        if(query.first())
        {
           ui->LE_parts_name->setText(query.value("part_name").toString());
           ui->parts->setText(query.value("part_name").toString());
           ui->assembly->setText(in1->parent()->text(in2));
           ui->LE_assembly_name->setText(in1->parent()->text(in2));
        }
    }
    else if (in1->text(in2).mid(0,2)=="工序")
    {
        clearUI();
        QString produce_ID;
        int n1=in1->parent()->text(in2).lastIndexOf(":");
        QString part_name=in1->parent()->text(in2).mid(n1+1);
        QString part_num=in1->parent()->text(in2).mid(2,n1-2);
        int n2=in1->text(in2).lastIndexOf(":");
        QString produce_num=in1->text(in2).mid(2,n2-2);
        int n4=produce_num.toInt();
        int n3=part_num.toInt();
        if(ui->parts_type->count()>=n3)
        {
           ui->parts_type->setCurrentIndex(n3-1);
        }
        else
        {
           int i=ui->parts_type->count();
           while(ui->parts_type->count()<n3)
           {
               ui->parts_type->addItem(QString("部件%1").arg(i+1));
               qDebug()<<QString("部件%1").arg(i+1);
               i++;
           }
           ui->parts_type->setCurrentIndex(n3-1);
        }
        if(ui->procedure_type->count()>=n4)
        {
           ui->procedure_type->setCurrentIndex(n4-1);
        }
        else
        {
           int i=ui->procedure_type->count();
           while(ui->procedure_type->count()<n4)
           {
               ui->procedure_type->addItem(QString("工序%1").arg(i+1));
               qDebug()<<QString("部件%1").arg(i+1);
               i++;
           }
           ui->procedure_type->setCurrentIndex(n4-1);
        }
        query.exec(QString("select * from assembly where object = '%1';").arg(in1->parent()->parent()->text(in2)));
        if(query.first())
        {
          produce_ID=query.value("ID").toString()+"-"+part_num+"-"+produce_num;
        }
        query.exec(QString("select * from produce where produce_ID = '%1';").arg(produce_ID));
        if(query.first())
        {
           ui->LE_procedure_name->setText(query.value("produce_name").toString());
           ui->produce->setText(query.value("produce_name").toString());
           ui->assembly->setText(in1->parent()->parent()->text(in2));
           ui->LE_assembly_name->setText(in1->parent()->parent()->text(in2));
           ui->parts->setText(part_name);
           ui->LE_parts_name->setText(part_name);
           ui->text_info->setText(query.value("pro_text").toString());
        }
    }
}
mask_management::~mask_management()
{
    delete ui;
}
