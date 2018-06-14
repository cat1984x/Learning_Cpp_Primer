#include <iostream>
#include <vector>

using namespace std;

bool find(vector<int>::iterator begin, vector<int>::iterator end, int num)
{
	for(; begin != end; ++begin)
	{
		if(*begin == num)
			return true;
	}
	return false;
}

int main()
{
	vector<int> nums ={1, 2, 3, 4, 5};
	int num;
	while(cin >> num)
	{
		cout << num << (find(nums.begin() + 1, nums.end() - 1, num) ? " is found" : " is not found")
		<< endl;
	}

	return 0;
}