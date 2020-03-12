#include "Developer.hpp"

void Developer::setNextDeveloper(Developer *nextDev)
{
    this->nextDev = nextDev;
}

void Desginer::develop(const string &product)
{
    cout << "Design product " << product << endl;
    if (nextDev != NULL) nextDev -> develop(product);
}

void Coder::develop(const string &product)
{
    cout << "Code product " << product << endl;
    if (nextDev != NULL) nextDev -> develop(product);
}

void Tester::develop(const string &product)
{
    cout << "Test product " << product << endl;
    if (nextDev != NULL) nextDev -> develop(product);
}