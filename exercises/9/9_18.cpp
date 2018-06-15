#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
	deque<string> words;
	string word;
	while(cin >> word)
		words.emplace_back(word);

	deque<string>::const_iterator it = words.cbegin();
	while(it != words.cend())
		cout << *it++ << " ";
	cout << endl;


	return 0;
}