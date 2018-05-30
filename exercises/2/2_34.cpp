#include <iostream>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	std::cout << a << "\t" << b  << "\t" << c  << "\t" 
	<< d  << "\t" << e  << "\t" << g  << "\t" << std::endl;

	a = 42;
	b = 42;
	c = 42;
	// d = 42;
	// e = 42;
	// g = 42;

	std::cout << a << "\t" << b  << "\t" << c  << "\t" 
	<< d  << "\t" << e  << "\t" << g  << "\t" << std::endl;

	return 0;
}