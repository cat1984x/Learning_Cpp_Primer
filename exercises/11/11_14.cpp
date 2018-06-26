#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

void add_families(map<string, vector<pair<string, string>>> &families, const string &family)
{
	if(families.find(family) == families.end())
	{
		families[family] = vector<pair<string, string>>();
		cout << family << " added" << endl;
	}
	else
		cout << "family " << family << " already exist" << endl;
}

void add_child(map<string, vector<pair<string, string>>> &families, 
	const string &family, const string &child, string birthday)
{
	families[family].push_back({child, birthday});
}

int main()
{
	map<string, vector<pair<string, string>>> families;

	add_families(families, "Chen");
	add_families(families, "Chen");

	add_child(families, "Chen", "Mi", "1989");
	add_child(families, "Chen", "XiaoMi" ,"2016");
	add_child(families, "Zhou", "Mumu" ,"1991");

	for(auto i : families)
	{
		cout << "family: " << i.first << " child: ";
		for(auto j : i.second)
			cout << j.first << " birthday: " << j.second << endl;
	}

	return 0;
}