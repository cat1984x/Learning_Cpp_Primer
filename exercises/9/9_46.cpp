#include <iostream>
#include <string>
#include <vector>

using namespace std;

string append_name(const string &s, const string &front, const string &end)
{
	string res(s);
	res.insert(0, " ");
	res.insert(0, front);
	res.insert(res.size(), " ");
	res.insert(res.size(), end);

	return res;
}

int main()
{
	cout << append_name("Chen", "Mr.", "Jr.")<< endl;
	cout << append_name("Zhou", "Ms.", "III")<< endl;

	return 0;
}
