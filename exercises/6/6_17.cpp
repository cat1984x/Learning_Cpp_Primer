#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasUpper(const string &s)
{
	for(auto i : s)
	{
		if(isupper(i))
			return true;
	}
	return false;
}

void toLower(string &s)
{
	for(auto &i : s)
		i = tolower(i);

}

int main()
{
	string s;
	while(cin >> s)
	{
		if(hasUpper(s))
		{
			toLower(s);
		}
		cout << s << endl;
	}
	return 0;
}