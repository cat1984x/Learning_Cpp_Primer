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

	HasPtr& operator=(HasPtr &rhs)
	{
		delete ps;
		ps = new std::string(*rhs.ps);
		i = rhs.i;
		return *this;
	}
	~HasPtr() { delete ps; }
private:
	std::string *ps;
	int i;
};

int main()
{
	HasPtr a("a"), c;
	HasPtr b = a;
	c = a;
	a.print();
	b.print();
	c.print();

	return 0;
}