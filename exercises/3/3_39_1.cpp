#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a;
	cin >> b;
	if(a > b)
		cout << a << " > " << b << endl;
	else if(a < b)
		cout << a << " < " << b << endl;
	else
		cout << a << " = " << b << endl;

	return 0;
}