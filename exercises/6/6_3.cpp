#include <iostream>

using namespace std;

unsigned long long fact(unsigned long long val)
{
	if(val == 0)
		return 1;
	unsigned long long ret = 1;
	while(val != 1)
		ret *= val--;
	return ret; 
}


int main()
{
	unsigned long long a;
	while(cin >> a)
		cout << "factorial of " << a << " is " << fact(a) << endl;
	return 0;
}