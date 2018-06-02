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

	auto beg = nums.cbegin();
	auto end = nums.cend();

	for(auto it1 = beg, it2 = end - 1; it1 < it2; ++it1, --it2)
	{	
		cout << *it1 + *it2 << " ";
		if ((it1 - it2 + 1) % 5 == 0)
			cout << endl;
	}

	if(nums.size() % 2 != 0)
		cout << *(beg + (end - beg) / 2);

	return 0;
}
