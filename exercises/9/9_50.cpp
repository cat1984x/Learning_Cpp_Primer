#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> nums{"1", "-5", "8", "19"};
	vector<string> nums2{"1.3", "-5.8", "8.2e-2", "0.19"};

	int sum = 0;
	for(auto num : nums)
		sum += stoi(num);
	cout << sum << endl;

	float sum2 = 0;
	for(auto num2 : nums2)
	{
		cout << stof(num2) << " ";
		sum2 += stof(num2);
	}
	cout << endl;
	cout << sum2 << endl;

	int sum3 = 0;
	for(auto num3 : nums2)
	{
		cout << stoi(num3) << " ";
		sum3 += stoi(num3);
	}
	cout << endl;
	cout << sum3 << endl;

	return 0;
}
