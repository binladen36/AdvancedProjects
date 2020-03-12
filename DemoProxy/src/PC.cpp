#include "PC.hpp"

void PC::configure_internet()
{
    ia = new AccessPoint();
}

void PC::configure_proxy()
{
    ProxyServer *ps = new ProxyServer();
    ps->add_site("facebook.com");
    ps->add_site("blast.com");
    //...
    ia = ps;

}

bool PC::access(const string &url)
{
    return ia->access(url);
}

void InternetBrowser::setPC(PC p)
{
    this->pc= p;
}

void InternetBrowser:: browse(const string &url)
{
    if (pc.access(url))
    {
        cout << "Start browsing " << url << endl;
    }
}