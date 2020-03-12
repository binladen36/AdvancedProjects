#ifndef Wheel_hpp
#define Wheel_hpp

#include <iostream>
#include <string>
using namespace std;

class Wheel
{
    protected:
        int size;
    public:
        Wheel() { size = 1; }
        Wheel(const int &size) { this ->size = size; }
        virtual ~Wheel(){}
        virtual void display();
};

class PlasticWheel: public Wheel
{
    
    public:
        PlasticWheel(): Wheel() {};
        PlasticWheel(const int &size): Wheel(size) {};
        void display();
};

class SteelWheel: public Wheel
{

    public:
        SteelWheel(): Wheel() {};
        SteelWheel(const int &size): Wheel(size) {};
        void display();
};

#endif