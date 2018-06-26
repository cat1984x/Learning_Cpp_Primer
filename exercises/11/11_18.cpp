#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("11_18_data.txt");
	if(!in)
	{
		cout << "can't open file";
		return -1;
	}

	map<string, size_t> word_count;
	string word;
	while(in >> word)
		++word_count[word];

	map<string, size_t>::iterator map_it = word_count.begin();
	// map<const string, size_t>::iterator map_it = word_count.begin();
	// pair<const string, size_t>::iterator map_it = word_count.begin();
	while(map_it != word_count.end())
	{
		cout << map_it->first << " occurs " << map_it->second
			<< ((map_it->second > 1) ? " times " : " time") << endl;
		++map_it;
	}

	return 0;
}