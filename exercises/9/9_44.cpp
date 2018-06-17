#include <iostream>
#include <string>
#include <vector>

using namespace std;

void replace(string &s, const string &oldVal, const string &newVal)
{
	auto iter = s.begin();
	while(iter != s.end())
	{
		string subStr = s.substr(iter - s.begin(), oldVal.size());//num
		if(subStr == oldVal)
		{
			s = s.replace(iter - s.begin(), oldVal.size(), newVal);//num
			iter += newVal.size();
		}else
			++iter;
	}
}

int main()
{
	string old1("tho");
	string new1("though");
	string old2("thru");
	string new2("through");

	string test1("tho my name is tho.");
	string test2("thru my name is thro.");

	cout << test1 << endl;
	replace(test1, old1, new1);
	cout << test1 << endl;

	cout << test2 << endl;
	replace(test2, old2, new2);
	cout << test2 << endl;

	return 0;
}
