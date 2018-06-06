#include <iostream>
#include "Chapter6.h"

using namespace std;

int main()
{
	unsigned long long a;
	while(cin >> a)
		cout << "The factorial of " << a << " is " << fact(a) << endl;
	return 0;
}