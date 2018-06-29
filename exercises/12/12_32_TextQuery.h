#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <fstream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <memory>
#include "12_32_QueryResult.h"
#include "12_32_StrBlob.h"

class QueryResult;
class TextQuery
{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream &);
	QueryResult query(const std::string &) const;
private:
	StrBlob content;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> word_map;
	static std::string cleanup_str(const std::string&);
};

#endif