#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nums1;
	vector<int> nums2{1, 2, 3, 4, 5};
	vector<int> nums3(nums2);
	vector<int> nums4(nums2.begin() + 1, nums2.end() - 1);
	vector<int> nums5(5);
	vector<int> nums6(5, 5);

	for(auto num : nums1)
		cout << num << " ";
	cout << endl;
	
	for(auto num : nums2)
		cout << num << " ";
	cout << endl;
	
	for(auto num : nums3)
		cout << num << " ";
	cout << endl;
	
	for(auto num : nums4)
		cout << num << " ";
	cout << endl;
	
	for(auto num : nums5)
		cout << num << " ";
	cout << endl;

	for(auto num : nums6)
		cout << num << " ";
	cout << endl;

	return 0;
}