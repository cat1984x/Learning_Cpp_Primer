#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> li1, li2, li3;

	copy(v.begin(), v.end(), inserter(li1, li1.begin()));
	copy(v.begin(), v.end(), back_inserter(li2));
	copy(v.begin(), v.end(), front_inserter(li3));

	for(auto i : li1)
		cout << i << " ";
	cout << endl;

	for(auto i : li2)
		cout << i << " ";
	cout << endl;

	for(auto i : li3)
		cout << i << " ";
	cout << endl;

	return 0;
}