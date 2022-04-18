#ifndef SPORT_H
#define SPORT_H

#include <QWidget>

namespace Ui {
class Sport;
}

class Sport : public QWidget
{
    Q_OBJECT

public:
    explicit Sport(QWidget *parent = nullptr);
    ~Sport();

private:
    Ui::Sport *ui;
};

#endif // SPORT_H
