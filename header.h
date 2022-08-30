#ifndef HEADER_H
#define HEADER_H

#include <QWidget>

namespace Ui {
class header;
}

class header : public QWidget
{
    Q_OBJECT

public:
    explicit header(QWidget *parent = nullptr);
    ~header();

private:
    Ui::header *ui;
};

#endif // HEADER_H
