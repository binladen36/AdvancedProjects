#include "A.cpp"

A::A()
{
    x = 1;
    cout << "A: Default constructor is called. x = 1" << endl;

}

A::(const int &x)
{
    this-> x = x;
    cout << " A: Parameter constructor is called. x = " << x << endl;
}

B::B()
{
    cout <<"B: Default constructor is called. x = " << x << endl;
}

B::B(const int &x)
{
    cout << "B: Parameter constructor is called. x = " << this->x << endl;
}

