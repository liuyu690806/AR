#ifndef PERSONAL_INF_H
#define PERSONAL_INF_H

#include <QWidget>

namespace Ui {
class personal_inf;
}

class personal_inf : public QWidget
{
    Q_OBJECT

public:
    explicit personal_inf(QWidget *parent = nullptr);
    ~personal_inf();

private:
    Ui::personal_inf *ui;
};

#endif // PERSONAL_INF_H
