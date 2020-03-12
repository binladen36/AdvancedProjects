#include "Shape.hpp"

Shape::Shape()
{
    name = "default!";
}

Shape::Shape(const string &name)
{
    this->name = name;
}

double Shape:: area() const
{
    return 0.0;
}

double Shape::perimeter() const
{
    return 0.0;
}

Circle::Circle() : Shape("circle")
{
    radius = 1.0; // name?
}

Circle::Circle(const double &radius, const string &name) : Shape(name)
{
    this->radius = radius;
    this->name = name;
}

double Circle::area() const
{
    return PI * radius * radius;
}

double Circle::perimeter() const
{
    return 2 * PI * radius;
}

void Shape::show() const
{
    cout << "Shape name: "<< name << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}