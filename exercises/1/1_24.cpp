#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item itemCurr, item;
	std::cout << "���������ۼ�¼��" << std::endl;
	std::cout << "ISBN �۳����� ƽ���۸�" << std::endl;
	if(std::cin >> item)
	{
		int cnt = 1;
		itemCurr = item;
		while(std::cin >> item)
		{
			if(itemCurr.isbn() == item.isbn())
				++cnt;
			else
			{
				std::cout << "ISBN " << itemCurr.isbn() << " ��" << cnt 
				<<"�����ۼ�¼��"<< std::endl;
				cnt = 1;
				itemCurr = item;
			}
		}
		std::cout << "ISBN " << itemCurr.isbn() << " ��" << cnt 
		<<"�����ۼ�¼��"<< std::endl;
	}
	else
	{
		std::cout << "û�����ۼ�¼��" << std::endl;
		return -1;
	}
	return 0;
}