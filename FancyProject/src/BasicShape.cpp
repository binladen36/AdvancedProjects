#include "BasicShape.hpp"

BasicShape:: BasicShape()
{

}

BasicShape:: ~BasicShape()
{

}
// implementation Line
Line::Line()
{
    length = 1;
}

Line::Line(const int &length)
{
    this ->length = length;
}

void Line::draw() const
{
    cout << "+";

    for ( int i =0; i < length; i++)
        cout << "-";

    cout << "+" << endl;
}

//Implementation Rectangle
Rectangle::Rectangle()
{
        width = 2;
        height = 2;
}

Rectangle::Rectangle(const int &w, const int &h)
{
    width = w;
    height = h;
}

void Rectangle::draw() const
{
    draw_horizontal_line();
    draw_vertical_line();
    draw_horizontal_line();
}

void Rectangle::draw_horizontal_line() const
{
    cout << "+";
    for (int i = 0; i < width; i ++)
        cout << "-";
    cout << "+" <<endl;
}

void Rectangle::draw_vertical_line() const
{   
    for (int j = 0; j < height; j ++)
    {
        cout << "|";
        for (int i = 0; i < width; i ++)
            cout << " ";
        cout << "|" <<endl;
    }
}


