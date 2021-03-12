/********************************************************************************
** Form generated from reading UI file 'mask_management.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASK_MANAGEMENT_H
#define UI_MASK_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include <mycombobox.h>
#include <mypushbutton1.h>

QT_BEGIN_NAMESPACE

class Ui_mask_management
{
public:
    QTreeWidget *treeWidget;
    QGroupBox *gb_info;
    QGridLayout *gridLayout_6;
    QGroupBox *gb_other;
    QGridLayout *gridLayout_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QComboBox *number;
    QLineEdit *LE_spa_img_name;
    QComboBox *info_type;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *LE_file_path;
    MyPushButton1 *btn_choosefile;
    QTextEdit *textEdit;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    MyComboBox *parts_type;
    QLineEdit *LE_procedure_name;
    QLineEdit *LE_parts_name;
    QLineEdit *LE_assembly_name;
    MyPushButton1 *btn_search_create;
    MyComboBox *procedure_type;
    MyPushButton1 *btn_add;
    MyPushButton1 *btn_delete;
    QGroupBox *gb_text;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QTextEdit *text_info;
    QLabel *produce;
    MyPushButton1 *pushButton;
    QLabel *parts;
    QLabel *assembly;
    QGroupBox *gb_show_info;
    QGridLayout *gridLayout_7;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    MyPushButton1 *btn_ok_9;
    QTableWidget *tableWidget;

    void setupUi(QWidget *mask_management)
    {
        if (mask_management->objectName().isEmpty())
            mask_management->setObjectName(QString::fromUtf8("mask_management"));
        mask_management->resize(1056, 777);
        treeWidget = new QTreeWidget(mask_management);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(40, 70, 256, 192));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        treeWidget->setFont(font);
        gb_info = new QGroupBox(mask_management);
        gb_info->setObjectName(QString::fromUtf8("gb_info"));
        gb_info->setGeometry(QRect(608, 9, 404, 794));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_info->sizePolicy().hasHeightForWidth());
        gb_info->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        gb_info->setFont(font1);
        gridLayout_6 = new QGridLayout(gb_info);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gb_other = new QGroupBox(gb_info);
        gb_other->setObjectName(QString::fromUtf8("gb_other"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gb_other->sizePolicy().hasHeightForWidth());
        gb_other->setSizePolicy(sizePolicy1);
        gb_other->setFont(font1);
        gridLayout_5 = new QGridLayout(gb_other);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget_2 = new QWidget(gb_other);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        number = new QComboBox(widget_2);
        number->addItem(QString());
        number->setObjectName(QString::fromUtf8("number"));

        gridLayout_3->addWidget(number, 0, 1, 1, 1);

        LE_spa_img_name = new QLineEdit(widget_2);
        LE_spa_img_name->setObjectName(QString::fromUtf8("LE_spa_img_name"));

        gridLayout_3->addWidget(LE_spa_img_name, 0, 2, 1, 1);

        info_type = new QComboBox(widget_2);
        info_type->addItem(QString());
        info_type->addItem(QString());
        info_type->setObjectName(QString::fromUtf8("info_type"));
        sizePolicy.setHeightForWidth(info_type->sizePolicy().hasHeightForWidth());
        info_type->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(info_type, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_2, 0, 0, 1, 1);

        widget = new QWidget(gb_other);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LE_file_path = new QLineEdit(widget);
        LE_file_path->setObjectName(QString::fromUtf8("LE_file_path"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(LE_file_path->sizePolicy().hasHeightForWidth());
        LE_file_path->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(LE_file_path, 1, 0, 1, 1);

        btn_choosefile = new MyPushButton1(widget);
        btn_choosefile->setObjectName(QString::fromUtf8("btn_choosefile"));
        sizePolicy3.setHeightForWidth(btn_choosefile->sizePolicy().hasHeightForWidth());
        btn_choosefile->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(btn_choosefile, 1, 1, 1, 1);


        gridLayout_5->addWidget(widget, 2, 0, 1, 1);

        textEdit = new QTextEdit(gb_other);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_6->addWidget(gb_other, 2, 0, 1, 1);

        widget_7 = new QWidget(gb_info);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        sizePolicy3.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(widget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        parts_type = new MyComboBox(widget_7);
        parts_type->addItem(QString());
        parts_type->setObjectName(QString::fromUtf8("parts_type"));

        gridLayout_4->addWidget(parts_type, 1, 0, 1, 2);

        LE_procedure_name = new QLineEdit(widget_7);
        LE_procedure_name->setObjectName(QString::fromUtf8("LE_procedure_name"));

        gridLayout_4->addWidget(LE_procedure_name, 2, 2, 1, 1);

        LE_parts_name = new QLineEdit(widget_7);
        LE_parts_name->setObjectName(QString::fromUtf8("LE_parts_name"));

        gridLayout_4->addWidget(LE_parts_name, 1, 2, 1, 1);

        LE_assembly_name = new QLineEdit(widget_7);
        LE_assembly_name->setObjectName(QString::fromUtf8("LE_assembly_name"));
        sizePolicy4.setHeightForWidth(LE_assembly_name->sizePolicy().hasHeightForWidth());
        LE_assembly_name->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(LE_assembly_name, 0, 1, 1, 2);

        btn_search_create = new MyPushButton1(widget_7);
        btn_search_create->setObjectName(QString::fromUtf8("btn_search_create"));
        sizePolicy3.setHeightForWidth(btn_search_create->sizePolicy().hasHeightForWidth());
        btn_search_create->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(btn_search_create, 0, 3, 1, 1);

        procedure_type = new MyComboBox(widget_7);
        procedure_type->addItem(QString());
        procedure_type->addItem(QString());
        procedure_type->setObjectName(QString::fromUtf8("procedure_type"));

        gridLayout_4->addWidget(procedure_type, 2, 0, 1, 2);

        btn_add = new MyPushButton1(widget_7);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy3.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(btn_add, 1, 3, 1, 1);

        btn_delete = new MyPushButton1(widget_7);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        sizePolicy3.setHeightForWidth(btn_delete->sizePolicy().hasHeightForWidth());
        btn_delete->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(btn_delete, 2, 3, 1, 1);


        gridLayout_6->addWidget(widget_7, 0, 0, 1, 1);

        gb_text = new QGroupBox(gb_info);
        gb_text->setObjectName(QString::fromUtf8("gb_text"));
        sizePolicy1.setHeightForWidth(gb_text->sizePolicy().hasHeightForWidth());
        gb_text->setSizePolicy(sizePolicy1);
        gb_text->setFont(font1);
        gridLayout_2 = new QGridLayout(gb_text);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(gb_text);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 6, 1, 1);

        label_4 = new QLabel(gb_text);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(gb_text);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        text_info = new QTextEdit(gb_text);
        text_info->setObjectName(QString::fromUtf8("text_info"));

        gridLayout_2->addWidget(text_info, 1, 0, 1, 11);

        produce = new QLabel(gb_text);
        produce->setObjectName(QString::fromUtf8("produce"));
        produce->setFont(font1);
        produce->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout_2->addWidget(produce, 0, 7, 1, 1);

        pushButton = new MyPushButton1(gb_text);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(pushButton, 0, 10, 1, 1);

        parts = new QLabel(gb_text);
        parts->setObjectName(QString::fromUtf8("parts"));
        parts->setFont(font1);
        parts->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout_2->addWidget(parts, 0, 4, 1, 1);

        assembly = new QLabel(gb_text);
        assembly->setObjectName(QString::fromUtf8("assembly"));
        assembly->setFont(font1);
        assembly->setStyleSheet(QString::fromUtf8("color:blue;"));

        gridLayout_2->addWidget(assembly, 0, 1, 1, 1);


        gridLayout_6->addWidget(gb_text, 1, 0, 1, 1);

        gb_show_info = new QGroupBox(mask_management);
        gb_show_info->setObjectName(QString::fromUtf8("gb_show_info"));
        gb_show_info->setGeometry(QRect(30, 290, 476, 282));
        sizePolicy1.setHeightForWidth(gb_show_info->sizePolicy().hasHeightForWidth());
        gb_show_info->setSizePolicy(sizePolicy1);
        gb_show_info->setFont(font1);
        gridLayout_7 = new QGridLayout(gb_show_info);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget_5 = new QWidget(gb_show_info);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(widget_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        radioButton = new QRadioButton(widget_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget_5);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        btn_ok_9 = new MyPushButton1(widget_5);
        btn_ok_9->setObjectName(QString::fromUtf8("btn_ok_9"));
        sizePolicy3.setHeightForWidth(btn_ok_9->sizePolicy().hasHeightForWidth());
        btn_ok_9->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(btn_ok_9);


        gridLayout_7->addWidget(widget_5, 0, 0, 1, 1);

        tableWidget = new QTableWidget(gb_show_info);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem13);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        tableWidget->setFont(font2);

        gridLayout_7->addWidget(tableWidget, 1, 0, 1, 1);


        retranslateUi(mask_management);

        QMetaObject::connectSlotsByName(mask_management);
    } // setupUi

    void retranslateUi(QWidget *mask_management)
    {
        mask_management->setWindowTitle(QApplication::translate("mask_management", "Form", nullptr));
        gb_info->setTitle(QApplication::translate("mask_management", "\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        gb_other->setTitle(QApplication::translate("mask_management", "\345\205\266\344\273\226\344\277\241\346\201\257\345\275\225\345\205\245:", nullptr));
        number->setItemText(0, QApplication::translate("mask_management", "\345\272\217\345\217\2671", nullptr));

        info_type->setItemText(0, QApplication::translate("mask_management", "\345\233\276\347\211\207\344\277\241\346\201\257", nullptr));
        info_type->setItemText(1, QApplication::translate("mask_management", "\351\233\266\344\273\266\344\277\241\346\201\257", nullptr));

        btn_choosefile->setText(QApplication::translate("mask_management", "\351\200\211\345\217\226\346\226\207\344\273\266", nullptr));
        label_2->setText(QApplication::translate("mask_management", "\350\243\205\351\205\215\344\275\223\357\274\232", nullptr));
        parts_type->setItemText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));

        btn_search_create->setText(QApplication::translate("mask_management", "\346\220\234\347\264\242/\345\210\233\345\273\272", nullptr));
        procedure_type->setItemText(0, QApplication::translate("mask_management", "\345\267\245\345\272\2171", nullptr));
        procedure_type->setItemText(1, QApplication::translate("mask_management", "\345\267\245\345\272\2172", nullptr));

        btn_add->setText(QApplication::translate("mask_management", "\346\267\273\345\212\240", nullptr));
        btn_delete->setText(QApplication::translate("mask_management", "\345\210\240\351\231\244", nullptr));
        gb_text->setTitle(QApplication::translate("mask_management", "\345\267\245\350\211\272\346\226\207\346\234\254\344\277\241\346\201\257\345\275\225\345\205\245:", nullptr));
        label_3->setText(QApplication::translate("mask_management", "\345\267\245\345\272\217\357\274\232", nullptr));
        label_4->setText(QApplication::translate("mask_management", "\351\203\250\344\273\266\357\274\232", nullptr));
        label->setText(QApplication::translate("mask_management", "\350\243\205\351\205\215\344\275\223\357\274\232", nullptr));
        produce->setText(QString());
        pushButton->setText(QApplication::translate("mask_management", "\346\226\207\346\234\254\344\277\256\346\224\271", nullptr));
        parts->setText(QString());
        assembly->setText(QString());
        gb_show_info->setTitle(QApplication::translate("mask_management", "\344\277\241\346\201\257\350\241\250", nullptr));
        label_8->setText(QApplication::translate("mask_management", "\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton->setText(QApplication::translate("mask_management", "\351\203\250\344\273\266\344\277\241\346\201\257", nullptr));
        radioButton_2->setText(QApplication::translate("mask_management", "\345\267\245\345\272\217\344\277\241\346\201\257", nullptr));
        radioButton_3->setText(QApplication::translate("mask_management", "\351\233\266\351\203\250\344\273\266\344\277\241\346\201\257", nullptr));
        btn_ok_9->setText(QApplication::translate("mask_management", "\345\210\267\346\226\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("mask_management", "\347\273\264\344\277\256\345\257\271\350\261\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("mask_management", "\351\203\250\344\273\2662", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("mask_management", "\345\267\245\345\272\2171-1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("mask_management", "\345\267\245\345\272\2171-2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("mask_management", "1-1\346\226\207\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("mask_management", "1-1\345\267\245\350\211\272\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("mask_management", "1-1\345\233\276\347\211\207\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("mask_management", "1-1\351\233\266\344\273\266\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("mask_management", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("mask_management", "2", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("mask_management", "\345\207\217\351\200\237\345\231\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("mask_management", "\345\217\221\345\260\204\345\215\225\345\205\203", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class mask_management: public Ui_mask_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASK_MANAGEMENT_H
