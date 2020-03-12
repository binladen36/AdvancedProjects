#include "Wheel.hpp"

void Wheel::display()
{
    cout << "Size is " << size << endl;
}

void PlasticWheel::display()
{
    cout << "Plastic wheel, ";
    Wheel::display();
}

void SteelWheel::display()
{
    cout << "Steel wheel, ";
    Wheel::display();
}