#include "Frame.hpp"

void Frame::display()
{
    cout << "Car frame, color is" << color << endl;
}

void PlasticFrame::display()
{
    Frame::display(); // reuse display in Frame
    cout << "Plastic type is " << type << endl;
}

void SteelFrame::display()
{
    Frame::display();
    cout << "Steel level is " << level << endl;
}
