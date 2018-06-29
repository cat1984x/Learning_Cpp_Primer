#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <memory>

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

void makeMap(ifstream &in, vector<string> &content,
	map<string, set<int>> &word_map)
{
	string line;
	int line_num = 0;
	while(getline(in, line))
	{
		content.push_back(line);
		++line_num;
		istringstream iss(line);
		string word;
		while(iss >> word)
			word_map[trans(word)].insert(line_num);
	}
}

void runQueries(ostream &out, vector<string> &content,
	map<string, set<int>> &word_map)
{
	while(true)
	{
		out << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") 
			break;		
		auto loc = word_map.find(s);
		if (loc == word_map.end())
			out << s << " don't occur in file." << endl;
		else
		{
			int nums = word_map[s].size();
			out << s << " occurs " << nums << " times" << endl;
			for(auto line_num : word_map[s])
			{
				out << "    (line " << line_num << ")" << content[line_num - 1] << endl;
			}
		}
	}
}

int main()
{
	ifstream in("12_27_data.txt");
	if(!in)
	{
		cout << "can't open file" << endl;
		return -1;
	}

	vector<string> content;
	map<string, set<int>> word_map;

	makeMap(in, content, word_map);
	runQueries(cout, content, word_map);

	return 0;
}