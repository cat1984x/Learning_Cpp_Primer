#include <iostream>
#include <string>
#include <vector>

using namespace std;

class NoDefault
{
public:
	// NoDefault(int){};
	NoDefault(int a): val(a){}
	int val;
};

class C
{
public:
	C(int a = 0): mem(a){}
	NoDefault mem;
};

int main()
{
	C c(1);
	cout << c.mem.val;

	// vector<NoDefault> vec(10);
	vector<C> vec(10);

	return 0;
}