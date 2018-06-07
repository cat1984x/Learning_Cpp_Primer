#include <iostream>
#include <string>

using namespace std;

string odd[] = {"1", "3", "5", "7", "9", "11", "13", "15", "17", "19"};
string even[] = {"0", "2", "4", "6", "8", "10", "12", "14", "16", "18"};

// string (&arrPtr(int i))[10]
// {
// 	return (i % 2) ? odd : even;
// }


// using arrS = string [10];
// arrS &arrPtr(int i)
// {
// 	return (i % 2) ? odd : even;
// }


// auto arrPtr(int i) -> string (&)[10]
// {
// 	return (i % 2) ? odd : even;
// }


decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}

int main()
{
	int i;
	while(cin >> i)
	{
		for(int j = 0; j != 10; j++)
			cout << arrPtr(i)[j] <<" ";
		cout << endl;
	}

	return 0;
}