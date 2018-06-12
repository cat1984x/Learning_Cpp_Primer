#include <iostream>
#include "7_41_Sales_data.h"
#include <string>

using namespace std;

int main()
{
	cout << "a: " << endl;
	Sales_data a("a", 2, 10);

	cout << "b: " << endl;
	Sales_data b;

	cout << "c: " << endl;
	Sales_data c("c");

	cout << "d: " << endl;
	Sales_data d(cin);

	return 0;
} 