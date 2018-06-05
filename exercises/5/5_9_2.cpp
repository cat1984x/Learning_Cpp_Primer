#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char c;
	double start, end;
	double cost;
	start = clock();

	while(cin >> c)
	{
		
		if(c == 'a')
			++aCnt;		
		if(c == 'e')
			++eCnt;		
		if(c == 'i')
			++iCnt;		
		if(c == 'o')
			++oCnt;		
		if(c == 'u')
			++uCnt;
	}

	end = clock();
	cost = end - start;

	cout << "aCnt: " << aCnt << endl; 
	cout << "eCnt: " << eCnt << endl; 
	cout << "iCnt: " << iCnt << endl; 
	cout << "oCnt: " << oCnt << endl; 
	cout << "uCnt: " << uCnt << endl; 
	cout << "time used: " << cost / CLOCKS_PER_SEC << "s"<< endl;

	return 0;
}