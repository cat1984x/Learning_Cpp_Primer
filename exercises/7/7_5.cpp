#include <iostream>
#include <string>
#include "7_5_Person.h"

// using namespace std;

int main()
{
	Person a, b;
	a.name = "a";
	a.address = "Nanjing";
	b.name = "b";
	b.address = "Beijing";

	cout << a.name << " lives in " << a.address << endl;
	cout << b.name << " lives in " << b.address << endl;

	return 0;
}