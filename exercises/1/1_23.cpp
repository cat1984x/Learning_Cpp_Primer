#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item itemCurr, item;
	std::cout << "请输入销售记录：" << std::endl;
	std::cout << "ISBN 售出本数 平均价格" << std::endl;
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
				std::cout << "ISBN " << itemCurr.isbn() << " 有" << cnt 
				<<"条销售记录。"<< std::endl;
				cnt = 1;
				itemCurr = item;
			}
		}
		std::cout << "ISBN " << itemCurr.isbn() << " 有" << cnt 
		<<"条销售记录。"<< std::endl;
	}
	else
	{
		std::cout << "没有销售记录。" << std::endl;
		return -1;
	}
	return 0;
}