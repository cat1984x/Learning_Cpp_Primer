#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, 
		spaceCnt = 0, tableCnt = 0, newlineCnt = 0;
	char c;
	double start, end;
	double cost;
	start = clock();

	while(cin.get(c))
	{
		switch (c)
		{
			case 'A':
			case 'a':
				++aCnt;
				break;
			case 'E':
			case 'e':
				++eCnt;
				break;
			case 'I':
			case 'i':
				++iCnt;
				break;
			case 'O':
			case 'o':
				++oCnt;
				break;
			case 'U':
			case 'u':
				++uCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tableCnt;
				break;
			case '\n':
				++newlineCnt;
				break;
			default:
				break;
		}
	}

	end = clock();
	cost = end - start;

	cout << "aCnt: " << aCnt << endl; 
	cout << "eCnt: " << eCnt << endl; 
	cout << "iCnt: " << iCnt << endl; 
	cout << "oCnt: " << oCnt << endl; 
	cout << "uCnt: " << uCnt << endl; 
	cout << "spaceCnt: " << spaceCnt << endl; 
	cout << "tableCnt: " << tableCnt << endl; 
	cout << "newlineCnt: " << newlineCnt << endl; 
	cout << "time used: " << cost / CLOCKS_PER_SEC << "s"<< endl;

	return 0;
}