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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_personal_inf
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_7;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *lineEdit_8;
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

        pushButton = new QPushButton(personal_inf);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        gridLayout_4->addWidget(pushButton, 9, 1, 1, 1);

        widget_4 = new QWidget(personal_inf);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        comboBox = new QComboBox(widget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_4->addWidget(comboBox);


        gridLayout_4->addWidget(widget_4, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(personal_inf);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 6, 1, 1, 1);

        widget_2 = new QWidget(personal_inf);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(13);
        lineEdit_2->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_2);


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

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);

        horizontalLayout->addWidget(lineEdit);


        gridLayout_4->addWidget(widget, 1, 1, 1, 1);

        widget_3 = new QWidget(personal_inf);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        dateEdit = new QDateEdit(widget_3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QFont font2;
        font2.setPointSize(13);
        dateEdit->setFont(font2);

        horizontalLayout_3->addWidget(dateEdit);


        gridLayout_4->addWidget(widget_3, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 11, 1, 1, 1);

        groupBox = new QGroupBox(personal_inf);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);


        gridLayout_4->addWidget(groupBox, 5, 1, 1, 1);

        groupBox_3 = new QGroupBox(personal_inf);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_7 = new QLineEdit(groupBox_3);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout_3->addWidget(lineEdit_7, 2, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 1, 1, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout_3->addWidget(lineEdit_8, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 7, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_7, 8, 1, 1, 1);


        retranslateUi(personal_inf);

        QMetaObject::connectSlotsByName(personal_inf);
    } // setupUi

    void retranslateUi(QWidget *personal_inf)
    {
        personal_inf->setWindowTitle(QApplication::translate("personal_inf", "Form", nullptr));
        pushButton->setText(QApplication::translate("personal_inf", "\346\217\220        \344\272\244", nullptr));
        label_4->setText(QApplication::translate("personal_inf", "\350\201\214\344\275\215\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("personal_inf", "\347\273\264\344\277\256\345\221\230", nullptr));
        comboBox->setItemText(1, QApplication::translate("personal_inf", "\350\256\276\350\256\241\345\221\230", nullptr));
        comboBox->setItemText(2, QApplication::translate("personal_inf", "\347\256\241\347\220\206\345\221\230", nullptr));

        groupBox_2->setTitle(QApplication::translate("personal_inf", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_6->setText(QApplication::translate("personal_inf", "\346\211\213\346\234\272\357\274\232", nullptr));
        label_5->setText(QApplication::translate("personal_inf", "\351\202\256\347\256\261\357\274\232", nullptr));
        label_2->setText(QApplication::translate("personal_inf", "\345\267\245\345\217\267\357\274\232", nullptr));
        label->setText(QApplication::translate("personal_inf", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("personal_inf", "\345\205\245\350\201\214\346\227\245\346\234\237\357\274\232", nullptr));
        groupBox->setTitle(QApplication::translate("personal_inf", "\346\200\247\345\210\253", nullptr));
        checkBox->setText(QApplication::translate("personal_inf", "      \347\224\267", nullptr));
        checkBox_2->setText(QApplication::translate("personal_inf", "      \345\245\263", nullptr));
        groupBox_3->setTitle(QApplication::translate("personal_inf", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        label_9->setText(QApplication::translate("personal_inf", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_10->setText(QApplication::translate("personal_inf", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class personal_inf: public Ui_personal_inf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONAL_INF_H
