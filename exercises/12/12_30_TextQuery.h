#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <fstream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <memory>
#include "12_30_QueryResult.h"

class QueryResult;
class TextQuery
{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream &);
	QueryResult query(const std::string &) const;
private:
	std::shared_ptr<std::vector<std::string>> content;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> word_map;
	static std::string cleanup_str(const std::string&);
};

#endif