#include <iostream>
#include "7_11_Sales_data.h"
#include <string>

using namespace std;

int main()
{
	Sales_data a;
	cout << "a: ";
	print(cout, a) << endl;

	Sales_data b("b");
	cout << "b: ";
	print(cout, b) << endl;

	Sales_data c("c", 2, 20.0);
	cout << "c: ";
	print(cout, c) << endl;

	Sales_data d(cin);
	cout << "d: ";
	print(cout, d) << endl;

	return 0;
} 