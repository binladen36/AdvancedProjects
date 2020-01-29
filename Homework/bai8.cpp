#include <iostream>
using namespace std;
 
//Write a program in C++ to check overflow/underflow during various arithmetical operation.
int main()
{   
    int num1 = 2147483647, num2 = -2147483648;
    cout << " Check overflow/underflow during various arithmetical operation :  \n" ;
    cout << " Range of int is [-2147483648, 2147483647] \n " ;
    cout << "--------------------------------------------------------------------- \n";
    
    cout << "Overflow the integer range and set in minimum range : " << num1 + 1 << endl;
    cout << "Increasing from its minimum range :" << num1 + 2 << endl;
    cout << "Product is :" << num1*num1 << endl;

    cout << "Underflow the range and set in maximum range :" << num2 - 1 << endl;
    cout << "Decreasing from its maximum range :" << num2 - 2 << endl;
    cout << "Product is :" << num2*num2;
    return 0;
}