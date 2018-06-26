#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
	map<int, string> nums;
	nums[1] = "one";
	nums[2] = "two";

	for(auto i : nums)
		cout << i.first << " : " << i.second << endl;

	map<int, string>::iterator it = nums.begin();
	(*it).second = "first";
	it->second = "first one";

	for(auto i : nums)
		cout << i.first << " : " << i.second << endl;

	return 0;
}