#include "DrawingSystem.hpp"
#include "TextShape.hpp"
DrawingSystem::DrawingSystem()
{
    Line* line = new Line(3);
    shapes.push_back(line);

    Rectangle *rec = new Rectangle (5,2);
    shapes.push_back(rec);

    line = new Line(5);
    shapes.push_back(line);

    TextShape* text = new TextShape("Hello World");
    shapes.push_back(text);

    text = new TextShape("Design Pattern");
    shapes.push_back(text);
}

DrawingSystem::~DrawingSystem()
{
    for( int i = 0; i < shapes.size(); i++)
        delete shapes[i];
}

void DrawingSystem::drawing() const
{
    for (int i = 0; i < shapes.size(); i++)
        shapes[i] -> draw();
}