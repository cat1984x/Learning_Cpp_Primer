#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item itemTotal, item;
	std::cout << "������ISBN��ͬ��¼��" << std::endl;
	std::cout << "ISBN �۳����� ƽ���۸�" << std::endl;
	std::cin >> itemTotal;
	// std::cout << "ISBN �۳����� ���۶� ƽ���۸�" << std::endl;
	// std::cout << itemCurr << std::endl;
	while(std::cin >> item)
	{
		if(compareIsbn(itemTotal, item))
		{
			itemTotal += item;
		}
		else
		{
			std::cout << "ISBN��ͬ" << std::endl;
			return -1;
		}
	}
	std::cout << "ISBN �۳����� ���۶� ƽ���۸�" << std::endl;
	std::cout << itemTotal << std::endl;
	return 0;
}