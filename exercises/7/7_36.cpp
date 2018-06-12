#include <iostream>

using namespace std;

struct X
{
	X(int i, int j): base(i), rem(base % j) {} 
	int base, rem;
	// int rem, base;
};

int main()
{
	X x(5, 2);
	cout << "rem: " << x.rem << " base: " << x.base << endl;
	return 0;
}