#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string &word, 
	const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

bool check_size(const string &a, string::size_type sz)
{
	return a.size() < sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	// auto wc = partition(words.begin(), words.end(),
	// 	check_size);
	auto wc = partition(words.begin(), words.end(),
		bind(check_size, _1, sz));
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s") 
		<< " of length " << sz << " or longer" << endl;
	for_each(wc, words.end(), 
		[](const string &s){cout << s << " ";});
	cout << endl;

}

int main()
{
	vector<string> s{"an", "rabbit", "dog", "is", "chasing", "a", "rabbit", "an"};
	for(auto i : s)
		cout << i << " ";
	cout << endl;

	biggies(s, 5);
	for(auto i : s)
		cout << i << " ";
	cout << endl;


	return 0;
}