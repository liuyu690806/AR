#include "user_management.h"
#include "ui_user_management.h"
#include <QDesktopWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include "mypushbutton1.h"
#include <QDebug>
#include <QButtonGroup>
#include <QFile>
#pragma execution_character_set("utf-8")

user_management::user_management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_management)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
    QButtonGroup *GG = new QButtonGroup(ui->gender);
    GG->addButton(ui->boy,0);
    GG->addButton(ui->girl,1);
    QButtonGroup *GG1 = new QButtonGroup(ui->job);
    GG1->addButton(ui->repair,0);
    GG1->addButton(ui->administration,1);
    connect(ui->search,&MyPushButton1::clicked,this,[=]{
        ui->search->zoomdown();
        ui->search->zoomup();
        search(ui->search_lineEdit->text());
    });
    connect(ui->modify,&MyPushButton1::clicked,this,[=]{
        ui->modify->zoomdown();
        ui->modify->zoomup();
        modify_info();

    });
    connect(ui->delete_2,&MyPushButton1::clicked,this,[=]{
        ui->delete_2->zoomdown();
        ui->delete_2->zoomup();
        delete_info();

    });
}

//日期分解
QString user_management::date_breakdown(QString str)
{
    QString year=str.mid(0,4);
    int n_1=str.indexOf("/");
    int n_2=str.lastIndexOf("/");
    QString month=str.mid(n_1+1,n_2-1);
    QString day=str.mid(n_2+1);
    if(month.length()==1)
    {
        month="0"+month;
    }
    if(day.length()==1)
    {
        day="0"+day;
    }
    QString date=year+"-"+month+"-"+day;

    return date;
}

//操作记录
void user_management::show_operation_record(QString num)
{
    QString Filename=qApp->applicationDirPath()+"/log.txt";
    QFile afile(Filename);
    afile.open(QIODevice::ReadOnly);
    QString arry_all;
    while (!afile.atEnd())
    {
      QByteArray arry;
      arry=afile.readLine();
      if(arry.indexOf(num)!=-1){
          arry_all+=arry;
      }
    }
     ui->operation_record->setText(arry_all);
}

//清理UI
void user_management::clearUI()
{
    ui->name->clear();
    ui->jobnum->clear();
    ui->phone->clear();
    ui->email->clear();
    ui->old_password->clear();
    ui->new_password->clear();
    QDateTime datetime=QDateTime::fromString("2000/1/1","yyyy-MM-dd");
    ui->joineddate->setDateTime(datetime);
    ui->search_lineEdit->clear();
    ui->repair->setChecked(1);
    ui->boy->setChecked(1);
    ui->operation_record->clear();
}

//搜索
void user_management::search(QString str)
{
    clearUI();
    QSqlDatabase db1 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db1);
    QString str1=QString("select * from user_info where job_num = '%1';").arg(str);
    query.exec(str1);
    //初始化
    if(query.first())
    {
        ui->name->setText(query.value("user_name").toString());
        ui->jobnum->setText(query.value("job_num").toString());
        jobnum_from_search=ui->jobnum->text();
        ui->email->setText(query.value("email").toString());
        ui->phone->setText(query.value("phone").toString());
        ui->old_password->setText(query.value("pass_word").toString());
        if(query.value("gender").toString()=="男")
        {
            ui->boy->setChecked(1);
        }
        else {
            ui->girl->setChecked(1);
        }
        if(query.value("job").toString()=="维修员")
        {
          ui->repair->setChecked(1);
          jobname_from_search="维修员";
        }
        else if(query.value("job").toString()=="管理员")
        {
          ui->administration->setChecked(1);
          jobname_from_search="管理员";
        }
        QDateTime datetime=QDateTime::fromString(query.value("joined_date").toString(),"yyyy-MM-dd");
        ui->joineddate->setDateTime(datetime);

    }
    else {
        QMessageBox::information(this,"提示","对不起，没有此用户！");
        clearUI();
    }
    show_operation_record(jobnum_from_search);
    qDebug()<<"搜索"<<str;
}

