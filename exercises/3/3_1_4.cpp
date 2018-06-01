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
	Sales_data item;
	// std::cout << "Please input ISBN units price" << std::endl;
	while(cin >> item.bookNo >> item.unit_sold >> item.price)
	{
		item.revenue = item.price * item.unit_sold;
		// std::cout << "ISBN 售出本书 销售额 平均价格" << std::endl;
		cout << item.bookNo  << " " << item.unit_sold << " " 
		<< item.revenue << " " << item.price << endl;
	}
	return 0;
}