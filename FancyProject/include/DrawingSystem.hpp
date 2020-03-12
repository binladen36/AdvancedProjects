#ifndef DrawingSystem_hpp
#define DrawingSystem_hpp

#include <iostream>
#include <string>
#include "BasicShape.hpp"
#include <vector>

using namespace std;

class DrawingSystem
{
    private:
        vector<BasicShape*> shapes;
    public:
        DrawingSystem();
        ~DrawingSystem();
        void drawing() const;
};

#endif