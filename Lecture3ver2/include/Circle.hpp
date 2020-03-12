#ifndef Circle_hpp
#define Circle_hpp

#include <iostream>
#include <string>
#include "Shape.hpp"


using namespace std;

class Circle : public Shape
{
    public:
        Circle();
        Circle(const string &name, double const &radius);
        void setRadius(double const &radius);
        
    private:
        double radius;
        double const pi = 3.14;
};

#endif /* Circle_hpp */