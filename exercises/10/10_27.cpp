#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{3, 1, 1, 3, 5, 5, 7, 9, 11, 5, 11, 11};
	list<int> li;

	sort(v.begin(), v.end());
	unique_copy(v.begin(), v.end(), inserter(li, li.begin()));

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	for(auto i : li)
		cout << i << " ";
	cout << endl;

	return 0;
}