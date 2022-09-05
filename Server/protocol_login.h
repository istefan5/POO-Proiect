#ifndef PROTOCOL_LOGIN_H
#define PROTOCOL_LOGIN_H

#include "Protocol.h"
class protocol_logIn:public Protocol
{
private:
    QString _user;
    QString _pass;
public:

    protocol_logIn(const QString& user, const QString& pass) { _user = user;_pass = pass; }

    QString getMessage();
  
};

#endif // PROTOCOL_LOGIN_H
