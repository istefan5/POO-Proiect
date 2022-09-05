#include "protocol_log_admin.h"


QString protocol_log_admin::getMessage()
{

    QSqlDatabase db = this->open_DB();
    if(db.open())
    {
        QSqlQuery qry;
        qry.exec("SELECT * FROM [EventsApp].[dbo].[Users] where IDUser=1 ");
        while (qry.next())
        {
        if (this->_password == qry.value(2).toString())
        {   db.close();
            return QString("1");

        }
        else
        {
            db.close();
            return  QString("0");
        }


        }

    }
    else return QString("-1");
}
