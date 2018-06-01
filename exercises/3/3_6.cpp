#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str("string");
	cout << str << endl;

	for(auto &c : str)
		c = 'X';
	cout << str << endl;

	return 0;
}