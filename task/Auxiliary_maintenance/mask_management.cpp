#include "mask_management.h"
#include "ui_mask_management.h"
#include <QDesktopWidget>
#include <QDebug>
#include <QSqlDatabase>
#include "mypushbutton1.h"
#include <QSqlQuery>
#include <QMessageBox>
#include "mycombobox.h"
#include <QFileDialog>
#include <QPainter>
#include <QImage>
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
     ui->treeWidget->header()->setMinimumSectionSize(240);
     QHeaderView *pHeader=ui->treeWidget->header();
     pHeader->setSectionResizeMode(QHeaderView::ResizeToContents);
     pHeader->setStretchLastSection(false);
     ui->treeWidget->move(0,10);
     ui->treeWidget->setFont(QFont("微软雅黑",12,QFont::Bold));
     ui->treeWidget->setStyleSheet("QHeaderView::section{ color:white;  height:35px;  background-color:rgb(0,0,0,200);}"
                                    "QTreeView::item:hover{background-color:rgb(200,200,200,120);}"
                                    "QTreeView::item:selected{background: #1E90FF;}"
                                    "QTreeView::item{margin:5px;}"
                                    "QTreeView{background-color:rgb(200,200,200,100);}");

     structure_Tree(ui->treeWidget);
     ui->LB_image->installEventFilter(this);
     ui->LB_image->setStyleSheet("QLabel{border:1px solid rgb(220, 220, 220);}");
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
     connect(ui->btn_modify_text,&MyPushButton1::clicked,this,[=]{
        ui->btn_modify_text->zoomdown();
        ui->btn_modify_text->zoomup();
        modify_text();
     });
     connect(ui->btn_choosefile,&MyPushButton1::clicked,this,[=]{
        ui->btn_choosefile->zoomdown();
        ui->btn_choosefile->zoomup();
        choosefile();
     });
     connect(ui->btn_search_create_2,&MyPushButton1::clicked,this,[=]{
        ui->btn_search_create_2->zoomdown();
        ui->btn_search_create_2->zoomup();
        search_create_imgspare();
     });
     connect(ui->btn_add_2,&MyPushButton1::clicked,this,[=]{
        ui->btn_add_2->zoomdown();
        ui->btn_add_2->zoomup();
        additems_img_spare();
     });
     connect(ui->btn_delete_2,&MyPushButton1::clicked,this,[=]{
        ui->btn_delete_2->zoomdown();
        ui->btn_delete_2->zoomup();
        de_img_spare();
     });
     connect(ui->btn_ok,&MyPushButton1::clicked,this,[=]{
        ui->btn_ok->zoomdown();
        ui->btn_ok->zoomup();
        tableshow();
     });

     connect(ui->parts_type,SIGNAL(currentIndexChanged(QString)),this,SLOT(combobox_valuechanged(QString)));
     connect(ui->procedure_type,SIGNAL(currentIndexChanged(QString)),this,SLOT(combobox_valuechanged(QString)));
     connect(ui->info_type,SIGNAL(currentIndexChanged(QString)),this,SLOT(combobox_valuechanged(QString)));
     connect(ui->number,SIGNAL(currentIndexChanged(QString)),this,SLOT(combobox_valuechanged(QString)));
     connect(ui->treeWidget,SIGNAL(itemDoubleClicked(QTreeWidgetItem*,int)),this,SLOT(selectitems(QTreeWidgetItem*,int)));

}

