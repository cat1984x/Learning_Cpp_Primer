#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<int> nums{1, 2, 3, 4, 5};
	int sum = 0;
	sum = accumulate(nums.begin(), nums.end(), sum);
	cout << sum << endl;

	cout << accumulate(nums.begin(), nums.end(), 0) << endl;	

	return 0;
}