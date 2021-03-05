/********************************************************************************
** Form generated from reading UI file 'personal_inf.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONAL_INF_H
#define UI_PERSONAL_INF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mycombobox.h>

QT_BEGIN_NAMESPACE

class Ui_personal_inf
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sumbit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    MyComboBox *job;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *contact;
    QGridLayout *gridLayout;
    QLineEdit *phone;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *email;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *jobnum;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *joineddate;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QGroupBox *gender;
    QVBoxLayout *verticalLayout;
    QRadioButton *boy;
    QRadioButton *girl;
    QGroupBox *password;
    QGridLayout *gridLayout_3;
    QLineEdit *new_password;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *old_password;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *personal_inf)
    {
        if (personal_inf->objectName().isEmpty())
            personal_inf->setObjectName(QString::fromUtf8("personal_inf"));
        personal_inf->resize(944, 783);
        gridLayout_4 = new QGridLayout(personal_inf);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        sumbit = new QPushButton(personal_inf);
        sumbit->setObjectName(QString::fromUtf8("sumbit"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        sumbit->setFont(font);

        gridLayout_4->addWidget(sumbit, 9, 1, 1, 1);

        widget_4 = new QWidget(personal_inf);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        job = new MyComboBox(widget_4);
        job->addItem(QString());
        job->addItem(QString());
        job->setObjectName(QString::fromUtf8("job"));
        job->setFont(font);

        horizontalLayout_4->addWidget(job);


        gridLayout_4->addWidget(widget_4, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        contact = new QGroupBox(personal_inf);
        contact->setObjectName(QString::fromUtf8("contact"));
        contact->setFont(font);
        gridLayout = new QGridLayout(contact);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        phone = new QLineEdit(contact);
        phone->setObjectName(QString::fromUtf8("phone"));

        gridLayout->addWidget(phone, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        email = new QLineEdit(contact);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout->addWidget(email, 0, 1, 1, 1);

        label_6 = new QLabel(contact);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(contact);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_4->addWidget(contact, 6, 1, 1, 1);

        widget_2 = new QWidget(personal_inf);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        jobnum = new QLineEdit(widget_2);
        jobnum->setObjectName(QString::fromUtf8("jobnum"));
        jobnum->setFont(font);

        horizontalLayout_2->addWidget(jobnum);


        gridLayout_4->addWidget(widget_2, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 10, 1, 1, 1);

        widget = new QWidget(personal_inf);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        name = new QLineEdit(widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font);

        horizontalLayout->addWidget(name);


        gridLayout_4->addWidget(widget, 1, 1, 1, 1);

        widget_3 = new QWidget(personal_inf);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        joineddate = new QDateEdit(widget_3);
        joineddate->setObjectName(QString::fromUtf8("joineddate"));
        joineddate->setFont(font);

        horizontalLayout_3->addWidget(joineddate);


        gridLayout_4->addWidget(widget_3, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 11, 1, 1, 1);

        gender = new QGroupBox(personal_inf);
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
        boy->setChecked(true);

        verticalLayout->addWidget(boy);

        girl = new QRadioButton(gender);
        girl->setObjectName(QString::fromUtf8("girl"));

        verticalLayout->addWidget(girl);


        gridLayout_4->addWidget(gender, 5, 1, 1, 1);

        password = new QGroupBox(personal_inf);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font);
        gridLayout_3 = new QGridLayout(password);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        new_password = new QLineEdit(password);
        new_password->setObjectName(QString::fromUtf8("new_password"));

        gridLayout_3->addWidget(new_password, 2, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 1, 1, 1, 1);

        old_password = new QLineEdit(password);
        old_password->setObjectName(QString::fromUtf8("old_password"));

        gridLayout_3->addWidget(old_password, 0, 1, 1, 1);

        label_9 = new QLabel(password);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(password);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);


        gridLayout_4->addWidget(password, 7, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_7, 8, 1, 1, 1);


        retranslateUi(personal_inf);

        QMetaObject::connectSlotsByName(personal_inf);
    } // setupUi

    void retranslateUi(QWidget *personal_inf)
    {
        personal_inf->setWindowTitle(QApplication::translate("personal_inf", "Form", nullptr));
        sumbit->setText(QApplication::translate("personal_inf", "\346\217\220        \344\272\244", nullptr));
        label_4->setText(QApplication::translate("personal_inf", "\350\201\214\344\275\215\357\274\232", nullptr));
        job->setItemText(0, QApplication::translate("personal_inf", "\347\273\264\344\277\256\345\221\230", nullptr));
        job->setItemText(1, QApplication::translate("personal_inf", "\347\256\241\347\220\206\345\221\230", nullptr));

        contact->setTitle(QApplication::translate("personal_inf", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        phone->setPlaceholderText(QApplication::translate("personal_inf", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\346\211\213\346\234\272\345\217\267\357\274\214\344\270\215\350\266\205\350\277\20715\344\270\252\345\255\227\347\254\246", nullptr));
        email->setPlaceholderText(QApplication::translate("personal_inf", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\351\202\256\347\256\261\357\274\214\344\270\215\350\266\205\350\277\20720\344\270\252\345\255\227\347\254\246", nullptr));
        label_6->setText(QApplication::translate("personal_inf", "\346\211\213\346\234\272\357\274\232", nullptr));
        label_5->setText(QApplication::translate("personal_inf", "\351\202\256\347\256\261\357\274\232", nullptr));
        label_2->setText(QApplication::translate("personal_inf", "\345\267\245\345\217\267\357\274\232", nullptr));
        jobnum->setPlaceholderText(QApplication::translate("personal_inf", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\267\245\345\217\267", nullptr));
        label->setText(QApplication::translate("personal_inf", "\345\247\223\345\220\215\357\274\232", nullptr));
        name->setPlaceholderText(QApplication::translate("personal_inf", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\247\223\345\220\215\357\274\214\344\270\215\350\266\205\350\277\20710\344\270\252\345\255\227\347\254\246", nullptr));
        label_3->setText(QApplication::translate("personal_inf", "\345\205\245\350\201\214\346\227\245\346\234\237\357\274\232", nullptr));
        gender->setTitle(QApplication::translate("personal_inf", "\346\200\247\345\210\253", nullptr));
        boy->setText(QApplication::translate("personal_inf", "      \347\224\267", nullptr));
        girl->setText(QApplication::translate("personal_inf", "      \345\245\263", nullptr));
        password->setTitle(QApplication::translate("personal_inf", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        new_password->setPlaceholderText(QApplication::translate("personal_inf", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\214\344\270\215\350\266\205\350\277\2076\344\275\215", nullptr));
        old_password->setPlaceholderText(QApplication::translate("personal_inf", "\345\210\235\345\247\213\345\257\206\347\240\201\351\273\230\350\256\244000000", nullptr));
        label_9->setText(QApplication::translate("personal_inf", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_10->setText(QApplication::translate("personal_inf", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personal_inf: public Ui_personal_inf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_INF_H
