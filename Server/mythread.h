#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtSql>
#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QObject>


class MyThread : public QThread
{
    Q_OBJECT
public:


    QSqlDatabase  db;
   explicit MyThread(qintptr ID,QObject *parent =nullptr):QThread(parent)
    {
        this->socketDescriptor = ID;

    }

    void logIn(QString user,QString pas);

    void Register(QString user,QString pas,QString email);

    void ShowMusicEvents();

    void ShowCulturalEvents();

    void ShowSportEvents();

    void ShowEventDetails(QString Event);

    void ShowFavouriteEvents(QString user);

    void MarkAsFavourite(QString user,QString eveniment);

    void BuyTicket(QString user,QString eveniment);

    void ShowEventsTickets(QString user);

    void UnMarkAsfavourite(QString user,QString eveniment);

    void ShowNotifications(QString user);

    void ShowEventsStats();

    void ForgotPassword(QString user,QString email);

    void run();

signals:


public slots:
    void readyRead();
    void disconnected();

public slots:

private:

    QTcpSocket *socket;
    qintptr socketDescriptor;
};

#endif
