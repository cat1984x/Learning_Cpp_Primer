#include <iostream>
#include "7_26_Sales_data.h"
#include <string>

using namespace std;

int main()
{
	Sales_data total(cin);
	if(cin)
	{
		Sales_data trans(cin);
		do
		{
			if(total.isbn() == trans.isbn())
			{
				total = add(total, trans);
			}else
			{
				print(cout, total) << endl;
				total = trans;
			} 
		}while(read(cin, trans));
		print(cout, total) << endl;
	}else
	{
		cerr << "No data?" << endl;
		return -1;
	}

	return 0;
} 