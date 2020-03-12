#ifndef Square_hpp
#define Square_hpp

#include <iostream>
#include <string>
#include "Rectangle.hpp"


using namespace std;

class Square : public Rectangle
{
    public:
        Square();
        Square(const string &name,
               const double &side);
};

#endif /* Square_hpp */