#ifndef _WS_COMMUNICATOR_
#define _WS_COMMUNICATOR_

#include "Communicator.h"
#include <queue>

class Message;
class WebSocketsServer;

class WebSocketCTR: public ICTR
{
    public:
    /*
    - create an instance of SerialCTR with baudRate
    */
    static WebSocketCTR* CreateInstance(int port = 8081);

    virtual bool    Available() override;
    virtual int     Write(Message& buf) override;
    virtual Message *Read() override;
    virtual void    Flush();
    virtual void    Update() override;
    virtual uint8_t GetBoxSize() const override;

    private:
    WebSocketCTR(int port);
    
    void _receive(Message* msg);

    std::queue<Message*> fReceivedMessage;

    WebSocketsServer* fWebSocketServer;
};

#endif