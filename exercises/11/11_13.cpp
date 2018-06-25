#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

int main()
{
	ifstream in("11_12_data.txt");
	if(!in)
	{
		cout << "can't open file" << endl;
		return -1;
	}

	vector<pair<string, int>> v;
	string s;
	int i;

	while(in >> s >> i)
	{
		v.push_back({ s, i });
		v.push_back(pair<string, int>(s, i));
		v.push_back(make_pair(s, i));
	}
	
	for(auto i : v)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;	

	return 0;
}