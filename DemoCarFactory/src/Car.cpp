#include "Car.hpp"

void Car::display()
{
    frame->display();
    for (int i=0; i < wheels.size(); i++)
    {
        cout << (i+1) << ". ";
        wheels[i]->display();
    }
}

Car::~Car()
{
    delete frame;
    for (int i = 0 ; i < wheels.size(); i++)
        delete wheels[i];
}