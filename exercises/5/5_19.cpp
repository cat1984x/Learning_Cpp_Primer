#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	do
	{
		cout << "Please input two string" << endl;
		cin >> s1 >> s2;
		cout << "The shorter is ";
		cout << ((s1.size() < s2.size()) ? s1 : s2);
		cout << endl;
	}while(cin);

	return 0;
}