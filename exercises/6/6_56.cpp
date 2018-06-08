#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}


int main()
{
	vector<int (*)(int, int)> funcs = {add, sub, multiply, divide};

	int a, b;
	char o;
	while (cin >> a >> o >> b)
	{
		switch(o)
		{			
			case '+':
				cout << a << " + " << b << " = " << funcs[0](a, b) << endl;
				break;			
			case '-':
				cout << a << " - " << b << " = " << funcs[1](a, b) << endl;
				break;
			case '*':
				cout << a << " * " << b << " = " << funcs[2](a, b) << endl;
				break;
			case '/':
				cout << a << " / " << b << " = " << funcs[3](a, b) << endl;
				break;
		}
	}

	return 0;
}