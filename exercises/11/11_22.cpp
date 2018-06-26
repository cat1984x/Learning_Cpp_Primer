#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
	map<string, vector<int>> m;
	pair<string, vector<int>> a{"chen", {9, 13}};

	pair<map<string, vector<int>>::iterator, bool> ret = m.insert(a);

	cout << ret.first->first << " ";
	for(int i : ret.first->second)
		cout << i << " ";
	cout << (ret.second ? "true" :"false") << endl;

	return 0;
}