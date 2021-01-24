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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mask_management
{
public:
    QGroupBox *gb_text;
    QVBoxLayout *verticalLayout_5;
    QWidget *wid_texttal;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_5;
    QPushButton *btn_ok;
    QGroupBox *gb_other;
    QWidget *wid_choosefile;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *btn_choosefile;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox;
    QPushButton *btn_menuok;
    QTableWidget *tableWidget;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *mask_management)
    {
        if (mask_management->objectName().isEmpty())
            mask_management->setObjectName(QString::fromUtf8("mask_management"));
        mask_management->resize(400, 300);
        gb_text = new QGroupBox(mask_management);
        gb_text->setObjectName(QString::fromUtf8("gb_text"));
        gb_text->setGeometry(QRect(310, 10, 71, 81));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gb_text->sizePolicy().hasHeightForWidth());
        gb_text->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        gb_text->setFont(font);
        verticalLayout_5 = new QVBoxLayout(gb_text);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        wid_texttal = new QWidget(gb_text);
        wid_texttal->setObjectName(QString::fromUtf8("wid_texttal"));
        verticalLayout = new QVBoxLayout(wid_texttal);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_2 = new QTextEdit(wid_texttal);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);

        widget_3 = new QWidget(wid_texttal);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        comboBox_4 = new QComboBox(widget_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_3->addWidget(comboBox_4);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        comboBox_5 = new QComboBox(widget_3);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        horizontalLayout_3->addWidget(comboBox_5);

        btn_ok = new QPushButton(widget_3);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout_3->addWidget(btn_ok);


        verticalLayout->addWidget(widget_3);


        verticalLayout_5->addWidget(wid_texttal);

        gb_other = new QGroupBox(mask_management);
        gb_other->setObjectName(QString::fromUtf8("gb_other"));
        gb_other->setGeometry(QRect(10, 10, 91, 61));
        sizePolicy.setHeightForWidth(gb_other->sizePolicy().hasHeightForWidth());
        gb_other->setSizePolicy(sizePolicy);
        gb_other->setFont(font);
        wid_choosefile = new QWidget(gb_other);
        wid_choosefile->setObjectName(QString::fromUtf8("wid_choosefile"));
        wid_choosefile->setGeometry(QRect(10, 10, 191, 231));
        sizePolicy.setHeightForWidth(wid_choosefile->sizePolicy().hasHeightForWidth());
        wid_choosefile->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(wid_choosefile);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_2 = new QWidget(wid_choosefile);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        btn_choosefile = new QPushButton(widget_2);
        btn_choosefile->setObjectName(QString::fromUtf8("btn_choosefile"));

        horizontalLayout_2->addWidget(btn_choosefile);


        gridLayout->addWidget(widget_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(wid_choosefile);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);

        widget = new QWidget(wid_choosefile);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(comboBox);

        btn_menuok = new QPushButton(widget);
        btn_menuok->setObjectName(QString::fromUtf8("btn_menuok"));

        horizontalLayout->addWidget(btn_menuok);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        tableWidget = new QTableWidget(mask_management);
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
        tableWidget->setGeometry(QRect(40, 90, 256, 131));
        treeWidget = new QTreeWidget(mask_management);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(275, 20, 111, 192));

        retranslateUi(mask_management);

        QMetaObject::connectSlotsByName(mask_management);
    } // setupUi

    void retranslateUi(QWidget *mask_management)
    {
        mask_management->setWindowTitle(QApplication::translate("mask_management", "Form", nullptr));
        gb_text->setTitle(QApplication::translate("mask_management", "\346\226\207\346\234\254\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("mask_management", "\351\203\250\344\273\2662", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("mask_management", "\345\267\245\345\272\2171", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("mask_management", "\345\267\245\345\272\2172", nullptr));

        btn_ok->setText(QApplication::translate("mask_management", "\347\241\256\345\256\232", nullptr));
        gb_other->setTitle(QApplication::translate("mask_management", "\345\205\266\344\273\226\344\277\241\346\201\257\345\275\225\345\205\245", nullptr));
        btn_choosefile->setText(QApplication::translate("mask_management", "\351\200\211\345\217\226\346\226\207\344\273\266", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("mask_management", "\351\203\250\344\273\2662", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("mask_management", "\351\203\250\344\273\2663", nullptr));

        comboBox_3->setItemText(0, QApplication::translate("mask_management", "\345\267\245\345\272\2171", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("mask_management", "\345\267\245\345\272\2172", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("mask_management", "\345\267\245\345\272\2173", nullptr));

        comboBox->setItemText(0, QApplication::translate("mask_management", "\345\233\276\347\211\207\344\277\241\346\201\257", nullptr));

        btn_menuok->setText(QApplication::translate("mask_management", "\347\241\256\345\256\232", nullptr));
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

        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("mask_management", "1", nullptr));

        const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("mask_management", "\345\207\217\351\200\237\345\231\250", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("mask_management", "\345\267\245\345\272\2171", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("mask_management", "\346\226\207\346\234\254", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("mask_management", "\351\233\266\344\273\266", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem3->child(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("mask_management", "\345\267\245\350\211\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem3->child(3);
        ___qtreewidgetitem7->setText(0, QApplication::translate("mask_management", "\345\233\276\347\211\207", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("mask_management", "\345\267\245\345\272\2172", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2662", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("mask_management", "\345\217\221\345\260\204\345\215\225\345\205\203", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(0, QApplication::translate("mask_management", "\351\203\250\344\273\2661", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class mask_management: public Ui_mask_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASK_MANAGEMENT_H
