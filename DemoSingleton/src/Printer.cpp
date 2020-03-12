#include "Printer.hpp"

Printer* Printer::spooler = NULL;
Printer::Printer()
{
        name = "Default Printer";
}

void Printer::setName(const string &name)
{
    this->name = name;
}

string Printer::getName()
{
    return name;
}

Printer* Printer::getPrinter()
{
    if (spooler == NULL)
    {
        spooler = new Printer();
    }
    return spooler;
}