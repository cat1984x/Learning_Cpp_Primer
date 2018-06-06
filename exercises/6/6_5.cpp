#include <iostream>

using namespace std;

int abs(int val)
{
	return (val < 0) ? -val : val;
}

int main()
{
	int a;
	while(cin >> a)
		cout << "Absolute value of " << a << " is " << abs(a) << endl;
	return 0;
}