#ifndef Car_hpp
#define Car_hpp

#include <iostream>
#include <string>
#include <vector>

#include "Wheel.hpp"
#include "Frame.hpp"

using namespace std;

class Car
{
    private:
        Frame *frame;
        vector<Wheel*> wheels;
    public:
        void setFrame(Frame* f) {frame = f;}
        void addWheel(Wheel* w) { wheels.push_back(w);}
        void display();
        ~Car();
};

#endif;