#include "7_22_Person.h"

using namespace std;

int main()
{
	Person a;
	cout << "a: ";
	print(cout, a) << endl;

	Person b("b");
	cout << "b: ";
	print(cout, b) << endl;

	Person c("c", "Nanjing");
	cout << "c: ";
	print(cout, c) << endl;

	Person d(cin);
	cout << "d: ";
	print(cout, d) << endl;

	return 0;
}