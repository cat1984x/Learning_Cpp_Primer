#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {1, 2, 3};

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	for(decltype(v.size()) i = 0, sz = v.size(); i != sz; ++i)
		v.push_back(v[i]);

	// for(decltype(v.size()) i = 0 ; i != v.size(); ++i)
	// {
	// 	cout << v[i];
	// 	v.push_back(v[i]);
	// }

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}