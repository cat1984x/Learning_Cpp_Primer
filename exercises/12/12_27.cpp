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

class TextQuery
{
public:
	friend class QueryResult;
	TextQuery();
	TextQuery(ifstream &in);
	QueryResult query(string s);
private:
	shared_ptr<vector<string>> content;
	shared_ptr<map<string, set<int>>> word_map;
};

class QueryResult
{
public:
	friend void print(ostream &out, QueryResult &qr);
	QueryResult();
	QueryResult(string &s_query, TextQuery &tq) :
		s(s_query), content(tq.content), word_map(tq.word_map){}
private:
	string s;
	shared_ptr<vector<string>> content;
	shared_ptr<map<string, set<int>>> word_map;
};

TextQuery::TextQuery(ifstream &in)
{
	content = make_shared<vector<string>>();
	word_map = make_shared<map<string, set<int>>>();
	string line;
	int line_num = 0;
	while(getline(in, line))
	{
		content->push_back(line);
		++line_num;
		istringstream iss(line);
		string word;
		while(iss >> word)
		{
			(*word_map)[trans(word)].insert(line_num);
		}
	}
}

QueryResult TextQuery::query(string s_query)
{
	return QueryResult(s_query, *this);
}

void print(ostream &out, QueryResult &qr)
{
	int nums = (*qr.word_map)[qr.s].size();
	out << qr.s << " occurs " << nums << " times" << endl;
	for(auto line_num : (*qr.word_map)[qr.s])
	{
		cout << "    (line " << line_num << ")" << (*qr.content)[line_num - 1] << endl;
	}
}

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while(true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") 
			break;
		print(cout, tq.query(trans(s)));
	}
}

int main()
{
	ifstream in("12_27_data.txt");
	runQueries(in);

	return 0;
}