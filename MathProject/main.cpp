#include <iostream>
#include "Shape.hpp"
using namespace std;

int main(int argc, const char * argv[]) 
{
    Shape s;
    s.show();

    Circle c1;
    c1.show();

    Circle c2(3.0, "C2");
    c2.show();

    cout << "----" << endl;
    Shape *ps = &s;
    ps->show(); // show of Shape

    ps = &c1;
    ps->show(); // dynamic typing (show of Circle)
    
    ps = &c2;
    ps->show(); // dynamic typing (show of Circle)
    
    ps = new Circle();
    ps-> show();

    delete ps;
    return 0;
}