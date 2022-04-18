#ifndef MUZICA_H
#define MUZICA_H

#include <QWidget>

namespace Ui {
class Muzica;
}

class Muzica : public QWidget
{
    Q_OBJECT

public:
    explicit Muzica(QWidget *parent = nullptr);
    ~Muzica();

private:
    Ui::Muzica *ui;
};

#endif // MUZICA_H
