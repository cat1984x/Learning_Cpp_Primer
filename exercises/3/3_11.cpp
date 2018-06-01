#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "Keep out!";
	cout << s << endl;
	for(auto &c : s)
	{
		cout << c;
		c = 'X';
	}
	cout << endl;
	cout << s << endl;

	return 0;
}