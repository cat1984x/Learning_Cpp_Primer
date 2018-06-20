#include <iostream>

using namespace std;

int main()
{
	auto sum = [](const int &a, const int &b){return a + b;};

	cout << sum(1, 3) << endl;

	return 0;
}