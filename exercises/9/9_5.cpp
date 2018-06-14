#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
	for(; begin != end; ++begin)
	{
		if(*begin == num)
			break;
	}
	return begin;
}

int main()
{
	vector<int> nums ={1, 2, 3, 4, 5};
	int num;
	while(cin >> num)
	{
		auto result = find(nums.begin() + 1, nums.end() - 1, num);
		cout << num << ((result != nums.end() - 1) ? " is found" : " is not found")
		<< endl;
	}

	return 0;
}