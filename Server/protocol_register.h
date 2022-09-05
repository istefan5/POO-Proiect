#ifndef PROTOCOL_REGISTER_H
#define PROTOCOL_REGISTER_H
#include "Protocol.h"


class protocol_register :public Protocol
{
private:

    QString _user;
    QString _pass;
    QString _email;
public:

    protocol_register(const QString& user, const QString& pass, const QString& email) { _user = user;_pass = pass;_email = email;}

    QString getMessage();
    
};

#endif // PROTOCOL_REGISTER_H
