#ifndef InternetAccess_hpp
#define InternetAccess_hpp

#include <iostream>
#include <string>
#include <vector>


using namespace std;

class InternetAccess
{
    public:
        virtual bool access(const string &url) =0;

};

class AccessPoint : public InternetAccess
{
    public:
    bool access(const string &url);
};

class ProxyServer : public InternetAccess
{
    private:
        AccessPoint ac;
        vector<string> bad_sites;
    public:
        bool access(const string &url);
        void add_site(const string &url);
};

#endif