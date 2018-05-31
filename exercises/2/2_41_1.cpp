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
	Sales_data item;
	// std::cout << "Please input ISBN units price" << std::endl;
	while(std::cin >> item.bookNo >> item.unit_sold >> item.price)
	{
		item.revenue = item.price * item.unit_sold;
		// std::cout << "ISBN 售出本书 销售额 平均价格" << std::endl;
		std::cout << item.bookNo  << " " << item.unit_sold << " " 
		<< item.revenue << " " << item.price << std::endl;
	}
	return 0;
}