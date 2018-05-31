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
	Sales_data itemSum, item2;
	std::cin >> itemSum.bookNo >> itemSum.unit_sold >> itemSum.price;
	itemSum.revenue = itemSum.price * itemSum.unit_sold;	
	
	while(std::cin >> item2.bookNo >> item2.unit_sold >> item2.price)
	{
		item2.revenue = item2.price * item2.unit_sold;
		if(itemSum.bookNo == item2.bookNo)
		{			
			itemSum.unit_sold += item2.unit_sold;
			itemSum.revenue += item2.revenue;
			itemSum.price = itemSum.revenue / itemSum.unit_sold;
		}
		else
		{
			std::cout << "Different ISBN" << std::endl;
			return -1;
		}
	}
	std::cout << itemSum.bookNo  << " " << itemSum.unit_sold << " " 
	<< itemSum.revenue << " " << itemSum.price << std::endl;
	return 0;
}