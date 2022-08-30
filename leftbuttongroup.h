#ifndef LEFTBUTTONGROUP_H
#define LEFTBUTTONGROUP_H

#include <QWidget>

namespace Ui {
class LeftButtonGroup;
}

class LeftButtonGroup : public QWidget
{
    Q_OBJECT

public:
    explicit LeftButtonGroup(QWidget *parent = 0);
    void InitWid();
    ~LeftButtonGroup();

private:
    Ui::LeftButtonGroup *ui;
signals:
    void sigProduct();
    void sigHome();
};

#endif // LEFTBUTTONGROUP_H
