#include "protocol_show_fav.h"


QString protocol_show_fav::getMessage()
{
    QSqlDatabase db = this->open_DB();
    if(db.open())
    {
        QSqlQuery qry;
        QString data;
        qry.prepare("SELECT e.Denumire FROM [EventsApp].[dbo].[UsersFavEvents] f inner join [EventsApp].[dbo].[Users] u on f.IDUser=u.IDUser "
                 "inner join Event e on f.IDEvent = e.idevent "
                 "WHERE u.Username=:user");
        qry.bindValue(":user",_user);
        qry.exec();
        while(qry.next())
        {

            data+=(qry.value(0).toString()+"~");

        }

        if(data.length()>0)
        {data.chop(1);
        db.close();
        return data;}
        else {
            db.close();
            return QString("0");
             }
    }
    else return QString("-1");
}
