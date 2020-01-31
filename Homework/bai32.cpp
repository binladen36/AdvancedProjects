#include <iostream>
using namespace std;
 
//Write a program in C++ to check whether a number is positive, negative or zero.
int main()
{
    cout << " Check whether a number is positive, negative or zero :  \n" ;
    cout << " ----------------------------------------------------------- \n ";
    int num;
    cout << "Input a number : ";
    cin >> num;
    if (num > 0)
        {
            cout << "The entered number is positive.";
        }
    else if (num < 0)
        {
            cout << "The entered number is negative.";
        }
    else 
        {
            cout << "The entered number is zero.";
        }
    return 0;
}