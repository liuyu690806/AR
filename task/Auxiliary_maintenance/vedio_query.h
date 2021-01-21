#ifndef VEDIO_QUERY_H
#define VEDIO_QUERY_H

#include <QWidget>

namespace Ui {
class vedio_query;
}

class vedio_query : public QWidget
{
    Q_OBJECT

public:
    explicit vedio_query(QWidget *parent = nullptr);
    ~vedio_query();

private:
    Ui::vedio_query *ui;
};

#endif // VEDIO_QUERY_H
