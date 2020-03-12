#ifndef TextShape_hpp
#define TextShape_hpp

#include <string>
#include <iostream>

#include "BasicShape.hpp"
#include "FancyText.hpp"

using namespace std;

class TextShape: public BasicShape, public FancyText
{
    public:
        TextShape(const string &content);
        void draw() const;
};

#endif