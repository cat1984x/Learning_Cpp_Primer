#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string word;
	vector<string> words;
	while(cin >> word)
	{
		words.push_back(word);
	}
	for(auto word : words)
	{
		for(auto &letter : word)
			letter = toupper(letter);
		cout << word << endl;
	}

	return 0;
}
