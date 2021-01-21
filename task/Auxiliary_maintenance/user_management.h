#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

#include <QWidget>

namespace Ui {
class user_management;
}

class user_management : public QWidget
{
    Q_OBJECT

public:
    explicit user_management(QWidget *parent = nullptr);
    ~user_management();

private:
    Ui::user_management *ui;
};

#endif // USER_MANAGEMENT_H
