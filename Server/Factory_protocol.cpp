#include "Protocol.h"
#include "protocol_login.h"
#include "protocol_register.h"
#include "protocol_show_events.h"
#include "protocol_show_details.h"
#include "protocol_add_fav.h"
#include "protocol_show_fav.h"
#include "protocol_buy_ticket.h"
#include "protocol_show_tickets.h"
#include "protocol_show_notifications.h"
#include "protocol_show_stats.h"
#include "protocol_unmark_fav.h"
#include "protocol_add_even.h"
#include "protocol_log_admin.h"
#include "protocol_update_even.h"

Protocol* Factory_protocol::Create_LogInProtocol(const QString& user,const QString&pass)
{
    return new protocol_logIn(user,pass);
}
Protocol* Factory_protocol::Create_RegisterProtocol(const QString& user,const QString&pass, const QString& email)
{
    return new protocol_register(user,pass, email);
}
Protocol* Factory_protocol::Create_ShowProtocol(const QString&tip)
{
    return new protocol_show_events(tip);
}

Protocol *Factory_protocol::Create_DetailsProtocol(const QString &nume)
{
    return new protocol_show_details(nume);
}
Protocol *Factory_protocol::Create_AddFavProtocol(const QString &user,const QString &event)
{
    return new protocol_add_fav(user,event);
}
Protocol *Factory_protocol::Create_UnmarkFavProtocol(const QString &user,const QString &event)
{
    return new protocol_unmark_fav(user,event);
}
Protocol *Factory_protocol::Create_ShowFavProtocol(const QString &user)
{
    return new protocol_show_fav(user);
}
Protocol *Factory_protocol::Create_BuyProtocol(const QString &user,const QString&event)
{
    return new protocol_buy_ticket(user,event);
}
Protocol *Factory_protocol::Create_ShowTicketsProtocol(const QString &user)
{
    return new protocol_show_tickets(user);
}

Protocol *Factory_protocol::Create_ShowNotificationsProtocol(const QString &user)
{
    return new protocol_show_notifications(user);
}

Protocol *Factory_protocol::Create_ShowStatsProtocol()
{
    return new protocol_show_stats();
}

Protocol *Factory_protocol::Create_AdminLogProtocol(const QString& pass)
{
    return new protocol_log_admin(pass);
}

Protocol *Factory_protocol::Create_AddEventProtocol(const QString &denumire, const QString &data, const QString &locatie, const QString &pret, const QString &tip)
{
    return new protocol_add_even(denumire,data,locatie,pret,tip);

}

Protocol *Factory_protocol::Create_UpdateProtocol(const QString &event,const QString &pret)
{
    return new protocol_update_even(event,pret);

}


