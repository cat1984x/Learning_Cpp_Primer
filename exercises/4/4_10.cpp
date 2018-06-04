#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num;
	vector<int> nums;
	while(cin >> num && num != 42)
		nums.push_back(num);

	for(auto num : nums)
		cout << num << " ";

	return 0;
}