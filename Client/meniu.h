#ifndef MENIU_H
#define MENIU_H
#include <QTcpSocket>
#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class Meniu;
}

class Meniu : public QWidget
{
    Q_OBJECT

public:
    QString username;

    explicit Meniu(QString user,QTcpSocket *S, qintptr sd,  QWidget *parent = nullptr);
    ~Meniu();


private slots:

    void on_pushButton_LogOut_clicked();

    void on_pushButton_Events_clicked();

    void on_pushButton_BackEvents_clicked();

    void on_pushButton_Istoric_clicked();

    void on_pushButton_BackIstoric_clicked();

    void on_pushButton_Notificari_clicked();

    void on_pushButton_BackNotificari_clicked();

    void on_pushButton_Muzica_clicked();

    void on_pushButton_Teatru_clicked();

    void on_pushButton_Sport_clicked();

    void on_pushButton_Detalii_clicked();

    void on_pushButton_Favorit_clicked();

    void on_pushButton_CumparaBilet_clicked();

    void on_pushButton_BackEvenimente_clicked();

    void on_pushButton_EvenimenteFavorite_clicked();

    void on_pushButton_BileteCumparate_clicked();

    void on_pushButton_Defavorite_clicked();

    void check_if_item_selected();

    void on_listWidget_Evenimente_itemPressed(QListWidgetItem *item);

    void on_pushButton_Noutati_clicked();

    void on_pushButton_Statistici_clicked();

    void check_if_eventfavorit_selected();

    void on_listWidget_Evenimente_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

signals:

    void logOutMeniu();

private:
    \
    Ui::Meniu *ui;
    QTcpSocket *socket;
    qintptr socketDescriptor;


};

#endif // MENIU_H
