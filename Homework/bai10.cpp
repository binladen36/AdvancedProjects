#include <iostream>
#include <iomanip>
using namespace std;
 
//Write a program in C++ to formatting the output.
int main()
{   
    double pi = 3.14159265359;
    cout << " Formatting the output : \n" ;
    cout << " ----------------------------  ";
    cout << fixed << setprecision(4);
    cout << "The value of pi : " << pi << endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;

    cout << setfill('-');
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;

    cout << scientific;
    cout << "The value of pi in scientific format is : " << pi << endl;
    
    bool status = false;
    cout << "Status in number : " << status << endl;
    cout << boolalpha;
    cout << "Status in alphabet : " << status << endl;
    return 0;
}