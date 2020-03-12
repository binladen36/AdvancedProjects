#ifndef Developer_hpp
#define Developer_hpp

#include <iostream>
#include <string>

using namespace std;

class Developer
{
    protected:
        Developer* nextDev;
    public:
        virtual void develop(const string &product) = 0;
        void setNextDeveloper(Developer* nextDev);
};

class Desginer: public Developer
{
    public:
        void develop(const string &product);
};

class Coder: public Developer
{
    public:
        void develop(const string &product);
};

class Tester : public Developer
{
    public:
        void develop(const string &product);
};

#endif