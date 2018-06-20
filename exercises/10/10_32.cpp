#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
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

	sort(record.begin(), record.end(), compareIsbn);

	ostream_iterator<Sales_item> out_it(cout, "\n");
	for(auto i : record)
		out_it = i;

	auto it = record.begin();
	if(it == record.end())
	{
		cout << "no data" << endl;
		return -1;
	}
	auto sum = *it;

	while(it != record.end())
		it = find(it, record.end(), );

	return 0;
}