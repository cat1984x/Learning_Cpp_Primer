#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi ={1, 2, 3, 4, 5};

	for(auto i : vi)
		cout << i << " ";
	cout << endl;

	fill_n(vi.begin(), vi.size(), 0);

	for(auto i : vi)
		cout << i << " ";
	cout << endl;

	vector<int> vi2;
	auto it = back_inserter(vi2);
	fill_n(it, 10, 1);

	for(auto i : vi2)
		cout << i << " ";
	cout << endl;

	return 0;
}