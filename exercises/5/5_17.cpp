#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> b = {0, 1, 1, 2}, 
		a = {0, 1, 1, 2, 3, 5, 8};

	auto minSize = (a.size() > b.size()) ? b.size() : a.size();
	decltype(a.size()) i;
	for(i = 0; i != minSize && a[i] == b[i]; ++i)
		;//empty

	if(i == minSize)
		if(a.size() <= b.size())
			cout << "a is in b.";
		else
			cout << "b is in a.";
	else
		cout << "a b not within.";

	return 0;
}