#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	vec.resize(10);
	fill_n(vec.begin(), 10, 0);

	for(auto i : vec)
		cout << i << " ";

	return 0;
}