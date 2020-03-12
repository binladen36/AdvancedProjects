#include <iostream>

using namespace std;
#include "Line.hpp"

int max(const int &a, const int &b)
{
	if (a>b) return a;
	else
	{
		return b;
	}
	
}

Line max_line(const Line &linea, const Line &lineb)
{
	if (linea > lineb) return linea;
	else
	{
		return lineb;
	}
	
} 

template <class T>
T generic_max(const T &a, const T &b)
{
	if (a > b) return a;
	else
	{
		return b;
	}
	
}

int main(int argc, const char * argv[])
{
	int a = 5;
	int b = 10;
	cout << max(a,b) << endl;

	Line line1(5);
	Line line2(10);

	cout << max_line(line1, line2) << endl;

	cout << generic_max(a,b) << endl;
	cout << generic_max(5.5, -10.5) << endl;
	cout << generic_max(line1, line2) << endl;
	return 0;
}