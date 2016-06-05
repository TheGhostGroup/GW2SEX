#ifndef LOGINCLIENT_H
#define LOGINCLIENT_H

/*
 * GW2SEX - Guild Wars 2 Server Emulator For xnix
 *
 * Developed by Nomelx
 * */

#include <string.h>
#include <stdio.h>

#include "../Networking/clientconnection.h"
#include "../Networking/xmlpacket.h"
#include "../GW2/gw2common.h"
#include "../Util/system.h"

#include "securelogin.h"
#include "loginsession.h"

class LoginClient : public ClientConnection
{
public:
    LoginClient();
    LoginClient(ClientConnection& Base);
public:
    void Tick(ServerSSL* SSL);
private:
    XMLPacket m_Packet;
    SecureLogin m_Login;
    LoginSession m_Session;
};

#endif // LOGINCLIENT_H