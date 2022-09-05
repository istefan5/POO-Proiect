#ifndef PROTOCOL_ADD_EVEN_H
#define PROTOCOL_ADD_EVEN_H

#include "Protocol.h"

class protocol_add_even : public Protocol
{
private:
    QString _denumire;
    QString _data;
    QString _locatie;
    QString _pret;
    QString _tip;
public:
    protocol_add_even(const QString &denumire, const QString &data, const QString &locatie, const QString &pret,const QString&tip)
    {
        _denumire=denumire;
        _data=data;
        _locatie=locatie;
        _pret=pret;
        _tip=tip;
    }
    QString getMessage();
};

#endif // PROTOCOL_ADD_EVEN_H
