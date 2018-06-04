#include <iostream>

using namespace std;

int main()
{
	short i = 32767;
	++i;
	cout << i << endl;

	short j = -32768;
	--j;
	cout << j << endl;

	int k = 2147483647;
	++k;
	cout << k << endl;

}