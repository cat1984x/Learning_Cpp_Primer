#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	cout << str << endl;

	decltype(str.size()) index = 0;
	while(index != str.size())
	{
		str[index] = 'X';
		++index;
	}
	cout << str << endl;

	return 0;
}