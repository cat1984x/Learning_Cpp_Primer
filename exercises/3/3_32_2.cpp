#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int sz = 10;
	vector<int> ia, ia2;

	for(int i = 0; i < sz; ++i)
		ia.push_back(i);

	ia2 = ia;

	for(auto i : ia)
		cout << i << " ";
	cout << endl;	

	for(auto i : ia2)
		cout << i << " ";
	cout << endl;	

	return 0;
}