#include <iostream>
#include <string>
#include <memory>
#include <vector>

struct X
{
	X() { std::cout << "X()" << std::endl; }
	X(const X& orig): i(orig.i), j(orig.j) { std::cout << "X(const X&)" << std::endl;}
	X& operator= (const X& rhs) 
	{
		i = rhs.i;
		j = rhs.j;
		std::cout << "operator= (const X&)" << std::endl;
		return *this;
	}
	~X(){ std::cout << "~X()" << std::endl; }

	int i;
	int j;
};

X f(X a, X *b, X &c)
{
	std::cout << "f()" << std::endl;
	return a;
}

X& g(X &a)
{
	std::cout << "g()" << std::endl;
	return a;
}

int main()
{
	// X a, c;
	// a.i = 1;
	// a.j = 2;
	// X b = a;
	// c = a;
	// f(a, &b, c);
	// g(a);
	// auto p = new X;
	// delete p;
	// std::shared_ptr<X> p2(new X);
	// X x;
	// std::vector<X> vx;
	// vx.push_back(x);
	X a;
	// X b = a;
	X b(a);

	return 0;
}