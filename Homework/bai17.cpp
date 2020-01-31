#include <iostream>
using namespace std;
 
//Write a program in C++ to find the Area and Perimeter of a Rectangle
int main()
{
    int length, width;
    cout << " Find the Area and Perimeter of a Rectangle : \n" ;
    cout << "-------------------------------------------------\n";
    cout << "Input the length of the rectangle :";
    cin >> length;
    cout << "Input the width of the rectangle :";
    cin >> width;
    cout << "The area of the rectangle is :" << length*width << endl;
    cout << "The perimeter of the rectangle is :" << (length+width)*2 << endl;


    return 0;
}