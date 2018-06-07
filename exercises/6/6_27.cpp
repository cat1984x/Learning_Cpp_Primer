#include <iostream>
#include <string>

using namespace std;

int sum(initializer_list<int> il)
{
	int sum = 0;
	for(const auto num : il)
		sum += num;
	return sum;
}


int main(int argc, char *argv[])
{
	initializer_list<int> nums{5, 6, 7, 8};

	cout << sum({1, 2, 3}) << endl;
	cout << sum(nums) << endl;

	return 0;
}