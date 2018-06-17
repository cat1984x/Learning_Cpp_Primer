#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		cerr << "Please give file" << endl;
		return -1;
	}

	ifstream input(argv[1]);
	if(!input)
	{
		cerr << "can't open file" << endl;
		return -1;
	}

	string letter("abcdefghijklmnopqrstouwxyz");
	string capital("ABCDEFGHIJKLMNOPQRSTUVWXYZ,.;\'\"!@#$%^&*");
	string ascender("bdfhjklt");
	string decender("gjpqy");
	string word;

	int max = 0;
	string maxWord;
	while(input >> word)
	{
		if(word.find_first_of(capital) == string::npos
			&&word.find_first_of(ascender) == string::npos
			&& word.find_first_of(decender) == string::npos)
			if(word.size() > max)
			{
				maxWord = word;
				max = word.size();
			}
	}

	cout << "The most word is: " << maxWord << " size: " << max;

	return 0;
}
