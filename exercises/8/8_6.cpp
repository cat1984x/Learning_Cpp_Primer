#include <iostream>
#include <fstream>
#include "8_6_Sales_data.h"
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		cout << "Please input file name." << endl;
		return -1;
	}

	ifstream in(argv[1]);
	if(!in)
	{
		cout << "Can't open file." << endl;
	}

	Sales_data total;
	if(read(in, total))
	{
		Sales_data trans;
		while(read(in, trans))
		{
			if(total.isbn() == trans.isbn())
			{
				total = add(total, trans);
			}else
			{
				print(cout, total) << endl;
				total = trans;
			} 
		}
		print(cout, total) << endl;
	}else
	{
		cerr << "No data?" << endl;
		return -1;
	}

	return 0;
} 