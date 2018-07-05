#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	Employee() { sn = seq++; }
	Employee(const string &s): name(s) { sn = seq++; }
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
	Employee a, b("b");

	print(a);
	print(b);

	return 0;
}