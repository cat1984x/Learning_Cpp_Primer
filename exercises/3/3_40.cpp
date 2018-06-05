#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	char a[] = "Hello", b[] = "Chen";
	cout << "a_len: " << strlen(a) << " b_len: " << strlen(b) << endl; 
	cout << typeid(strlen(a)).name() << endl;
	constexpr unsigned __int64 size = strlen(a) + strlen(b) + 1;
	char c[size];
	// char c[100];

	strcpy(c, a);
	strcat(c, b);

	cout << c << endl;

	return 0;
}