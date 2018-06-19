#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

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
	for(auto i : words)
		cout << i << " ";
	cout << endl;

	stable_sort(words.begin(), words.end(), isShorter);
	for(auto i : words)
		cout << i << " ";
	cout << endl;
}


int main()
{
	vector<string> s{"an", "rabbit", "dog", "is", "chasing", "a", "rabbit", "an"};

	for(auto i : s)
		cout << i << " ";
	cout << endl;

	elimDups(s);



	return 0;
}