#ifndef PROTOCOL_LOG_ADMIN_H
#define PROTOCOL_LOG_ADMIN_H

#include "Protocol.h"

class protocol_log_admin : public Protocol
{
private:
    QString _password;
public:
    protocol_log_admin(const QString &password){_password=password;}

    QString getMessage();
};

#endif // PROTOCOL_LOG_ADMIN_H
