#include "protocol_show_notifications.h"


QString protocol_show_notifications::getMessage()
{
    QSqlDatabase db =this->open_DB();
    if(db.open())
    {
        QSqlQuery qry;
        QString data="";
        qry.prepare("select ev.Denumire,eu.PretNou from EventsUpdates eu inner join UsersFavEvents u on eu.IDEvent=u.IDEvent "
                   " inner join Users us on u.IDUser=us.IDUser "
                   " inner join Event ev on eu.IDEvent=ev.IDEvent "
                   " where us.Username=:user");
        qry.bindValue(":user",_user);
        qry.exec();

        while(qry.next())
        {

            data+=("Evenimentul: "+qry.value(0).toString()+" si-a actualizat pretul biletului la: "+qry.value(1).toString()+"lei ~");

        }

        if(data.length()>0)
        {data.chop(1);
             db.close();
        return data;}

        else { db.close();
            return QString("0");
        }

    }
    else return QString("-1");
}
