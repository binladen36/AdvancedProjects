#include "MathProgram.hpp"

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
        cout << "You choose circle" << endl;
        break;
    case RECTANGLE_OPT:
        cout << "You choose ractangle" << endl;
        break;
    case SQUARE_OPT:
        cout << "You choose square" << endl;
        break;  
    case SHOW_OPT:
        cout << "Show option" << endl;
        break;  
    default:
        cout << "Invalid option~" << endl;
        break;
    }
}