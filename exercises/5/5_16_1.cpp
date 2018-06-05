#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s;
	vector<string> v;

	// while(cin >> s)
	// 	v.push_back(s);

	for(; cin >> s;)
		v.push_back(s);

	for(auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}