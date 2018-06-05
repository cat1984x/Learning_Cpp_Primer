#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, 
		spaceCnt = 0, tableCnt = 0, newlineCnt = 0,
		ffCnt = 0, flCnt = 0, fiCnt = 0;
	bool fFlag = false;
	char c , lastC = 0;
	double start, end;
	double cost;
	start = clock();

	while(cin.get(c))
	{
		fFlag = true;
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
				if(lastC == 'f')
					++fiCnt;
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
			case 'f':
				if(lastC == 'f')
				{
					++ffCnt;
					fFlag = false;
				}
				break;
			case 'l':
				if(lastC == 'f')
					++flCnt;
				break;
			default:
				break;
		}
		if(!fFlag)
			lastC = '\0';
		else
			lastC = c;
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
	cout << "ffCnt: " << ffCnt << endl; 
	cout << "flCnt: " << flCnt << endl; 
	cout << "fiCnt: " << fiCnt << endl; 
	cout << "time used: " << cost / CLOCKS_PER_SEC << "s"<< endl;

	return 0;
}