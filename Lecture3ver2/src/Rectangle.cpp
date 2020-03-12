#include "Rectangle.hpp"
//constructor cua Rectangle se goi den parameter cua constructor cua SHape
Rectangle::Rectangle() : Shape("Rectangle")
{
    //name ="Rectangle" //ko nen lap lai code
    name = "Rectangle";
    width = 1.0;
    height = 2.0;
}

//constructor cua Rectangle se goi den constructor cua Shape
Rectangle:: Rectangle (const string &name,
                       const double &width,
                       const double &height) : Shape(name)
{
    //this->name =name ko nen lap lai code
    this->width = width;
    this->height = height;
}                       

double Rectangle::area() const
{
    return width * height;
}


double Rectangle::perimeter() const
{
    return 2 * (width + height);
}
