#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int some_val;

	while(cin >> some_val)
	{	
		vector<int> iv{1, 1, 3, 4, 5};
		auto iter = iv.begin();
		auto org_size = iv.size();
		auto mid = iv.begin() + org_size / 2;
		int new_ele = 0;

		while(iter != mid)
		{
			if(*iter == some_val)
			{
				iter = iv.insert(iter, 2 * some_val);
				++new_ele;
				++iter;
			}
			mid = iv.begin() + org_size / 2 + new_ele;
			++iter;		
		}

		for(auto i : iv)
			cout << i << " ";
		cout << endl;
	}

	return 0;
}
