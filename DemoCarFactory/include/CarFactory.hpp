#ifndef CarFactory_hpp
#define CarFactory_hpp

#include <iostream>
#include <string>

#include "Car.hpp"
#include "Wheel.hpp"
#include "Frame.hpp"

using namespace std;
class CarFactory
{
    public:
        Car* createCar();
        virtual ~CarFactory() {}
    protected:
        virtual Wheel* createWheel() =0; //abstract (pure virtual) method
        virtual Frame* createFrame() =0; //nt
};

class PlasticCarFactory : public CarFactory
{
    protected:
        Wheel* createWheel();
        Frame* createFrame();
};

class SteelCarFactory : public CarFactory
{
    protected:
        Wheel* createWheel();
        Frame* createFrame();
};
#endif