#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> va = {1, 2, 3, 4, 5}; 

	int ia[5];

	for(auto v : va)
		cout << v << " ";
	cout << endl;

	for(auto i : ia)
		cout << i << " ";
	cout << endl;

	int *ptr = ia;
	for(auto v : va)
	{
		*ptr = v;
		++ptr;
	}

	for(auto v : va)
		cout << v << " ";
	cout << endl;

	for(auto i : ia)
		cout << i << " ";
	cout << endl;

	return 0;
}