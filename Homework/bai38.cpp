#include <iostream>
using namespace std;
 
//Write a program in C++ that takes a number as input and prints its multiplication table upto 10.
int main()
{
    int num;
    cout << " Print the multiplication table of a number upto 10: \n" ;
    cout << " -------------------------------------------------------- \n" ;
    cout << "Input a number:";
    cin >> num;
    for (int i=0; i <=10; i++)
        {
            cout << num << "x" << i << "=" << num*i << endl;
        }

    return 0;
}