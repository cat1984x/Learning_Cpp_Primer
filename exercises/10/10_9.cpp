#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());

	for(auto i : words)
		cout << i << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());

	for(auto i : words)
		cout << i << " ";
	cout << endl;

	words.erase(end_unique, words.end());
}

int main()
{
	vector<string> s{"an", "rabbit", "dog", "is", "chasing", "an", "rabbit", "an"};

	for(auto i : s)
		cout << i << " ";
	cout << endl;

	elimDups(s);

	for(auto i : s)
		cout << i << " ";
	cout << endl;

	return 0;
}