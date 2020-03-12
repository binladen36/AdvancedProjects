#ifndef Server_hpp
#define Server_hpp

#include <iostream>
#include <string>
#include "Printer.hpp"
using namespace std;

class Server
{
    public:
        void configurePrinter();
        Printer* getPrinter();
};

#endif