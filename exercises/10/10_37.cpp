#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> li;

	copy(vi.crbegin() + 3, vi.crend() - 2, back_inserter(li));

	for(auto i : li)
		cout << i << " ";
	cout << endl;

	return 0;
}