#include "TextShape.hpp"

TextShape::TextShape(const string &content): FancyText(content)
{

}

void TextShape::draw() const
{
    print();
}