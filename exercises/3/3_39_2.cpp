#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
	char a[100], b[100];
	cin >> a;
	cin >> b;
	auto result = strcmp(a, b);
	cout << typeid(result).name() << endl;

	if(result > 0)
		cout << a << " > " << b << endl;
	else if(result < 0)
		cout << a << " < " << b << endl;
	else
		cout << a << " = " << b << endl;

	return 0;
}