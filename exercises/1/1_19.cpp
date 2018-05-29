#include <iostream>

int main()
{
	std::cout<<"Please input two int."<<std::endl;
	int i , j , tmp;
	std::cin >> i >> j;
	if(i > j)
	{
		tmp = i;
		i = j;
		j = tmp;
	}
	while(i <= j)
	{
		std::cout << i << std::endl;
		++i;
	}
	return 0;
}