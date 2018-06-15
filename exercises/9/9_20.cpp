#include <iostream>
#include <string>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> nums;
	deque<int> odds, evens;
	int num;

	for(int i = 0; i != 10; ++i)
		nums.push_back(i);

	for(auto num : nums)
	{
		if(num % 2)
			odds.push_back(num);
		else
			evens.push_back(num);
	}

	cout << "odds: " << endl;
	for(auto odd : odds)
		cout << odd << " ";
	cout << endl;

	cout << "evens: " << endl;
	for(auto even : evens)
		cout << even << " ";
	cout << endl;


	return 0;
}
