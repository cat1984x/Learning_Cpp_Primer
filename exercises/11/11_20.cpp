#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("11_20_data.txt");
	if(!in)
	{
		cout << "can't open file";
		return -1;
	}

	map<string, size_t> word_count;
	string word;
	while(in >> word)
	{
		auto ret = word_count.insert({word, 1});
		if(!ret.second)
			++ret.first->second;
	}

	for(const auto &w : word_count)
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times " : " time") << endl;

	return 0;
}