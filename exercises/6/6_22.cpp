#include <iostream>

using namespace std;


void swap(int *&a, int *&b)
{
	int *tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int i = 1, j = 2, *a = &i, *b = &j;
	cout << "a: " << a << '\t' << *a << endl;
	cout << "b: " << b << '\t' << *b << endl;

	swap(a, b);

	cout << "a: " << a << '\t' << *a << endl;
	cout << "b: " << b << '\t' << *b << endl;

	return 0;
}