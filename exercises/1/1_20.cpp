#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item;
	std::cout << "Please input ISBN units price" << std::endl;
	while(std::cin >> item)
	{
		std::cout << "ISBN �۳����� ���۶� ƽ���۸�" << std::endl;
		std::cout << item << std::endl;
	}
	return 0;
}