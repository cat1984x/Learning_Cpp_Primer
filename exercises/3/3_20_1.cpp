#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int num;
	vector<int> nums;
	while(cin >> num)
	{
		nums.push_back(num);
	}

	if(nums.size() > 1)
	{
		for(decltype(nums.size()) i = 0; i < nums.size() - 1; i += 2)
		{	
			cout << nums[i] + nums[i + 1] << " ";
			if ((i + 2) % 10 == 0)
				cout << endl;
		}
	}

	if(nums.size() % 2 != 0)
		cout << nums[nums.size() - 1];

	return 0;
}
