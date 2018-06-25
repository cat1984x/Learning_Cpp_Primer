#include <iostream>
#include <map>
#include <string>
#include <fstream>
// #include <cctype>

using namespace std;

string &trans(string &s)
{
	for(size_t c = 0; c < s.size(); ++c)
	{
		if(s[c] == ',' || s[c] == '.')
			s.erase(c, 1);
		else
			s[c] = tolower(s[c]);
	}
	return s;
}


int main()
{
	ifstream in("11_3_data.txt");
	if(!in)
	{
		cout << "can't open file";
		return -1;
	}

	map<string, size_t> word_count;
	string word;
	while(in >> word)
		++word_count[trans(word)];

	for(const auto &w : word_count)
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times " : " time") << endl;

	return 0;
}