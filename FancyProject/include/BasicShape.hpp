#ifndef BasicShape_hpp
#define BasicShape_hpp

#include <iostream>
#include <string>

using namespace std;

class BasicShape
{
    public:
        BasicShape();
        //virtual(da hinh)
        virtual ~BasicShape();
        virtual void draw() const = 0;
};

class Line: public BasicShape
{
    private:
        int length;
    public:
        Line();
        Line(const int &length);
        void draw() const;
};

class Rectangle : public BasicShape
{
    protected:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(const int &w, const int &h);
        void draw() const;
    private:
        void draw_horizontal_line() const;
        void draw_vertical_line() const;

};

#endif