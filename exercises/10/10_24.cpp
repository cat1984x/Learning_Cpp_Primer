#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &a, string::size_type sz)
{
	return sz > a.size();
}

void find_first(const string &s, vector<int> &v)
{
	auto it = find_if(v.begin(), v.end(), 
		bind(check_size, s, _1));
	if(it != v.end())
		cout << *it << endl;
}

int main()
{
	string s("string");
	vector<int> vi{1, 3, 5, 7, 9, 11};

	find_first(s, vi);

	return 0;
}