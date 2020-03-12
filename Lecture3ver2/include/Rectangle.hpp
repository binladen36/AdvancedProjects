#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "Shape.hpp"
#include <iostream>
#include <string>

using namespace std;

class Rectangle : public Shape
{
    protected:
        double width;
        double height;
    public:
        Rectangle();
        Rectangle(const string &name,
                  const double &width,
                  const double &height);
        //override 2 virtual methods in Shape
        double area() const;
        double perimeter() const;
};

#endif /* Rectangle_hpp*/