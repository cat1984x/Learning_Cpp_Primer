#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	char c;
	s.reserve(100);
	while(cin >> c)
		s.push_back(c);

	cout << s;

	return 0;
}
