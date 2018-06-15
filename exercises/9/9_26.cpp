#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

	vector<int> vi;
	list<int> li;

	vi.assign(ia, ia + 11);
	li.assign(ia, ia + 11);

	// for(decltype(sizeof(ia)) i = 0; i != (sizeof(ia) / sizeof(*ia)); ++i)
	// {
	// 	vi.push_back(ia[i]);
	// 	li.push_back(ia[i]);
	// }

	auto iterV = vi.begin();
	while(iterV != vi.end())
		if(*iterV % 2)
			iterV = vi.erase(iterV);
		else
			++iterV;

	auto iterL = li.begin();
	while(iterL != li.end())
		if(!(*iterL % 2))
			iterL = li.erase(iterL);
		else
			++iterL;

	for(auto i : vi)
		cout << i << " ";
	cout << endl;

	for(auto i : li)
		cout << i << " ";
	cout << endl;

	return 0;
}
