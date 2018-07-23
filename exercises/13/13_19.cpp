#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	Employee() { sn = seq++; }
	Employee(const string &s): name(s) { sn = seq++; }
	Employee(Employee &e) { name = e.name; sn = seq++; }
	Employee& operator=(Employee &rhs) { name = rhs.name; return *this;}

	int sn;
	string name;
private:
	static int seq;
};

int Employee::seq = 0;

void print(const Employee &e)
{
	cout << e.sn  << " " << e.name << endl;
}

int main()
{
	Employee a, b("b"), c, d(b);
	c = b;

	print(a);
	print(b);
	print(c);
	print(d);

	return 0;
}