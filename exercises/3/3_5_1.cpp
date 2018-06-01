#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string strTotal, str;
	while(cin >> str)
		strTotal += str;
	cout << strTotal << endl;
	return 0;
}