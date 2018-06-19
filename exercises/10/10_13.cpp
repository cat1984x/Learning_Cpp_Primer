#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isLong(const string &s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> s{"an", "rabbit", "dog", "is", "chasing", "a", "rabbit", "an"};

	for(auto i : s)
		cout << i << " ";
	cout << endl;

	auto it = partition(s.begin(), s.end(), isLong);
	for(auto i : s)
		cout << i << " ";
	cout << endl;

	s.erase(it, s.end());
	for(auto i : s)
		cout << i << " ";
	cout << endl;

	return 0;
}