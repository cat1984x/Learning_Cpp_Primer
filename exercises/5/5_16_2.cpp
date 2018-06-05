#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const int size = 10;
	vector<int> v;


	// for(int i = 0; i < 10; ++i)
	// 	v.push_back(i);

	int i = 0;
	while(i < 10)
	{
		v.push_back(i);
		++i;
	}


	for(auto i : v)
		cout << i << " ";
	cout << endl;

	return 0;
}