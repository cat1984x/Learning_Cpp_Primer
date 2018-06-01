#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
	string bookNo;
	unsigned unit_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

int main()
{
	Sales_data itemCurr, item2;
	
	if(cin >> itemCurr.bookNo >> itemCurr.unit_sold >> itemCurr.price)
	{
		itemCurr.revenue = itemCurr.price * itemCurr.unit_sold;
		while(cin >> item2.bookNo >> item2.unit_sold >> item2.price)
		{
			item2.revenue = item2.price * item2.unit_sold;
			if(itemCurr.bookNo == item2.bookNo)
			{	
				itemCurr.unit_sold += item2.unit_sold;				
				itemCurr.revenue += item2.revenue;
				itemCurr.price = itemCurr.revenue / itemCurr.unit_sold;		
			}
			else
			{
				cout << itemCurr.bookNo  << " " << itemCurr.unit_sold << " " 
				<< itemCurr.revenue << " " << itemCurr.price << endl;
				
				itemCurr.bookNo = item2.bookNo;
				itemCurr.unit_sold = item2.unit_sold;
				itemCurr.price = item2.price;
				itemCurr.revenue = item2.revenue;
			}
		}
		cout << itemCurr.bookNo  << " " << itemCurr.unit_sold << " " 
		<< itemCurr.revenue << " " << itemCurr.price << endl;
	}
	else
	{
		cout << "No record" << endl;
		return -1;
	}
	return 0;
}