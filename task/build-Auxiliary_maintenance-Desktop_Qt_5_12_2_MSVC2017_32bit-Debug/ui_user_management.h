/********************************************************************************
** Form generated from reading UI file 'user_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_MANAGEMENT_H
#define UI_USER_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mypushbutton1.h>

QT_BEGIN_NAMESPACE

class Ui_user_management
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_all;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *jobnum;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *joineddate;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *gender;
    QVBoxLayout *verticalLayout;
    QRadioButton *boy;
    QRadioButton *girl;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *email;
    QLineEdit *phone;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *old_password;
    QLineEdit *new_password;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_9;
    QGroupBox *job;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *repair;
    QRadioButton *administration;
    MyPushButton1 *delete_2;
    MyPushButton1 *modify;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *search_lineEdit;
    MyPushButton1 *search;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *operation_record;

    void setupUi(QWidget *user_management)
    {
        if (user_management->objectName().isEmpty())
            user_management->setObjectName(QString::fromUtf8("user_management"));
        user_management->resize(455, 852);
        gridLayout_3 = new QGridLayout(user_management);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox_all = new QGroupBox(user_management);
        groupBox_all->setObjectName(QString::fromUtf8("groupBox_all"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        groupBox_all->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox_all);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(groupBox_all);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));
        QFont font1;
        font1.setPointSize(13);
        name->setFont(font1);

        horizontalLayout->addWidget(name);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(groupBox_all);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        jobnum = new QLineEdit(widget_2);
        jobnum->setObjectName(QString::fromUtf8("jobnum"));
        jobnum->setFont(font1);

        horizontalLayout_2->addWidget(jobnum);


        verticalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(groupBox_all);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        joineddate = new QDateEdit(widget_3);
        joineddate->setObjectName(QString::fromUtf8("joineddate"));
        joineddate->setFont(font1);

        horizontalLayout_3->addWidget(joineddate);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(groupBox_all);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        verticalLayout_3->addWidget(widget_4);

        gender = new QGroupBox(groupBox_all);
        gender->setObjectName(QString::fromUtf8("gender"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gender->sizePolicy().hasHeightForWidth());
        gender->setSizePolicy(sizePolicy);
        gender->setFont(font);
        verticalLayout = new QVBoxLayout(gender);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        boy = new QRadioButton(gender);
        boy->setObjectName(QString::fromUtf8("boy"));

        verticalLayout->addWidget(boy);

        girl = new QRadioButton(gender);
        girl->setObjectName(QString::fromUtf8("girl"));

        verticalLayout->addWidget(girl);


        verticalLayout_3->addWidget(gender);

        groupBox_2 = new QGroupBox(groupBox_all);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        email = new QLineEdit(groupBox_2);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout->addWidget(email, 0, 1, 1, 1);

        phone = new QLineEdit(groupBox_2);
        phone->setObjectName(QString::fromUtf8("phone"));

        gridLayout->addWidget(phone, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(groupBox_all);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        old_password = new QLineEdit(groupBox_5);
        old_password->setObjectName(QString::fromUtf8("old_password"));

        gridLayout_2->addWidget(old_password, 0, 1, 1, 1);

        new_password = new QLineEdit(groupBox_5);
        new_password->setObjectName(QString::fromUtf8("new_password"));

        gridLayout_2->addWidget(new_password, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        job = new QGroupBox(groupBox_all);
        job->setObjectName(QString::fromUtf8("job"));
        job->setFont(font);
        verticalLayout_2 = new QVBoxLayout(job);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        repair = new QRadioButton(job);
        repair->setObjectName(QString::fromUtf8("repair"));

        verticalLayout_2->addWidget(repair);

        administration = new QRadioButton(job);
        administration->setObjectName(QString::fromUtf8("administration"));

        verticalLayout_2->addWidget(administration);


        verticalLayout_3->addWidget(job);

        delete_2 = new MyPushButton1(groupBox_all);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));

        verticalLayout_3->addWidget(delete_2);

        modify = new MyPushButton1(groupBox_all);
        modify->setObjectName(QString::fromUtf8("modify"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        modify->setFont(font2);

        verticalLayout_3->addWidget(modify);


        gridLayout_3->addWidget(groupBox_all, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(17, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 2, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(17, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 5, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 6, 2, 1, 1);

        widget_6 = new QWidget(user_management);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_5 = new QVBoxLayout(widget_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        search_lineEdit = new QLineEdit(widget_5);
        search_lineEdit->setObjectName(QString::fromUtf8("search_lineEdit"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        search_lineEdit->setFont(font3);

        horizontalLayout_5->addWidget(search_lineEdit);

        search = new MyPushButton1(widget_5);
        search->setObjectName(QString::fromUtf8("search"));
        search->setFont(font2);

        horizontalLayout_5->addWidget(search);


        verticalLayout_5->addWidget(widget_5);

        groupBox_4 = new QGroupBox(widget_6);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        operation_record = new QTextEdit(groupBox_4);
        operation_record->setObjectName(QString::fromUtf8("operation_record"));

        verticalLayout_4->addWidget(operation_record);


        verticalLayout_5->addWidget(groupBox_4);


        gridLayout_3->addWidget(widget_6, 1, 2, 1, 1);


        retranslateUi(user_management);

        QMetaObject::connectSlotsByName(user_management);
    } // setupUi

    void retranslateUi(QWidget *user_management)
    {
        user_management->setWindowTitle(QApplication::translate("user_management", "Form", nullptr));
        groupBox_all->setTitle(QApplication::translate("user_management", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("user_management", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("user_management", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("user_management", "\345\205\245\350\201\214\346\227\245\346\234\237\357\274\232", nullptr));
        gender->setTitle(QApplication::translate("user_management", "\346\200\247\345\210\253", nullptr));
        boy->setText(QApplication::translate("user_management", "      \347\224\267", nullptr));
        girl->setText(QApplication::translate("user_management", "      \345\245\263", nullptr));
        groupBox_2->setTitle(QApplication::translate("user_management", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_6->setText(QApplication::translate("user_management", "\346\211\213\346\234\272\357\274\232", nullptr));
        label_5->setText(QApplication::translate("user_management", "\351\202\256\347\256\261\357\274\232", nullptr));
        groupBox_5->setTitle(QApplication::translate("user_management", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        label_7->setText(QApplication::translate("user_management", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_8->setText(QApplication::translate("user_management", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
        job->setTitle(QApplication::translate("user_management", "\346\235\203\351\231\220", nullptr));
        repair->setText(QApplication::translate("user_management", "\347\273\264\344\277\256\345\221\230", nullptr));
        administration->setText(QApplication::translate("user_management", "\347\256\241\347\220\206\345\221\230", nullptr));
        delete_2->setText(QApplication::translate("user_management", "\345\210\240\351\231\244", nullptr));
        modify->setText(QApplication::translate("user_management", "\344\277\256\346\224\271", nullptr));
        search_lineEdit->setPlaceholderText(QApplication::translate("user_management", "\350\257\267\346\214\211\345\267\245\345\217\267\350\277\233\350\241\214\346\220\234\347\264\242", nullptr));
        search->setText(QApplication::translate("user_management", "\346\220\234\347\264\242", nullptr));
        groupBox_4->setTitle(QApplication::translate("user_management", "\346\223\215\344\275\234\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_management: public Ui_user_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MANAGEMENT_H
