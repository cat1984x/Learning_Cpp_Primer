#include <iostream>
#include <fstream>
#include "11_19_Sales_data.h"
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	ifstream in("11_19_data.txt");
	if(!in)
	{
		cout << "Can't open file." << endl;
	}

	Sales_data sale;
	typedef bool (*fp)(const Sales_data &, const Sales_data &);
	multiset<Sales_data, fp> ms(compareIsbn);

	while(read(in, sale))
	{
		ms.insert(sale);
	}

	cout << "origin:" << endl;
	for(multiset<Sales_data, fp>::iterator it = ms.begin();
		it != ms.end(); ++it)
	{
		print(cout, *it);
		cout << endl;
	}

	return 0;
} 