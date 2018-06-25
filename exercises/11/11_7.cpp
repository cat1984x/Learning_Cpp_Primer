#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void add_families(map<string, vector<string>> &families, const string &family)
{
	if(families.find(family) == families.end())
	{
		families[family] = vector<string>();
		cout << family << " added" << endl;
	}
	else
		cout << "family " << family << " already exist" << endl;
}

void add_child(map<string, vector<string>> &families, const string &family, const string &child)
{
	families[family].push_back(child);
}

int main()
{
	map<string, vector<string>> families;

	add_families(families, "Chen");
	add_families(families, "Chen");

	add_child(families, "Chen", "Mi");
	add_child(families, "Chen", "XiaoMi");
	add_child(families, "Zhou", "Mumu");

	for(auto i : families)
	{
		cout << "family: " << i.first << " child: ";
		for(auto j : i.second)
			cout << j << " ";
		cout << endl;
	}

	return 0;
}