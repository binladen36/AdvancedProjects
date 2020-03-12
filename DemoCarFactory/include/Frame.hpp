#ifndef Frame_hpp
#define Frame_hpp

using namespace std;
#include <iostream>
#include <string>

class Frame
{
    protected:
        string color;
    public:
        Frame() { color = "BLACK";}
        Frame(const string &color) {this->color = color;}
        virtual ~Frame() {}
        virtual void display();
};

class PlasticFrame: public Frame
{
    private:
        string type;
    public:
        PlasticFrame(): Frame() {type = "Poly";}
        PlasticFrame(const string &color, const string &type) : Frame(color)
        {
            this->type = type;
        }
        void display();
};

class SteelFrame: public Frame
{
    private:
        int level;
    public:
        SteelFrame(): Frame() { level = 1;}
        SteelFrame(const string &color, const int &level) : Frame(color)
        {
            this->level = level;
        }
        void display();
};

#endif