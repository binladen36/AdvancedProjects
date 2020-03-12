#include "PC.hpp"

PC::PC(Server* server)
{
    this->server = server;
}

void PC::connect()
{
    spooler = server->getPrinter();
}

void PC::print(const string &document)
{
    cout << "Document "<< document << " is printing by printer";
    cout << spooler->getName() << endl;
}

