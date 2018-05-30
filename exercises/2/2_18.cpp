#include <iostream>

int main()
{
	int i = 0, j = 1, *ptr = nullptr;
	std::cout << "i: " << i << " j: "<< j << std::endl;
	
	std::cout << ptr << std::endl;
	*ptr = 2; 
	ptr = &i;
	std::cout << ptr << std::endl;
	*ptr = 2;
	std::cout << "i: " << i << " j: "<< j << std::endl;
	return 0;
}