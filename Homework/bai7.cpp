#include <iostream>
#include <iomanip>
using namespace std;
 
//Write a program in C++ to display various type or arithmetic operation using mixed data type. 
int main()
{
    int num1 = 5, num2 = 7;
    double num3 = 3.7, num4 = 8.0;

    cout << " Display arithmetic operations with mixed data type : \n" ;
    cout << " ---------------------------------------------------------\n" ;
    cout << fixed << setprecision(1); 

    cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
    cout << num3 << "+" << num4 << "=" << num3+num4 << endl;
    cout << num1 << "+" << num4 << "=" << num1+num4 << endl;
    cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
    cout << num3 << "-" << num4 << "=" << num3-num4 << endl;
    cout << num1 << "-" << num4 << "=" << num1-num4 << endl;
    cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
    cout << num3 << "*" << num4 << "=" << num3*num4 << endl;
    cout << num1 << "*" << num4 << "=" << num1*num4 << endl;
    cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
    cout << num3 << "/" << num4 << "=" << num3/num4 << endl;
    cout << num1 << "/" << num4 << "=" << num1/num4 << endl;
    
    return 0;  
}