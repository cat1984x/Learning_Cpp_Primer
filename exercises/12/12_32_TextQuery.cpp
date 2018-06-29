#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include "12_32_TextQuery.h"

using namespace std;

TextQuery::TextQuery(ifstream &in)
{
	string text;
	while(getline(in, text))
	{
		content.push_back(text);
		line_no line_num = content.size();
		istringstream line(text);
		string word;
		while(line >> word)
		{
			word = cleanup_str(word);
			auto &lines = word_map[word];
			if(!lines)
				lines.reset(new set<line_no>);
			lines->insert(line_num);
		}
	}
}

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc = word_map.find(cleanup_str(sought));
	if(loc == word_map.end())
		return QueryResult(sought, nodata, content);
	else
		return QueryResult(sought, loc->second, content);
}

string TextQuery::cleanup_str(const string &word)
{
	string ret;
	for(auto it = word.begin(); it != word.end(); ++it)
	{
		if(!ispunct(*it))
			ret += tolower(*it);
	}
	return ret;
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

ostream &print(ostream &os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " "
		<< make_plural(qr.lines->size(), "time", "s") << endl;

	for(auto line_num : *qr.lines)
		os << "    (line " << line_num << ")" << qr.content.begin().deref(line_num - 1) << endl;

	return os;
}