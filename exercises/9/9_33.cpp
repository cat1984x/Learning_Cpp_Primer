#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto begin = v.begin();

	while(begin != v.end())
	{
		++begin;
		v.insert(begin, 42);
		++begin;
	}

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}
