#include <iostream>
using namespace std;

//Write a program in C++ to check whether the primitive values crossing the limits or not.
int main()
{
    char gender = 'F';
    bool married = true;
    unsigned short numOfSon = 2;
    short year = 2009;
    unsigned int salary = 1500000;
    double height = 79.48;
    float gpa = 4.69;
    long salaryDraw = 12047235;
    long long balace = 995324987;

    cout << "Check whether the primitive values crossing the limits or not : \n";
    cout << "-------------------------------------------------------------------- \n";
    cout << "The Gender is : "<< gender << endl;
    cout << "Is she married? : "<< married << endl;
    cout << "Number of sons she has :"<< numOfSon << endl;
    cout << "Year of her appointment :"<< year << endl;
    cout << "Salary for a year :"<< salary << endl;
    cout << "Height is :"<< height << endl;
    cout << "GPA is :"<< gpa << endl;
    cout << "Salary drawn upto :" << salaryDraw << endl;
    cout << "Balance till :" << balace << endl;
    return 0;
}