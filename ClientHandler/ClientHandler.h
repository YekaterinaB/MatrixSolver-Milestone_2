//
// Created by elad on 07/01/2020.
//

#ifndef MILESTONE_2_CLIENTHANDLER_H
#define MILESTONE_2_CLIENTHANDLER_H

#include <iostream>
#include <sys/socket.h>
#include "Solver.h"
#include "CacheManager.h"

using namespace std;

template<typename P, typename S>
class ClientHandler {

protected:
    virtual int writeToClient(int clientFD, const char *message) {
        send(clientFD , message , strlen(message) , 0 );
        std::cout<<"Message sent\n"<<std::endl;
        return 0;
    };

public:
    virtual void handleClient(istream is, ostream os) = 0;

};

#endif //MILESTONE_2_CLIENTHANDLER_H
