#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>
using namespace std;

class Shape
{
    protected:
        string name;
        
    public:
        Shape();
        Shape(const string &name);

        virtual double area() const = 0;
        virtual double perimeter() const = 0;

        void show() const; 
        virtual ~Shape();
};

#endif /*Shape_hpp*/