#include "protocol_add_even.h"



QString protocol_add_even::getMessage()
{
    QSqlDatabase db = this->open_DB();
          if(db.open())
          {
              QSqlQuery qry;
              qry.prepare("INSERT INTO [EventsApp].[dbo].[Event](Denumire,DataEv,Locatie,Pret,Categorie) values(:denumire,:data,:locatie,:pret,:tip)");

              qry.bindValue(":denumire", this->_denumire);
              qry.bindValue(":data", this->_data);
              qry.bindValue(":locatie", this->_locatie);
              qry.bindValue(":pret",this->_pret);
              qry.bindValue(":tip",this->_tip);
              qry.exec();
              db.close();
              return QString("1");
          }
else return QString("-1");
}
