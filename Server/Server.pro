QT  -= gui
QT  += core
QT  += network
QT  += sql
CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Factory_protocol.cpp \
        Protocol.cpp \
        main.cpp \
        myserver.cpp \
        mythread.cpp \
        protocol_add_even.cpp \
        protocol_add_fav.cpp \
        protocol_buy_ticket.cpp \
        protocol_log_admin.cpp \
        protocol_login.cpp \
        protocol_register.cpp \
        Protocol.cpp \
        protocol_show_details.cpp \
        protocol_show_events.cpp \
        protocol_show_fav.cpp \
        protocol_show_notifications.cpp \
        protocol_show_stats.cpp \
        protocol_show_tickets.cpp \
        protocol_unmark_fav.cpp \
        protocol_update_even.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Protocol.h \
    myserver.h \
    mythread.h \
    Protocol.h \
    protocol_add_even.h \
    protocol_add_fav.h \
    protocol_buy_ticket.h \
    protocol_log_admin.h \
    protocol_login.h \
    protocol_register.h \
    protocol_show_details.h \
    protocol_show_events.h \
    protocol_show_fav.h \
    protocol_show_notifications.h \
    protocol_show_stats.h \
    protocol_show_tickets.h \
    protocol_unmark_fav.h \
    protocol_update_even.h
