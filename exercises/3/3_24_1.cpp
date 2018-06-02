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
	if(nums.cbegin() == nums.cend())
	{
		cout << "no nums." << endl;
		return -1;
	}

	for(auto it = nums.cbegin(); it != nums.cend() - 1; it += 2)
	{	
		cout << *it + *(it + 1) << " ";
		if ((it - nums.cbegin() + 2) % 10 == 0)
			cout << endl;
	}

	if(nums.size() % 2 != 0)
		cout << *(nums.cend() - 1);

	return 0;
}
