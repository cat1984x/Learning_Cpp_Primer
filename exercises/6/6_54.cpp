#include <iostream>
#include <vector>

using namespace std;

int f(int a, int b)
{
	return 0;
}

int main()
{
	vector<int (*)(int, int)> funcs = {f};

	return 0;
}