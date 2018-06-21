#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "10_32_Sales_item.h"

using namespace std;

bool compareIsbn(const Sales_item &a, const Sales_item &b)
{
	return a.isbn() < b.isbn();
}

int main()
{
	vector<Sales_item> record;
	ifstream in("10_32_data.txt");
	if(!in)
	{
		cout << "can't open file" << endl;
		return -1;
	}

	istream_iterator<Sales_item> in_it(in), eof;
	while(in_it != eof)
		record.push_back(*in_it++);
	if(record.empty())
	{
		cout << "no data" << endl;
		return -1;
	}	

	sort(record.begin(), record.end(), compareIsbn);
	cout << "after sort:" << endl;
	ostream_iterator<Sales_item> out_it(cout, "\n");
	for(auto i : record)
		out_it = i;

	// cout << "accumulation:" << endl;
	vector<Sales_item> res;
	auto beg = record.begin();
	auto curr = beg;
	// while(curr != record.end())
	// {
	// 	while(curr != record.end() && *curr == *beg)
	// 		++curr;
	// 	res.push_back(accumulate(beg, curr, Sales_item((*beg).isbn())));
	// 	beg = curr;
	// }

	while(beg != record.end())
	{
		auto curr = find_if(beg + 1, record.end(), 
			[beg](const Sales_item &item)
			{ return item.isbn() != beg->isbn(); });
		res.push_back(accumulate(beg + 1, curr, *beg));
		beg = curr;
	}

	cout << "after accumulation:" << endl;
	for(auto i : res)
		out_it = i;

	return 0;
}