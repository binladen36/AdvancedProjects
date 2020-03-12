#include <iostream>
#include "A.hpp"

int main(int argc, const char * argv[])
{
   A a1; // default constructor
   A a2(5); // parameter constructor
   cout << "----------" << endl;
   B b1; // default constructor => call A's default automatically
   B b2(10); // parameter constructor => call B's para manually
   
   return 0;
}