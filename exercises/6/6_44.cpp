#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	string s1, s2;
	while(cin >> s1 >> s2)
	{
		cout << "The shorter is: " << (isShorter(s1, s2) ? s1 : s2) << endl;
	}

	return 0;
}