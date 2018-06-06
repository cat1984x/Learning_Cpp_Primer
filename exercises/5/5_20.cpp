#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, sLast;
	while(cin >> s)
	{
		if(s == sLast)
			break;
		else
			sLast = s;
	}

	if(s == sLast && s != "")
		cout << s << " is repeated.";
	else
		cout << "None word is repeated.";

	return 0;
}