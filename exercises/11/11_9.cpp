#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <list>
#include <string>

using namespace std;

int main()
{
	ifstream in("11_9_data.txt");
	if(!in)
	{
		cout << "can't open file" << endl;
		return -1;
	}

	map<string, list<int>> wordAppear;
	string line, word;
	int lineNum = 0;

	while(getline(in, line))
	{
		istringstream in_word(line);
		while(in_word >> word)
			wordAppear[word].push_back(lineNum);
		++lineNum;
	}

	
	for(auto i : wordAppear)
	{
		cout << i.first << " ";
		for(auto j : i.second)
			cout << j << " ";
		cout << endl;
	}
	cout << endl;	

	return 0;
}