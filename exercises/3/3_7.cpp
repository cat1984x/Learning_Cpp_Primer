#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("string");
	cout << str << endl;

	for(char &c : str)
		c = 'X';
	cout << str << endl;

	return 0;
}