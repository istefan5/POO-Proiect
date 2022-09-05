#include "log.h"
#include <QObject>
class log
{
    virtual ~log(){}

};

class Factory_log
{
public:
    static class log* Create_LoginMessage(const QString &user);
    static class log* Create_RegisterInstance(const QString &user,const QString &email);
    static class log* Create_AddFavouriteInstance(const QString& user,const QString &event);
    static class log* Create_BuyTicketInstance(const QString &user,const QString &event);


};
