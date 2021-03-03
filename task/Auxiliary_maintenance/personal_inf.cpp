#include "personal_inf.h"
#include "ui_personal_inf.h"
#include <QDesktopWidget>
#include <QDebug>
#pragma execution_character_set("utf-8")
personal_inf::personal_inf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::personal_inf)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //setWindowFlags(Qt::FramelessWindowHint);//这边就是相当于直接将qt窗体默认的功能全部取消
    QDesktopWidget * desktopWidget=QApplication::desktop();
    QRect screenRect=desktopWidget->screenGeometry();
    this->setFixedSize(screenRect.width()-300,screenRect.height()/14*13);
    connect(this,SIGNAL(got_jobnum_per(QString)),this,SLOT(init_info(QString)));
}


void personal_inf::get_jobnum_per(QString str)
{
    jobnum_per=str;
    emit got_jobnum_per(jobnum_per);
}

//void personal_inf::get_job_per(QString str)
//{
//    job_per=str;
//}

//初始化用户信息
void personal_inf::init_info(QString str)
{
    //job_num不为空即为已注册用户
    if(str!=NULL)
    {
        QSqlDatabase db1 = QSqlDatabase::database("arsystem");
        QSqlQuery query(db1);
        QString str1=QString("select * from user_info where job_num = '%1';").arg(jobnum_per);
        query.exec(str1);
        //初始化
        if(query.first()){
            ui->name->setText(query.value("user_name").toString());
            ui->jobnum->setText(query.value("job_num").toString());
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
               ui->job->setCurrentIndex(0);
            }
            else {
                ui->job->setCurrentIndex(1);
            }
            QDateTime datetime=QDateTime::fromString(query.value("joined_date").toString(),"yyyy-MM-dd");
            ui->joineddate->setDateTime(datetime);
        }

    }
    else
    {

    }
}

personal_inf::~personal_inf()
{
    delete ui;
}
