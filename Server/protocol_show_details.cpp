#include "protocol_show_details.h"


QString protocol_show_details::getMessage()
{
    QSqlDatabase db = this->open_DB();
    if(db.open())
    {
        QSqlQuery qry;
        QString data="Denumire: ";
        qry.prepare("SELECT * FROM [EventsApp].[dbo].[Event] where Denumire= :Event");
        qry.bindValue(":Event",this->_nume);
        qry.exec();
        while(qry.next())
        {

            data+=(qry.value(1).toString()+"|Data: "+qry.value(2).toString()+"|Locatie: "+qry.value(3).toString()+"|Pret: "+qry.value(4).toString()+" lei");

        }

        db.close();
       return data;
    }
    else return QString("-1");
}
