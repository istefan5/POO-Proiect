#include "protocol_login.h"

QString protocol_logIn::getMessage()
{
    QSqlDatabase db = this->open_DB();
    if(db.open())
    {
    QSqlQuery qry;
    qry.exec("SELECT * FROM [EventsApp].[dbo].[Users]");

    while (qry.next())
    {

        if (this->_user == qry.value(1).toString() && this->_pass == qry.value(2).toString())
        {   db.close();
            return QString("1");

        }

    }
    db.close();
    return  QString("0");
}
    else return QString("-1");

}
