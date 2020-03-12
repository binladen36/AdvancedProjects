#include "InternetAccess.hpp"

bool AccessPoint::access(const string &url)
{
    if (url.size() == 0)
    {
        cout << "Empty url" << endl;
        return false;
    }

    cout << "Access " << url << "successful!" << endl;
    return true;
}

bool ProxyServer::access(const string &url)
{
    for ( int i = 0; i < bad_sites.size(); i++)
    {
        if (url == bad_sites[i])
        {
            cout << "Access to "<< url << " is denied" << endl;
            return false;
        }
        
    }
    return ac.access(url);
}

void ProxyServer::add_site(const string &url)
{
    bad_sites.push_back(url);
}