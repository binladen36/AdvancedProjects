#ifndef Line_hpp
#define Line_hpp

#include <iostream>
using namespace std;

class Line
{
    private:
        int Length;
    public:
        Line(const int &length);
        bool operator>(const Line &line) const;
        friend ostream&
}