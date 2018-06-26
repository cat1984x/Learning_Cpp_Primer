#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
// #include <utility>

using namespace std;

void add_child(multimap<string, string> &families, const string &family, const string &child)
{
	families.insert({family, child});
}

int main()
{
	multimap<string, string> families;

	add_child(families, "Chen", "Mi");
	add_child(families, "Chen", "XiaoMi");
	add_child(families, "Zhou", "Mumu");

	for(auto i : families)
		cout << "family: " << i.first << " child: " << i.second << endl;

	return 0;
}