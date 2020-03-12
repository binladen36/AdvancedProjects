#include "Server.hpp"

void Server::configurePrinter()
{
    Printer *spooler = getPrinter();
    cout << "Enter printer name: ";
    string name;
    cin >> name;

    spooler -> setName(name);

    cout << "Printer is configured" << endl;

}

Printer* Server::getPrinter()
{
    return Printer::getPrinter();
}