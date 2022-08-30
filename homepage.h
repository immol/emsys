#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>

namespace Ui {
class homepage;
}

class homepage : public QWidget
{
    Q_OBJECT

public:
    explicit homepage(QWidget *parent = 0);
    ~homepage();
    void HomePageInit();
    void MakeCharts();
    void MakeCharts_cy();
    void HomePageDownInit();

private:
    Ui::homepage *ui;

};

#endif // HOMEPAGE_H
