#include <iostream>

using namespace std;

int count()
{
	static int cnt = 0;
	return cnt++;
}

int main()
{
	for(int i = 0; i != 10; ++i)
		cout << count() << endl;
	return 0;
}