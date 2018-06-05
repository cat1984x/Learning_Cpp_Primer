#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word, lastWord, mostWord;
	unsigned cnt = 1, mostCnt = 0;

	while(cin >> word)
	{
		if(word == lastWord)
			++cnt;
		else
		{
			if(cnt > mostCnt)
			{
				mostCnt = cnt;				
				mostWord = lastWord;
			}
			cnt = 1;			
		}
		lastWord = word;
	}

	cout << "Most word: " << mostWord << " " << mostCnt << " times." << endl;

	return 0;
}