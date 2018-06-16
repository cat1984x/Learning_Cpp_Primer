#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	// vector<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	forward_list<int> fli = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	auto iter1 = li.begin();
	while(iter1 != li.end())
	{
		if(*iter1 % 2)
		{
			li.insert(iter1, *iter1);
			++iter1;
		}else
			iter1 = li.erase(iter1);
	}

	auto prev = fli.before_begin();
	auto iter2 = fli.begin();
	while(iter2 != fli.end())
	{
		if(*iter2 % 2)
		{
			iter2 = fli.insert_after(iter2, *iter2);
			prev = iter2;
			++iter2;
		}else
			iter2 = fli.erase_after(prev);
	}

	for(auto i : li)
		cout << i << " ";
	cout << endl;

	for(auto i : fli)
		cout << i << " ";
	cout << endl;

	return 0;
}
