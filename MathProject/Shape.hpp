#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>
#include <string>
using namespace std;

#define PI 3.1416

class Shape
{
    protected:
        string name;
        
    public:
        Shape();
        Shape(const string &name);

        virtual double area() const;
        virtual double perimeter() const;

        void show() const; 
        virtual ~Shape();
};

class Circle : public Shape
{
    private:
        double radius;
    public:
        Circle();
        Circle(const double &radius, const string &name);

        double area() const;
        double perimeter() const;     
};
#endif /* SHape_hpp */