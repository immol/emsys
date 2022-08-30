#ifndef PRODUCT_H
#define PRODUCT_H

#include <QWidget>

namespace Ui {
class product;
}

class product : public QWidget
{
    Q_OBJECT

public:
    explicit product(QWidget *parent = nullptr);
    void tbInit();
    void MakeCharts_circle();
    void MakeCharts_bl();
    void MakeCharts_bar();
    ~product();
signals:
    void sigMaterial_record();

private:
    Ui::product *ui;
};

#endif // PRODUCT_H
