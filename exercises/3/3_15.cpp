#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string word;
	vector<string> text;
	while(cin >> word)
	{
		text.push_back(word);
	}
	for(auto word : text)
		cout << word << " ";

	return 0; 
}