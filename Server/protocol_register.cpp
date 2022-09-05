#include "protocol_register.h"

QString protocol_register::getMessage()
{
    QSqlDatabase db = this->open_DB();
    if(db.open())
    {
    QSqlQuery qry;
    qry.exec("SELECT * FROM [EventsApp].[dbo].[Users]");


    while (qry.next())
    {

        if ((this->_user == qry.value(1).toString()) and (this->_email == qry.value(3).toString()))
        {
            db.close();
            return QString("0");
       

        }

    }
    qry.prepare("INSERT INTO [EventsApp].[dbo].[Users](Username,Password,email) values(:user,:pas,:email)");

    qry.bindValue(":user", this->_user);
    qry.bindValue(":pas", this->_pass);
    qry.bindValue(":email", this->_email);
    qry.exec();
    db.close();
    return QString("1");
    }
    else return QString("-1");
}
