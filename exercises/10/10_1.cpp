#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num;
	vector<int> nums;
	while(cin >> num)
		nums.push_back(num);

	for(auto i : nums)
		cout << i << " ";
	cout << endl;

	cout << "put a num to count" << endl;
	cin.clear();
	cin >> num;
	cout << num << " appears " << count(nums.begin(), nums.end(), num) 
	<< " times"<< endl;

	return 0;
}