#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto iter = v.begin();

	while(iter != v.end())
	{
		if(*iter % 2)
		{
			// cout << *iter;
			iter = v.insert(iter, *iter);
		}
		++iter;
		++iter;
	}

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}
