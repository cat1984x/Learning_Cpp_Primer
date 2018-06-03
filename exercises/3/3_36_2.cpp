#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int sz = 10;
	vector<int> ia, ib;

	for(int i = 0; i < sz; ++i)
	{
		ia.push_back(i);
		ib.push_back(i);
	}
	ib.push_back(10);

	cout << "a: ";
	for(auto i : ia)
		cout << i << " ";
	cout << endl;	

	cout << "b: ";
	for(auto i : ib)
		cout << i << " ";
	cout << endl;

	if(ia == ib)
		cout << "A and B are the same." << endl;
	else
		cout << "A and B are not same." << endl;

	return 0;
}