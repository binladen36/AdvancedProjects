#include "Line.hpp"

Line::Line(const int &length)
{
    this->length = length;
}

bool Line::operator>(const Line &line) const
{
    return this->length > line.length;
}

ostream& operator<<(ostream &os, const Line &line)
{
    
}