//删除
void user_management::delete_info()
{
    if(jobnum_from_search=="")
    {
        QMessageBox::information(this,"提示","对不起，请搜索需要修改的对象");
        clearUI();
        return;
    }
    if(jobname_from_search=="管理员")
    {
        QMessageBox::information(this,"提示","对不起，您没有权限删除管理员的信息！");
        return;
    }
    QSqlDatabase db2 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db2);
    QString is_delete =QString("delete from user_info where job_num = '%1';").arg(jobnum_from_search);
    query.exec(is_delete);
    //qDebug()<<is_delete;
    QMessageBox::information(this,"提示","已删除！");
    qDebug()<<"删除"<<jobnum_from_search;
    clearUI();
}

//修改
void user_management::modify_info()
{
    if(jobnum_from_search=="")
    {
        QMessageBox::information(this,"提示","对不起，请搜索需要修改的对象");
        return;
    }
    if(jobname_from_search=="管理员")
    {
        QMessageBox::information(this,"提示","对不起，您没有权限修改管理员的信息！");
        return;
    }
    QSqlDatabase db2 = QSqlDatabase::database("arsystem");
    QSqlQuery query(db2);
    //新密码
    QString password_new;
    //
    QString name_new;
    //
    QString email_new;
    //
    QString phone_new;
    //
    QString gender_new;
    //
    QString job_num_new;
    //
    QString job_name_new;
    QString is_modify_pw =QString("select * from user_info where job_num = '%1';").arg(jobnum_from_search);
    query.exec(is_modify_pw);
    //qDebug()<<jobnum_from_search;
    if(query.first())
    {

        if(ui->old_password->text()!=query.value("pass_word").toString())
        {
           // qDebug()<<query.value("pass_word").toString();
            QMessageBox::warning(this,"警告","旧密码错误，请重新输入！");
            return;
        }
        else
        {
            if(ui->new_password->text()!="")
            {
               password_new=ui->new_password->text();
            }
            else
            {
                password_new=query.value("pass_word").toString();
            }

        }
        //姓名
        if(ui->name->text()!="")
        {
            name_new=ui->name->text();
        }
        else
        {
            name_new=query.value("user_name").toString();
        }
        //工号
        if(ui->jobnum->text()!="")
        {
            job_num_new=ui->jobnum->text();
        }
        else
        {
            job_num_new=query.value("job_num").toString();
        }
        //邮箱
        if(ui->email->text()!="")
        {
            email_new=ui->email->text();
        }
        else
        {
            email_new=query.value("email").toString();
        }
        //电话
        if(ui->phone->text()!="")
        {
            phone_new=ui->phone->text();
        }
        else
        {
            phone_new=query.value("phone").toString();
        }
        //性别
        if(ui->boy->isChecked())
        {
            gender_new="男";
        }
        else
        {
             gender_new="女";
        }
        //权限
        if(ui->administration->isChecked())
        {
            job_name_new="管理员";
        }
        else
        {
            job_name_new="维修员";
        }

    }
    QString date_new=date_breakdown(ui->joineddate->text());
    QString modify1=QString("update user_info set user_name = '%1',joined_date = '%2',gender= '%3',email = '%4',phone = '%5',pass_word = '%6',job ='%7' where job_num = '%8';").arg(name_new).arg(date_new)\
            .arg(gender_new).arg(email_new).arg(phone_new).arg(password_new).arg(job_name_new).arg(jobnum_from_search);
    //qDebug()<<modify1;
    query.exec(modify1);
    QString modify2=QString("update user_info set job_num = '%1'where job_num = '%2';").arg(job_num_new).arg(jobnum_from_search);
    query.exec(modify2);
    QMessageBox::information(this,"提示","已修改完毕！");
    jobnum_from_search=job_num_new;
    clearUI();
    search(job_num_new);

}

user_management::~user_management()
{
    delete ui;

}
