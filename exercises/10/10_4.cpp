#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	vector<double> nums{1.1, 2.1, 3.8, 4.9, 5.3};

	// cout << accumulate(nums.begin(), nums.end(), double(0)) << endl;	
	cout << accumulate(nums.begin(), nums.end(), 0.0) << endl;	

	return 0;
}