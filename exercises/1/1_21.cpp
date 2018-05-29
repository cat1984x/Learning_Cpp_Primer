#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cout << "请输入两个ISBN相同记录。" << std::endl;
	std::cout << "ISBN 售出本数 平均价格" << std::endl;
	std::cin >> item1 >>item2;
	if(compareIsbn(item1, item2))
	{
		std::cout << "ISBN 售出本数 销售额 平均价格" << std::endl;
		std::cout << item1 + item2 << std::endl;
	}
	else
		std::cout << "两条记录ISBN不同。" << std::endl;
	return 0;
}