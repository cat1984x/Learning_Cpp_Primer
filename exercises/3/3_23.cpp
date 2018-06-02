#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums;
	for(int i = 0; i != 10; ++i)
		nums.push_back(i);

	for(auto i = nums.begin(); i != nums.end(); ++i)
		cout << *i << " ";
	cout << endl;
	for(auto i = nums.begin(); i != nums.end(); ++i)
		*i *= 2;

	for(auto i = nums.begin(); i != nums.end(); ++i)
		cout << *i << " ";
	cout << endl;
}