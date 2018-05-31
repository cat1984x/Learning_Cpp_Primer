#include <iostream>
#include <typeinfo>

int main()
{
	int a = 1;
	auto b = a;
	decltype(a) c = a;
	decltype((a)) d = a;

	const int e = 5;
	auto f = e;
	decltype(e) g = e;
	decltype((e))h = e;

	std::cout << a << "\t" << b  << "\t" << c  << "\t" << d  << "\n" 
	<< e  << "\t" << f << "\t" << g  << "\t" << h << std::endl;

	std::cout << "a: " << typeid(a).name() << std::endl;
	std::cout << "b: " << typeid(b).name() << std::endl;
	std::cout << "c: " << typeid(c).name() << std::endl;
	std::cout << "d: " << typeid(d).name() << std::endl;
	std::cout << "e: " << typeid(e).name() << std::endl;
	std::cout << "f: " << typeid(f).name() << std::endl;
	std::cout << "g: " << typeid(g).name() << std::endl;
	std::cout << "h: " << typeid(h).name() << std::endl;

	++a;
	++b;
	++c;
	++d;
	e++;
	++f;
	g++;
	h++;

	std::cout << a << "\t" << b  << "\t" << c  << "\t" << d  << "\n" 
	<< e  << "\t" << f << "\t" << g  << "\t" << h << std::endl;

	return 0;

}