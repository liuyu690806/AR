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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QLineEdit *lineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_9;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_2;
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
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;

    void setupUi(QWidget *user_management)
    {
        if (user_management->objectName().isEmpty())
            user_management->setObjectName(QString::fromUtf8("user_management"));
        user_management->resize(455, 848);
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

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font1;
        font1.setPointSize(13);
        lineEdit->setFont(font1);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(groupBox_all);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(groupBox_all);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        dateEdit = new QDateEdit(widget_3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setFont(font1);

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(groupBox_all);
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


        verticalLayout_3->addWidget(widget_4);

        groupBox = new QGroupBox(groupBox_all);
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


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(groupBox_all);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

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

        lineEdit_6 = new QLineEdit(groupBox_5);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_2->addWidget(lineEdit_6, 0, 1, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_5);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout_2->addWidget(lineEdit_7, 2, 1, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_9, 1, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_3 = new QGroupBox(groupBox_all);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);


        verticalLayout_3->addWidget(groupBox_3);

        pushButton_2 = new QPushButton(groupBox_all);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(13);
        pushButton_2->setFont(font2);

        verticalLayout_3->addWidget(pushButton_2);


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
        lineEdit_5 = new QLineEdit(widget_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        lineEdit_5->setFont(font3);

        horizontalLayout_5->addWidget(lineEdit_5);

        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_5->addWidget(widget_5);

        groupBox_4 = new QGroupBox(widget_6);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidget = new QTableWidget(groupBox_4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);


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
        label_4->setText(QApplication::translate("user_management", "\350\201\214\344\275\215\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("user_management", "\347\273\264\344\277\256\345\221\230", nullptr));
        comboBox->setItemText(1, QApplication::translate("user_management", "\350\256\276\350\256\241\345\221\230", nullptr));
        comboBox->setItemText(2, QApplication::translate("user_management", "\347\256\241\347\220\206\345\221\230", nullptr));

        groupBox->setTitle(QApplication::translate("user_management", "\346\200\247\345\210\253", nullptr));
        checkBox->setText(QApplication::translate("user_management", "      \347\224\267", nullptr));
        checkBox_2->setText(QApplication::translate("user_management", "      \345\245\263", nullptr));
        groupBox_2->setTitle(QApplication::translate("user_management", "\350\201\224\347\263\273\346\226\271\345\274\217", nullptr));
        label_6->setText(QApplication::translate("user_management", "\346\211\213\346\234\272\357\274\232", nullptr));
        label_5->setText(QApplication::translate("user_management", "\351\202\256\347\256\261\357\274\232", nullptr));
        groupBox_5->setTitle(QApplication::translate("user_management", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        label_7->setText(QApplication::translate("user_management", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_8->setText(QApplication::translate("user_management", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
        groupBox_3->setTitle(QApplication::translate("user_management", "\346\235\203\351\231\220", nullptr));
        radioButton->setText(QApplication::translate("user_management", "\347\273\264\344\277\256\345\221\230", nullptr));
        radioButton_2->setText(QApplication::translate("user_management", "\350\256\276\350\256\241\345\221\230", nullptr));
        radioButton_3->setText(QApplication::translate("user_management", "\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton_2->setText(QApplication::translate("user_management", "\344\277\256\346\224\271\346\217\220\344\272\244", nullptr));
        pushButton->setText(QApplication::translate("user_management", "\346\220\234\347\264\242", nullptr));
        groupBox_4->setTitle(QApplication::translate("user_management", "\346\223\215\344\275\234\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_management: public Ui_user_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_MANAGEMENT_H
