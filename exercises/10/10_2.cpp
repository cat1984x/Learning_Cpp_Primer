#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string num;
	list<string> nums;
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