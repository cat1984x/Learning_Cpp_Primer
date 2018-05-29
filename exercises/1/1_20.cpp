#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	std::cout << "Please input ISBN units price" << std::endl;
	while(std::cin >> item)
	{
		std::cout << "ISBN 售出本书 销售额 平均价格" << std::endl;
		std::cout << item << std::endl;
	}
	return 0;
}