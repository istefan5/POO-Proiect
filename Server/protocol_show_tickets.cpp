#include "protocol_show_tickets.h"

QString protocol_show_tickets::getMessage()
{
    QSqlDatabase db = this->open_DB();
    if(db.open())
    {
        QSqlQuery qry;
        QString data="";
        qry.prepare("SELECT e.Denumire,count (*) FROM [EventsApp].[dbo].[BileteEvenimente] f inner join [EventsApp].[dbo].[Users] u on f.IDUser=u.IDUser "
                 "inner join Event e on f.IDEveniment = e.idevent "
                 "WHERE u.Username=:user "
                    "group by e.Denumire,e.idevent");
        qry.bindValue(":user",_user);
        qry.exec();

        while(qry.next())
        {

            data+=("Evenimentul: "+qry.value(0).toString()+"\nBilete achizitionate: |"+qry.value(1).toString()+"~");

        }

        if(data.length()>0)
      {  data.chop(1);
        db.close();
        return data;
        }

    }
    else return QString("-1");

}
