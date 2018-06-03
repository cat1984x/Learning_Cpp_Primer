#include <iostream>

using namespace std;

int main()
{
	char a[] = "Hello", b[] = "Chen";
	// cout << "a_len: " << strlen(a) << " b_len: " << strlen(b) << endl; 
	// constexpr int size = strlen(a) + strlen(b) + 1;
	// char c[size];
	char c[100];

	strcpy(c, a);
	strcat(c, b);

	cout << c << endl;

	return 0;
}