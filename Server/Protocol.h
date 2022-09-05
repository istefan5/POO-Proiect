#pragma once
#include <QObject>
#include <QtSql>
class Protocol
{public:
	virtual QString getMessage() = 0;
    QSqlDatabase open_DB()
    { 
        QSqlDatabase  db;
        QString servername = "LOCALHOST";
        QString dbname = "EventsApp";

        db = QSqlDatabase::addDatabase("QODBC");
        db.setConnectOptions();
        QString dsn = QString("DRIVER={SQL Server Native Client 11.0};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(servername, dbname);
        db.setDatabaseName(dsn);
        return db;
 
       

    }
    virtual ~Protocol(){};
};

class Factory_protocol
{
public:
    static Protocol* Create_LogInProtocol(const QString& user,const QString &pass);
    static Protocol* Create_RegisterProtocol(const QString& user, const QString& pass, const QString& email);
    static Protocol* Create_ShowProtocol(const QString&tip);
    static Protocol* Create_DetailsProtocol(const QString&nume);
    static Protocol* Create_AddFavProtocol(const QString &user,const QString &event);
    static Protocol* Create_UnmarkFavProtocol(const QString &user,const QString &event);
    static Protocol* Create_ShowFavProtocol(const QString&user);
    static Protocol* Create_BuyProtocol(const QString &user,const QString &event);
    static Protocol* Create_ShowTicketsProtocol(const QString &user);
    static Protocol* Create_ShowNotificationsProtocol(const QString&user);
    static Protocol* Create_ShowStatsProtocol();
    static Protocol* Create_AdminLogProtocol(const QString& pass);
    static Protocol* Create_AddEventProtocol(const QString&denumire, const QString&data, const QString&locatie, const QString&pret, const QString& tip);
    static Protocol* Create_UpdateProtocol(const QString &event,const QString &pret);


};

