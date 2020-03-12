#ifndef A_hpp
#define A_hpp

#include <iostream>
using namespace std;

class A 
{
    protected:
    int x;
    public:
    A();                // default constractor
    A(const int &x);    // parameter construcor
    ~A();               // destructor
};

class B : public A
{
    public:
    B();    // default constructor
    B(const int &x);
    ~B();   // destructor
};

#endif /* A_hpp */

