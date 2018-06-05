#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = {-1, 2, 3, 4};

	for(auto &i : vec)
		i = ((i % 2) ? i * 2 : i);

	for(auto i : vec)
		cout << i << " ";
	cout << endl;

	return 0;
}