#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

template <class T>
void print(T myarr[], int n)
{
	for (int i=0; i<n; i++)
		cout << myarr[i] << " ";
	cout << endl;
}

template <class T>
void print_vector(vector<T> v)
{
	int n = (int) v.size();
	for (int i =0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
}

//generic_print co the lam viec dc voi moi kieu du tap hop cua moi kieu du lieu, mien la kieu du lieu tap hop do co ho tro iterator
// ho tro cac operator bao gom !=, ++, *
template < class InputIterator>
void generic_print(InputIterator begin, InputIterator end)
{
	for ( InputIterator it = begin; it!= end; it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main(int argc, char *argv[]) 
{
	int a[5] = {1,2,3,4,5};
	float b[5] = {1.1,2.2,3.3,4.4,5.5};
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3);
	vector<float> w;
	w.push_back(1.1); w.push_back(2.2); w.push_back(3.3);

	print(a,5);
	print(b,5);
	print_vector(v);
	print_vector(w);

	cout << "Using generic_print" << endl;
	generic_print(v.begin(), v.end());
	generic_print(w.begin(), w.end());
	generic_print(begin(a), end(a));
	generic_print(begin(b), end(b));
	return 0;
}