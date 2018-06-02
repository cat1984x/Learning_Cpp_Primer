#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums;
	for(int i = 0; i < 10; ++i)
		nums.push_back(i * 2);
	for(auto num : nums)
		cout << num << " ";
	cout << endl;

	cout << "input one num to search" << endl;
	int sought;
	while(cin >> sought)
	{
		auto beg = nums.cbegin();
		auto end = nums.cend();
		auto mid = beg + (end - beg) / 2;

		while(beg != end && *mid != sought)
		{
			if(sought < *mid)
				end = mid;
			else
				beg = mid + 1;
			mid = beg + (end - beg) / 2;
		}

		if(*mid != sought)
			cout << sought << " not in nums." << endl;
		else
			cout << sought << " in nums." << endl;
	}

	return 0;
}