#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

void insert(forward_list<string> &fl, const string &s1, const string &s2)
{
	auto pre = fl.before_begin();
	bool found = false;
	auto curr = fl.begin();
	while(curr != fl.end())
	{
		if(*curr == s1)
		{
			curr = fl.insert_after(curr, s2);
			found = true;
		}
		++curr;
		++pre;
	}
	if(!found)
	{
		fl.insert_after(pre, s2);
	}
}

int main()
{
	forward_list<string> flst1 = {"a", "forward", "a", "list"};
	forward_list<string> flst2 = {"an", "forward", "an", "list"};

	insert(flst1, "a", "cute");
	insert(flst2, "a", "cute");

	for(auto i : flst1)
		cout << i << " ";
	cout << endl;

	for(auto i : flst2)
		cout << i << " ";
	cout << endl;

	return 0;
}
