#ifndef PC_hpp
#define PC_hpp

#include <iostream>
#include <string>

#include "Server.hpp"
#include "Printer.hpp"

using namespace std;

class PC
{
    private:
        Printer *spooler;
        Server *server;
    public:
        PC(Server*server);
        void connect();
        void print(const string &document);
};

#endif