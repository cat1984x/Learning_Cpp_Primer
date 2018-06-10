#include <iostream>
#include "7_2_Sales_data.h"
#include <string>

using namespace std;

int main()
{
	Sales_data total;
	double price;
	if(cin >> total.bookNo >> total.unit_sold >> price)
	{
		total.revenue = total.unit_sold * price;
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.unit_sold >> price)
		{
			trans.revenue = trans.unit_sold * price;
			if(total.isbn() == trans.isbn())
			{
				total.combine(trans);
			}else
			{
				cout << total.bookNo << " " << total.unit_sold
				<< " " << total.revenue / total.unit_sold << endl;
				total.bookNo = trans.bookNo;
				total.unit_sold = trans.unit_sold;
				total.revenue = trans.revenue;
			} 
		}
		cout << total.bookNo << " " << total.unit_sold
		<< " " << total.revenue / total.unit_sold << endl;
	}else
	{
		cerr << "No data?" << endl;
		return -1;
	}

	return 0;
} 