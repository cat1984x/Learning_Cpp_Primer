#include <iostream>
#include "Chapter6.h"

using namespace std;

int main()
{
	int a;
	while(cin >> a)
		cout << "Absolute value of " << a << " is " << abs(a) << endl;
	return 0;
}

int abs(int val)
{
	return (val < 0) ? -val : val;
}
