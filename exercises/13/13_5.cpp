#include <iostream>
#include <string>

class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()):
		ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &orig): i(orig.i)
	{
		ps = new std::string(*orig.ps);
	}
	void print() const 
	{
		std::cout << ps << " " << *ps << " " << i << std::endl;
	}
private:
	std::string *ps;
	int i;
};

int main()
{
	HasPtr a("a");
	HasPtr b = a;
	a.print();
	b.print();
}