#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char c;

	while(cin >> c)
	{
		switch (c)
		{
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
			default:
				break;
		}
	}

	cout << "aCnt: " << aCnt << endl; 
	cout << "eCnt: " << eCnt << endl; 
	cout << "iCnt: " << iCnt << endl; 
	cout << "oCnt: " << oCnt << endl; 
	cout << "uCnt: " << uCnt << endl; 

	return 0;
}