#include "protocol_update_even.h"



QString protocol_update_even::getMessage()
{  QSqlDatabase db = this->open_DB();
    if(db.open())
    {
        QString id;
        QSqlQuery qry;

        qry.prepare("select IDEvent from [EventsApp].[dbo].[Event] where Denumire=:denumire");
        qry.bindValue(":denumire",this->_event);
        qry.exec();
           while (qry.next())
       {
              id=qry.value(0).toString();


           }
        qry.prepare("INSERT INTO [EventsApp].[dbo].[EventsUpdates] values(:id,:pret)");
        qry.bindValue(":id",id);
        qry.bindValue(":pret",this->_pret);
        qry.exec();
        db.close();
        return QString("1");
    }
else return QString("-1");
}
