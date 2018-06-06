#include <iostream>

using namespace std;

int abs(int val)
{
	static int cnt = 0;
	int local = 0;
	cout << "local: " << local << endl;
	cout << ++cnt << " called." << endl;
	return (val < 0) ? -val : val;
}

int main()
{
	int a;
	while(cin >> a)
		cout << "Absolute value of " << a << " is " << abs(a) << endl;
	return 0;
}