#include "MathProgram.hpp"
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"

void MathProgram::print_menu()
{
    cout << "Math Program" << endl;
    cout << "1. Enter a circle" << endl;
    cout << "2. Enter a rectangle" << endl;
    cout << "3. Enter a square" << endl;
    cout << "4. Show info" << endl;
    cout << "0. Exit" << endl;
}

void MathProgram::do_task(const int &choice)
{
    switch (choice)
    {
    case CIRCLE_OPT:
        add_circle();
        break;
    case RECTANGLE_OPT:
        add_rectangle();
        break;
    case SQUARE_OPT:
        add_square();
        break;  
    case SHOW_OPT:
        cout << "Show option" << endl;
        break;  
    default:
        cout << "Invalid option~" << endl;
        break;
    }
}

void MathProgram::add_circle()
{
    cout <<" Enter circle name:";
    string name;
    cin >> name;
    cout << "Enter radius:";
    double radius;

    Circle *cir = new Circle(name, radius);
    shape.push_back(cir);
}

void MathProgram::add_rectangle()
{
    cout << "Enter rectangle name: ";
    string name;
    cin >> name;
    cout << "Enter width: ";
    double w;
    cin >> w;
    cout << "Enter height: ";
    double h;
    cin >> h;

    Rectangle *rec = new Rectangle(name, w, h);
    shape.push_back(rec);
}

void MathProgram::add_square()
{
    cout << "Enter square name: ";
    string name;
    cin >> name;
    cout << "Enter side: ";
    double side;
    cin >> side;
    
    Square *sq = new Square(name, side);
    shape.push_back(sq);
}

void MathProgram::show_info()
{
    for (int i = 0; i < shape.size(); i++)
    {
        shape[i]->show();
    }
}

MathProgram::~MathProgram()
{
    for (int i = 0; i < shape.size(); i++)
    {
        delete shape[i];
    }
}