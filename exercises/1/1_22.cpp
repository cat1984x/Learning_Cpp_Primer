#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item itemTotal, item;
	std::cout << "请输入ISBN相同记录。" << std::endl;
	std::cout << "ISBN 售出本数 平均价格" << std::endl;
	std::cin >> itemTotal;
	// std::cout << "ISBN 售出本数 销售额 平均价格" << std::endl;
	// std::cout << itemCurr << std::endl;
	while(std::cin >> item)
	{
		if(compareIsbn(itemTotal, item))
		{
			itemTotal += item;
		}
		else
		{
			std::cout << "ISBN不同" << std::endl;
			return -1;
		}
	}
	std::cout << "ISBN 售出本数 销售额 平均价格" << std::endl;
	std::cout << itemTotal << std::endl;
	return 0;
}