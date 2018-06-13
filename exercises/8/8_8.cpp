#include <iostream>
#include <fstream>
#include "8_6_Sales_data.h"
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		cout << "Please give the input and output file name." << endl;
		return -1;
	}

	ifstream in(argv[1]);
	if(!in)
	{
		cout << "Can't open input file." << endl;
	}

	ofstream out;
	out.open(argv[2], ofstream::app);
	if(!out)
	{
		cout << "Can't open output file." << endl;
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
				print(out, total) << endl;
				total = trans;
			} 
		}
		print(out, total) << endl;		
	}else
	{
		cerr << "No data?" << endl;
		return -1;
	}

	in.close();
	out.close();
	return 0;
} 