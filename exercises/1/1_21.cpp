#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cout << "����������ISBN��ͬ��¼��" << std::endl;
	std::cout << "ISBN �۳����� ƽ���۸�" << std::endl;
	std::cin >> item1 >>item2;
	if(compareIsbn(item1, item2))
	{
		std::cout << "ISBN �۳����� ���۶� ƽ���۸�" << std::endl;
		std::cout << item1 + item2 << std::endl;
	}
	else
		std::cout << "������¼ISBN��ͬ��" << std::endl;
	return 0;
}