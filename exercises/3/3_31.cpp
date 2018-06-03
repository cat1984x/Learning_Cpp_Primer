#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int sz = 10;
	int ia[sz];

	for(int i = 0; i < sz; ++i)
		ia[i] = i;

	for(auto i : ia)
		cout << i << " ";
	cout << endl;	

	return 0;
}