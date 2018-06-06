#include <iostream>

using namespace std;

void reset(int &val)
{
	val = 0;
}

int main()
{
	int a = 42;
	cout << "a: " << a  << endl;
	reset(a);
	cout << "a: " << a  << endl;

	return 0;
}