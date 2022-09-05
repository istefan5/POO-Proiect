#include "protocol_show_stats.h"


QString protocol_show_stats::getMessage()
{
    QSqlDatabase db =this->open_DB();
    if(db.open())
    {
        QSqlQuery qry;
        QString data="";
        qry.exec("select e.Denumire,count(*) from BileteEvenimente b inner join Event e on b.IDEveniment=e.IDEvent "
                 "group by e.Denumire,e.IDEvent");
        while(qry.next())
        {
            data+="Evenimentul: "+qry.value(0).toString()+" are "+qry.value(1).toString()+" bilete cumparate." +"|";
        }

        if(data.length()>0)
       { data.chop(1);
         db.close();
        return data;
}

    }
    else return QString("-1");
}