//分解
QString mask_management::break_down_choice(QString str)
{
    QString num;
    if(str.indexOf("部件")==0)
    {
        int n=str.lastIndexOf("件");
        num=str.mid(n+1);
       // qDebug()<<num;
    }
    else if(str.indexOf("工序")==0)
    {
        int n=str.lastIndexOf("序");
        num=str.mid(n+1);
       // qDebug()<<num;
    }
    else if(str.indexOf("编号")==0)
    {
        int n=str.lastIndexOf("号");
        num=str.mid(n+1);
    }
    return num;
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
    ui->LE_file_path->clear();
     ui->LB_image->clear();
    ui->LE_spa_img_name->clear();
}
//获得主编号
QString mask_management::get_mainID(QString assembly, QString part, QString produce)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    QString assembly_ID;
    query.exec(QString("select * from assembly where object='%1';").arg(assembly));
    if(query.first())
    {
        assembly_ID=query.value("ID").toString();
    }
    QString ID=assembly_ID+"-"+break_down_choice(part)+"-"+break_down_choice(produce);
    return ID;
}
//后续递归调用,零件和图片
void mask_management::structure_Tree_imgandspare(QString root, QTreeWidgetItem *item)
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    query.exec(QString("select * from spare_parts where sp_upper_ID='%1';").arg(root));
    while (query.next())
    {
        int i=query.value("sp_ID").toString().lastIndexOf("-");
        int j=query.value("sp_ID").toString().lastIndexOf("s");
        QString n=query.value("sp_ID").toString().mid(i+1,j-i-1);
        QString SP_NAME = QString("零件%1:").arg(n)+query.value("sp_name").toString();
        QTreeWidgetItem *item_1 = new QTreeWidgetItem(item);
        item_1->setText(0,SP_NAME);
    }
    query.exec(QString("select * from img where img_upper_ID='%1';").arg(root));
    while (query.next())
   {
       int i=query.value("img_ID").toString().lastIndexOf("-");
       int j=query.value("img_ID").toString().lastIndexOf("m");
       QString n=query.value("img_ID").toString().mid(i+1,j-i-1);
       QString IMG_NAME = QString("图片%1:").arg(n)+query.value("img_name").toString();
       QTreeWidgetItem *item_2 = new QTreeWidgetItem(item);
       item_2->setText(0,IMG_NAME);
    }
    return;
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
              structure_Tree_imgandspare(PRODUCE_ID,itemss);   //递归，判断是否还有下级
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
        return;
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
        return;
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
      ui->LE_file_path->clear();
      ui->LE_spa_img_name->clear();
  }
  else if (str=="工序")
  {
      ui->LE_procedure_name->clear();
      ui->produce->clear();
      ui->text_info->clear();
      ui->LE_file_path->clear();
      ui->LE_spa_img_name->clear();
  }
  else if(str=="零件"||str=="图片"||str=="编号")
  {
      ui->LE_file_path->clear();
      ui->LE_spa_img_name->clear();
  }
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
                //qDebug()<<ui->LE_assembly_name->text()<<ui->LE_procedure_name->text()<<ui->LE_parts_name->text()<<ui->text_info->toPlainText();
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
            query.exec(QString("delete from img where root_ID = '%1';").arg(assembly_ID));
            query.exec(QString("delete from spare_parts where root_ID = '%1';").arg(assembly_ID));
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
            query.exec(QString("select * from parts where part_ID = '%1';").arg(part_ID));
            QMessageBox::StandardButton reply;
            reply = QMessageBox::question(this, "提示","确定删除有关此部件有关的数据吗？", QMessageBox::Yes | QMessageBox::No);
            if(reply == QMessageBox::Yes)
            {
                query.exec(QString("delete from parts where part_ID = '%1';").arg(part_ID));
                query.exec(QString("select * from produce where upper_ID = '%1';").arg(part_ID));
                QStringList delete_ID;
                if(query.next())
                {
                    delete_ID<<query.value("produce_ID").toString();
                }
                int i=0;
                while(i<delete_ID.count())
                {
                   query.exec(QString("delete from img where img_upper_ID = '%1';").arg(delete_ID[i]));
                   query.exec(QString("delete from spare_parts where sp_upper_ID = '%1';").arg(delete_ID[i]));
                   qDebug()<<delete_ID[i]<<"第几个";
                   i++;
                }
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
              query.exec(QString("delete from produce where produce_ID = '%1';").arg(produce_ID));
              query.exec(QString("delete from img where img_upper_ID = '%1';").arg(produce_ID));
              query.exec(QString("delete from spare_parts where sp_upper_ID = '%1';").arg(produce_ID));
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
    if(!in1->parent())
    {
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
           while(ui->parts_type->count()<n)
           {
               ui->parts_type->addItem(QString("部件%1").arg(i+1));
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
    else if (in1->text(in2).mid(0,2)=="零件"||in1->text(in2).mid(0,2)=="图片")
    {
        clearUI();
        QString produce_ID;
        int n1=in1->parent()->parent()->text(in2).lastIndexOf(":");
        QString part_name=in1->parent()->parent()->text(in2).mid(n1+1);
        QString part_num=in1->parent()->parent()->text(in2).mid(2,n1-2);
        int n2=in1->parent()->text(in2).lastIndexOf(":");
        QString produce_num=in1->parent()->text(in2).mid(2,n2-2);
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
               i++;
           }
           ui->procedure_type->setCurrentIndex(n4-1);
        }
        query.exec(QString("select * from assembly where object = '%1';").arg(in1->parent()->parent()->parent()->text(in2)));
        if(query.first())
        {
          produce_ID=query.value("ID").toString()+"-"+part_num+"-"+produce_num;
        }
        query.exec(QString("select * from produce where produce_ID = '%1';").arg(produce_ID));
        if(query.first())
        {
           ui->LE_procedure_name->setText(query.value("produce_name").toString());
           ui->produce->setText(query.value("produce_name").toString());
           ui->assembly->setText(in1->parent()->parent()->parent()->text(in2));
           ui->LE_assembly_name->setText(in1->parent()->parent()->parent()->text(in2));
           ui->parts->setText(part_name);
           ui->LE_parts_name->setText(part_name);
           ui->text_info->setText(query.value("pro_text").toString());
        }
        if(in1->text(in2).mid(0,2)=="零件")
        {
            int n5=in1->text(in2).mid(2,in1->text(in2).lastIndexOf(":")-2).toInt();
            QString ID= produce_ID+"-"+in1->text(in2).mid(2,in1->text(in2).lastIndexOf(":")-2)+"s";
            if(ui->number->count()>=n5)
            {
               ui->number->setCurrentIndex(n5-1);
            }
            else
            {
               int i=ui->number->count();
               while(ui->number->count()<n5)
               {
                   ui->number->addItem(QString("编号%1").arg(i+1));

                   i++;
               }
               ui->number->setCurrentIndex(n5-1);
            }
            query.exec(QString("select * from spare_parts where sp_ID = '%1';").arg(ID));
            if(query.first())
            {
              ui->info_type->setCurrentIndex(1);
              ui->LE_spa_img_name->setText(in1->text(in2).mid(in1->text(in2).lastIndexOf(":")+1));
            }
        }
        else if (in1->text(in2).mid(0,2)=="图片")
        {
            int n6=in1->text(in2).mid(2,in1->text(in2).lastIndexOf(":")-2).toInt();
            QString ID= produce_ID+"-"+in1->text(in2).mid(2,in1->text(in2).lastIndexOf(":")-2)+"m";
            if(ui->number->count()>=n6)
            {
               ui->number->setCurrentIndex(n6-1);
            }
            else
            {
               int i=ui->number->count();
               while(ui->number->count()<n6)
               {
                   ui->number->addItem(QString("编号%1").arg(i+1));

                   i++;
               }
               ui->number->setCurrentIndex(n6-1);
            }
            query.exec(QString("select * from img where img_ID = '%1';").arg(ID));
            if(query.first())
            {
              ui->info_type->setCurrentIndex(0);
              ui->LE_spa_img_name->setText(in1->text(in2).mid(in1->text(in2).lastIndexOf(":")+1));
              paint_img_spare(query.value("image").toString());
            }
        }
    }

}
//修改文本
void mask_management::modify_text()
{
    if(ui->assembly->text()!=""&&ui->parts->text()!=""&&ui->produce->text()!=""&&!(ui->text_info->document()->isEmpty()))
    {
        QString produce_ID=get_mainID(ui->assembly->text(),ui->parts_type->currentText(),ui->procedure_type->currentText());
        QSqlDatabase db1 = QSqlDatabase::database("arsystem");
        QSqlQuery query(db1);
        query.exec(QString("update produce set pro_text ='%1' where produce_ID='%2';").arg(ui->text_info->toPlainText()).arg(produce_ID));
        QMessageBox::information(this,"提示","修改成功！");
        return;
    }
    else
    {
       QMessageBox::information(this,"提示","对不起，请先搜索或创建相应的工序及文本信息等对象！");
       return;
    }
}
//零件，图片信息的创建
void mask_management::search_create_imgspare()
{
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    if(ui->assembly->text()!=""&&ui->parts->text()!=""&&ui->produce->text()!="")
    {
        QString produce_ID=get_mainID(ui->assembly->text(),ui->parts_type->currentText(),ui->procedure_type->currentText());
        if(ui->info_type->currentText()=="零件信息")
        {
            //零件
            QString spare_ID=produce_ID+"-"+break_down_choice(ui->number->currentText())+"s";
            query.exec(QString("select * from spare_parts where sp_ID='%1';").arg(spare_ID));
            if(query.first())
            {
                ui->LE_spa_img_name->setText(query.value("sp_name").toString());
                return;
            }
            else
            {
                QMessageBox::StandardButton reply;
                reply = QMessageBox::question(this, "提示","对不起，数据库中没有此对象！是否需要创建？", QMessageBox::Yes | QMessageBox::No);
                if(reply == QMessageBox::Yes)
                {
                    if(ui->LE_file_path->text()==""||ui->LE_spa_img_name->text()=="")
                    {
                        QMessageBox::information(this,"提示","对不起，请先填写零件名及选取文件地址！");
                    }
                    else
                    {
                         int n=break_down_choice(ui->number->currentText()).toInt()-1;
                         if(n!=0)
                         {
                           QString ID_check=produce_ID+"-"+QString("%1").arg(n)+"s";
                           query.exec(QString("select * from spare_parts where sp_ID='%1';").arg(ID_check));
                           if(!query.first())
                           {
                              QMessageBox::information(this,"提示","请按次序创建零件信息！");
                              return;
                           }
                         }
                         QFileInfo info(ui->LE_file_path->text());
                         QFile file(ui->LE_file_path->text());
                         QString newpath=qApp->applicationDirPath()+QString("/model");
                         QDir dir(newpath);
                         if(!dir.exists())
                          {
                            dir.cd(qApp->applicationDirPath()+QString("/"));
                            dir.mkdir(newpath);
                          }
                         newpath+=QString("/");
                         newpath+=info.fileName();
                         file.copy(newpath);
                         file.close();
                         query.exec(QString("INSERT INTO spare_parts VALUES('%1','%2','%3','%4','%5');")\
                                    .arg(ui->LE_spa_img_name->text()).arg(spare_ID.mid(0,spare_ID.indexOf("-"))).arg(produce_ID)\
                                    .arg(newpath).arg(spare_ID));
                         QMessageBox::information(this,"提示","创建成功！");
                         structure_Tree(ui->treeWidget);
                         ui->LE_file_path->clear();
                         ui->LB_image->clear();
                         return;
                    }
                }
                else
                {
                  ui->LE_spa_img_name->clear();
                  ui->LE_file_path->clear();
                  ui->LB_image->clear();
                  return;
                }
            }

        }
        else
        {
            //图片
            QString img_ID=produce_ID+"-"+break_down_choice(ui->number->currentText())+"m";
            query.exec(QString("select * from img where img_ID='%1';").arg(img_ID));
            if(query.first())
            {
                ui->LE_spa_img_name->setText(query.value("img_name").toString());
                return;
            }
            else
            {
                QMessageBox::StandardButton reply;
                reply = QMessageBox::question(this, "提示","对不起，数据库中没有此对象！是否需要创建？", QMessageBox::Yes | QMessageBox::No);
                if(reply == QMessageBox::Yes)
                {
                    if(ui->LE_file_path->text()==""||ui->LE_spa_img_name->text()=="")
                    {
                        QMessageBox::information(this,"提示","对不起，请先填写图片名及选取文件地址！");
                    }
                    else
                    {
                        int n=break_down_choice(ui->number->currentText()).toInt()-1;
                        if(n!=0)
                        {
                          QString ID_check=produce_ID+"-"+QString("%1").arg(n)+"m";
                          query.exec(QString("select * from img where img_ID='%1';").arg(ID_check));
                          if(!query.first())
                          {
                             QMessageBox::information(this,"提示","请按次序创建图片信息！");
                             return;
                          }
                        }
                         QFileInfo info(ui->LE_file_path->text());
                         QFile file(ui->LE_file_path->text());
                         QString newpath=qApp->applicationDirPath()+QString("/img");
                         QDir dir(newpath);
                         if(!dir.exists())
                          {
                            dir.cd(qApp->applicationDirPath()+QString("/"));
                            dir.mkdir(newpath);
                          }
                         newpath+=QString("/");
                         newpath+=info.fileName();
                         file.copy(newpath);
                         file.close();
                         query.exec(QString("INSERT INTO img VALUES('%1','%2','%3','%4','%5');")\
                                    .arg(ui->LE_spa_img_name->text()).arg(img_ID.mid(0,img_ID.indexOf("-"))).arg(produce_ID)\
                                    .arg(newpath).arg(img_ID));
                         QMessageBox::information(this,"提示","创建成功！");
                         structure_Tree(ui->treeWidget);
                         ui->LE_file_path->clear();
                         ui->LB_image->clear();
                         return;
                    }
                }
                else
                {
                  ui->LE_spa_img_name->clear();
                  ui->LE_file_path->clear();
                   ui->LB_image->clear();
                  return;
                }
            }

        }

    }
    else
    {
       QMessageBox::information(this,"提示","对不起，请先搜索或创建相应的工序等对象！");
       return;
    }
}
//选择文件
void mask_management::choosefile()
{
    QString path=QFileDialog::getOpenFileName(this,"打开文件","C:\\Users");
    ui->LE_file_path->setText(path);
    if(ui->info_type->currentText()=="图片信息")
    {
        paint_img_spare(path);
    }

}
//增加图片及零件选项
void mask_management::additems_img_spare()
{
    QString num=QString("%1").arg(ui->number->count()+1);
    QString kind=ui->number->itemText(0).mid(0,2);
    QString str=kind+num;
    ui->number->addItem(str);
    ui->number->setCurrentIndex(ui->number->count()-1);
    ui->LE_spa_img_name->clear();
    ui->LE_file_path->clear();
     ui->LB_image->clear();
    QMessageBox::information(this, "提示",QString("成功添加'%1'").arg(str));
    return;
}
//删除图片及零件
void mask_management::de_img_spare()
{
   if(ui->produce->text()==""||ui->LE_spa_img_name->text()=="")
   {
       QMessageBox::information(this,"提示","对不起，请先搜索或创建对象！");
       return;
   }
   QSqlDatabase db1 = QSqlDatabase::database("arsystem");
   QSqlQuery query(db1);
   QString num=break_down_choice(ui->number->currentText());
   if(ui->info_type->currentText()=="零件信息")
   {
       QString ID=get_mainID(ui->assembly->text(),ui->parts_type->currentText(),ui->procedure_type->currentText())\
               +"-"+num+"s";
       query.exec(QString("select * from spare_parts where sp_ID='%1';").arg(ID));
       if(query.first())
       {
           if(query.value("sp_name").toString()==ui->LE_spa_img_name->text())
           {
               query.exec(QString("delete from spare_parts where sp_ID='%1';").arg(ID));
               QMessageBox::information(this,"提示","删除成功！");
               ui->LE_file_path->clear();
                ui->LB_image->clear();
               ui->LE_spa_img_name->clear();
                structure_Tree(ui->treeWidget);
               return;
           }
           else
           {
                QMessageBox::information(this,"提示","对不起，不存在此对象！");
                ui->LE_file_path->clear();
                 ui->LB_image->clear();
                ui->LE_spa_img_name->clear();
                return;
           }
       }
   }
   else if(ui->info_type->currentText()=="图片信息")
   {
       QString ID=get_mainID(ui->assembly->text(),ui->parts_type->currentText(),ui->procedure_type->currentText())\
               +"-"+num+"m";
       query.exec(QString("select * from img where img_ID='%1';").arg(ID));
       if(query.first())
       {
           if(query.value("img_name").toString()==ui->LE_spa_img_name->text())
           {
               query.exec(QString("delete from img where img_ID='%1';").arg(ID));
               structure_Tree(ui->treeWidget);
               QMessageBox::information(this,"提示","删除成功！");
               ui->LE_file_path->clear();
                ui->LB_image->clear();
               ui->LE_spa_img_name->clear();
               return;
           }
           else
           {
                QMessageBox::information(this,"提示","对不起，不存在此对象！");
                ui->LE_file_path->clear();
                 ui->LB_image->clear();
                ui->LE_spa_img_name->clear();
                return;
           }
       }
   }
}
//绘图及显示模型
void mask_management::paint_img_spare(QString str)
{
    QImage *image=new QImage;
    image->load(str);      //绝对路径
    QPixmap pixmap = QPixmap::fromImage(*image);
    int with = ui->LB_image->width();
    int height = ui->LB_image->height();
    QPixmap fitpixmap = pixmap.scaled(with, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->LB_image->setPixmap(fitpixmap);
     ui->LB_image->setAlignment(Qt::AlignCenter); //居中显示
}
//table显示
void mask_management::tableshow()
{
  QSqlDatabase db1 = QSqlDatabase::database("arsystem");
  QSqlQuery query(db1);
  ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{border:2px groove gray;border-radius:20px;padding:2px 4px;background-color: rgb(220, 220, 220);font: 13pt '微软雅黑'}");
  ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止编辑
  if(ui->rb_part->isChecked())
  {
    ui->tableWidget->setColumnCount(5);
    QStringList header;
    //将表头写入表格
    header<<"ID"<<"装配对象"<<"部件名"<<"部件ID"<<"上级ID";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    //自动调整宽度
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    /*设置表格是否充满，即行末不留空*/
    query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `parts` p ON a.`ID`=p.`upper_ID`;"));
    int row;
    for(row = 0; query.next(); row++){}
    qDebug()<<row;
    query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `parts` p ON a.`ID`=p.`upper_ID`;"));
    ui->tableWidget->setRowCount(row);
    for(int i = 0; query.next(); i++)
    {
        for(int j = 0; j < 5; j++)
        {
           ui->tableWidget->setItem(i,j, new QTableWidgetItem(query.value(j).toString()));
           ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        }
    }

  }
  else if (ui->rb_produce->isChecked())
  {
      ui->tableWidget->setColumnCount(6);
      QStringList header;
      //将表头写入表格
      header<<"ID"<<"装配对象"<<"工序名"<<"工序ID"<<"根ID"<<"上级ID";
      ui->tableWidget->setHorizontalHeaderLabels(header);
      //自动调整宽度
      ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `produce` p ON a.`ID`=p.`root_ID`;"));
      int row;
      for(row = 0; query.next(); row++){}
      qDebug()<<row;
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `produce` p ON a.`ID`=p.`root_ID`;"));
      ui->tableWidget->setRowCount(row);
      for(int i = 0; query.next(); i++)
      {
          for(int j = 0; j < 6; j++)
          {
             ui->tableWidget->setItem(i,j, new QTableWidgetItem(query.value(j).toString()));
             ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
          }
      }
  }
  else if (ui->rb_spare->isChecked())
  {
      ui->tableWidget->setColumnCount(7);
      QStringList header;
      //将表头写入表格
      header<<"ID"<<"装配对象"<<"零件/图片名"<<"根ID"<<"上级ID"<<"模型/图片地址"<<"零件/图片ID";
      ui->tableWidget->setHorizontalHeaderLabels(header);
      //自动调整宽度
      ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `spare_parts` p ON a.`ID`=p.`root_ID`;"));
      int row;
      for(row = 0; query.next(); row++){}
      qDebug()<<row;
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `img` p ON a.`ID`=p.`root_ID`;"));
      int row1;
      for(row1 = 0; query.next(); row1++){}
      qDebug()<<row1;
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `spare_parts` p ON a.`ID`=p.`root_ID`;"));
      ui->tableWidget->setRowCount(row+row1);
      for(int i = 0; query.next(); i++)
      {
          for(int j = 0; j < 7; j++)
          {
             ui->tableWidget->setItem(i,j, new QTableWidgetItem(query.value(j).toString()));
             ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
          }
      }
      query.exec(QString("SELECT a.*,p.* FROM `assembly` a LEFT OUTER JOIN `img` p ON a.`ID`=p.`root_ID`;"));
      for(int i = row; query.next(); i++)
      {
          for(int j = 0; j < 7; j++)
          {
             ui->tableWidget->setItem(i,j, new QTableWidgetItem(query.value(j).toString()));
             ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
          }
      }
  }

}
mask_management::~mask_management()
{
    delete ui;
}
