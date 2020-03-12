#include "Shape.hpp"

Shape::Shape()
{
    name = "default!";
}

Shape::Shape(const string &name)
{
    this->name = name;
}

void Shape::show() const
{
    cout << "Shape name: "<< name << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}

Shape::~Shape()
{
    //nothing to do
}