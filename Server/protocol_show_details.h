#ifndef PROTOCOL_SHOW_DETAILS_H
#define PROTOCOL_SHOW_DETAILS_H

#include "Protocol.h"

class protocol_show_details : public Protocol
{
private:
     QString _nume;
public:

    protocol_show_details(const QString &nume ){_nume=nume;}
    QString getMessage();

};

#endif // PROTOCOL_SHOW_DETAILS_H
