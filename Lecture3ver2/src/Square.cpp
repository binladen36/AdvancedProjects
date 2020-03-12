#include "Square.hpp"

Square::Square() : Rectangle("Square", 1.0, 1.0)
{
    //nothing to do
}

Square::Square(const string &name, const double &side) : Rectangle(name, side, side)
{
    //nothing to do
}