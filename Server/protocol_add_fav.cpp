#include "protocol_add_fav.h"



QString protocol_add_fav::getMessage()
{       QSqlDatabase db = this->open_DB();
        if(db.open())
        {

            QSqlQuery qry;

            qry.prepare("SELECT count(*) FROM [EventsApp].[dbo].[UsersFavEvents] f inner join [EventsApp].[dbo].[Users] u on f.IDUser=u.IDUser "
                     "inner join Event e on f.IDEvent = e.IDEvent "
                     "WHERE u.Username=:user and e.Denumire=:eveniment");
            qry.bindValue(":user",_user);
            qry.bindValue(":eveniment",_event);
            qry.exec();


            if(qry.next())
                {

                if(qry.value(0).toInt()==0)
             {  qry.prepare("declare @user int = (select IDUser from Users where Username=:user)"
                                 "  declare @even int= (select idevent from Event where Denumire =:eveniment)"
                                 " insert into UsersFavEvents(IDuser,IdEVENT) values "
                                 " (@user,@even)");
                    qry.bindValue(":user",_user);
                    qry.bindValue(":eveniment",_event);
                    qry.exec();
                    db.close();
                 return QString("1");


             }
             else
               { db.close();
                return QString("0");
               }
             }
            }
        else return QString("-1");


}
