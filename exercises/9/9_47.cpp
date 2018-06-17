#include <iostream>
#include <string>

using namespace std;

void find_num(const string &s)
{
	string nums("0123456789");
	string::size_type pos = 0;
	while((pos = s.find_first_of(nums, pos)) != string::npos)
	{
		cout << "pos: " << pos << " element is " << s[pos] << endl;
		++pos;
	}
}

void find_char(const string &s)
{
	string nums("0123456789");
	string::size_type pos = 0;
	while((pos = s.find_first_not_of(nums, pos)) != string::npos)
	{
		cout << "pos: " << pos << " element is " << s[pos] << endl;
		++pos;
	}
}

int main()
{
	string s("ab2c3d7R4E6");

	find_num(s);
	find_char(s);


	return 0;
}
