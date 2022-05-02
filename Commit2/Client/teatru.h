#ifndef TEATRU_H
#define TEATRU_H

#include <QWidget>

namespace Ui {
class Teatru;
}

class Teatru : public QWidget
{
    Q_OBJECT

public:
    explicit Teatru(QWidget *parent = nullptr);
    ~Teatru();

private:
    Ui::Teatru *ui;
};

#endif // TEATRU_H
