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
		// string subStr = s.substr(iter, iter + oldVal.size());//no iter
		if(subStr == oldVal)
		{
			// s = s.erase(iter - s.begin(), oldVal.size());//num
			iter = s.erase(iter, iter + oldVal.size());//iter
			// s = s.insert(iter - s.begin(), newVal.data(), newVal.size());//num
			iter = s.insert(iter, newVal.begin(), newVal.end());//iter
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
