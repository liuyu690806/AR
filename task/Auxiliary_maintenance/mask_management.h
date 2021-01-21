#ifndef MASK_MANAGEMENT_H
#define MASK_MANAGEMENT_H

#include <QWidget>

namespace Ui {
class mask_management;
}

class mask_management : public QWidget
{
    Q_OBJECT

public:
    explicit mask_management(QWidget *parent = nullptr);
    ~mask_management();

private:
    Ui::mask_management *ui;
};

#endif // MASK_MANAGEMENT_H
