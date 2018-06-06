#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, sLast;
	for(; cin >> s; sLast = s)
	{
		if(islower(s[0]))
			continue;
		if(s == sLast)
			break;
	}

	if(s == sLast && s != "")
		cout << s << " is repeated.";
	else
		cout << "None word is repeated.";

	return 0;
}