#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);

	cout << str << endl;
	
	for(string::size_type i = 0; i != str.size(); ++i)
	{
		str[i] = 'X';
	}
	cout << str << endl;

	return 0;
}