#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(list<string> &words)
{
	words.sort();

	for(auto i : words)
		cout << i << " ";
	cout << endl;

	words.unique();

	for(auto i : words)
		cout << i << " ";
	cout << endl;
}

int main()
{
	list<string> s{"an", "rabbit", "dog", "is", "chasing", "an", "rabbit", "an"};

	for(auto i : s)
		cout << i << " ";
	cout << endl;

	elimDups(s);

	for(auto i : s)
		cout << i << " ";
	cout << endl;

	return 0;
}