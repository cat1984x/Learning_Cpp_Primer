#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, result;
	getline(cin, s);
	for(auto c : s)
	{
		if(!ispunct(c))
			result += c;
	}
	cout << result << endl;
	return 0;
}