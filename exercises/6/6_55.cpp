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

	return 0;
}