#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if(b == 0)
			throw runtime_error("Can't divided by 0");
		cout << a << " / " << b << " = " << a / b << endl;
	}

	return 0;
}