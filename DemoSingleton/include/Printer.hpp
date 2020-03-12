#ifndef Printer_hpp
#define Printer_hpp

#include <iostream>
#include <string>

using namespace std;

class Printer
{
    private:
        static Printer *spooler;
        string name;
        Printer();
    public:
        static Printer* getPrinter();
        void setName(const string &name);
        string getName();
};

#endif