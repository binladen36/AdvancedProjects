#include "Circle.hpp"

Circle::Circle()
{
    //
}

Circle::Circle(const string &name, double const &radius) : Shape(name)
{
    this->radius = radius;
}

double Circle::area() const
{
    return pi * radius * radius;
}


double Circle::perimeter() const
{
    return 2 * (pi + radius);
}

