#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
	list<string> words;
	string word;
	while(cin >> word)
		words.emplace_back(word);

	list<string>::const_iterator it = words.cbegin();
	while(it != words.cend())
		cout << *it++ << " ";
	cout << endl;


	return 0;
}