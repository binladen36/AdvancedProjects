#ifndef PC_hpp
#define PC_hpp

#include <iostream>
#include <string>
#include "InternetAccess.hpp"

using namespace std;

class PC
{
    private:
        InternetAccess* ia;
    public:
        void configure_internet(); //config accesspoint
        void configure_proxy();    //config proxyserver
        bool access(const string &url);
};

class InternetBrowser
{
    private:
        PC pc;
    public:
        void setPC(PC p);
        void browse(const string &url);
};
#endif