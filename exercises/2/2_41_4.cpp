#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned unit_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

int main()
{
	Sales_data itemCurr, item2;
	
	if(std::cin >> itemCurr.bookNo >> itemCurr.unit_sold >> itemCurr.price)
	{
		int cnt = 1;
		itemCurr.revenue = itemCurr.price * itemCurr.unit_sold;
		while(std::cin >> item2.bookNo >> item2.unit_sold >> item2.price)
		{
			item2.revenue = item2.price * item2.unit_sold;
			if(itemCurr.bookNo == item2.bookNo)
			{	
				++cnt;		
			}
			else
			{
				std::cout << "ISBN " << itemCurr.bookNo << " has " 
				<< cnt << " records" << std::endl;
				cnt = 1;
				itemCurr.bookNo = item2.bookNo;
				itemCurr.unit_sold = item2.unit_sold;
				itemCurr.price = item2.price;
				itemCurr.revenue = item2.revenue;
			}
		}
		std::cout << "ISBN " << itemCurr.bookNo << " has " 
		<< cnt << " records" << std::endl;
	}
	else
	{
		std::cout << "No record" << std::endl;
		return -1;
	}
	return 0;
}