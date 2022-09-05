#include "protocol_show_events.h"


QString protocol_show_events::getMessage()
{
     QSqlDatabase db = this->open_DB();
     if(db.open())
     {
    QSqlQuery qry;
    QString data;

    qry.exec("SELECT * FROM [EventsApp].[dbo].[Event] where Categorie= "+this->_tip);
    while(qry.next())
    {

        data+=(qry.value(1).toString()+"|");

    }

    if(data.length()>0)
   { data.chop(1);
    db.close();
    return data;}

     }
     else return QString("-1");
}
