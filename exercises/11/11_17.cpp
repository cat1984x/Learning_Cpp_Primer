#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <utility>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	multiset<string> mss{"multiset", "string"};
	vector<string> vs{"vector", "string"};

	for(auto i : mss)
		cout << i << " ";
	cout << endl;

	for(auto i : vs)
		cout << i << " ";
	cout << endl;

	copy(vs.begin(), vs.end(), inserter(mss, mss.end()));
	for(auto i : mss)
		cout << i << " ";
	cout << endl;

	// copy(vs.begin(), vs.end(), back_inserter(mss));// don't have push_back
	// for(auto i : mss)
	// 	cout << i << " ";
	// cout << endl;

	copy(mss.begin(), mss.end(), inserter(vs, vs.end()));
	for(auto i : vs)
		cout << i << " ";
	cout << endl;

	copy(mss.begin(), mss.end(), back_inserter(vs));
	for(auto i : vs)
		cout << i << " ";
	cout << endl;

	return 0;
}