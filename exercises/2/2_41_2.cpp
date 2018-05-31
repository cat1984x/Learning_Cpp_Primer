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
	Sales_data item, item2;
	std::cin >> item.bookNo >> item.unit_sold >> item.price;
	item.revenue = item.price * item.unit_sold;
	std::cin >> item2.bookNo >> item2.unit_sold >> item2.price;
	item2.revenue = item2.price * item2.unit_sold;

	if(item.bookNo == item2.bookNo)
	{
		Sales_data itemSum;
		itemSum.bookNo = item.bookNo;
		itemSum.unit_sold = item.unit_sold + item2.unit_sold;
		itemSum.revenue = item.revenue + item2.revenue;
		itemSum.price = itemSum.revenue / itemSum.unit_sold;
		std::cout << itemSum.bookNo  << " " << itemSum.unit_sold << " " 
		<< itemSum.revenue << " " << itemSum.price << std::endl;
	}
	else
		std::cout << "Different ISBN" << std::endl;
	return 0;
}