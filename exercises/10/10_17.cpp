#include <iostream>
#include <fstream>
#include "10_17_Sales_data.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream in("10_17_data.txt");
	if(!in)
	{
		cout << "Can't open file." << endl;
	}

	Sales_data sale;
	vector<Sales_data> sv;
	while(read(in, sale))
	{
		sv.push_back(sale);
	}

	cout << "origin:" << endl;
	for(auto i : sv)
	{
		print(cout, i);
		cout << endl;
	}

	sort(sv.begin(), sv.end(), 
		[](const Sales_data &a, const Sales_data &b)
		{return a.isbn() < b.isbn();});
	cout << "after sort:" << endl;
	for(auto i : sv)
	{
		print(cout, i);
		cout << endl;
	}	

	return 0;
} 