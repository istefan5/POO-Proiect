#include "protocol_buy_ticket.h"


QString protocol_buy_ticket::getMessage()
{   QSqlDatabase db=this->open_DB();
    if(db.open())
    {
    QSqlQuery qry;

      qry.prepare("declare @user int = (select IDUser from Users where Username=:user)"
                         "  declare @even int= (select idevent from Event where Denumire =:eveniment)"
                         " insert into BileteEvenimente(IDUser,IDEveniment) values"
                         " (@user,@even)");
      qry.bindValue(":user",_user);
      qry.bindValue(":eveniment",_event);
      qry.exec();
       db.close();
       return QString("1");

    }
    else return QString("-1");
}
