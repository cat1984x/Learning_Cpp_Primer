#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ia[] = {1, 2, 3, 4, 5}; 
	vector<int> va(begin(ia), end(ia));

	for(auto i : ia)
		cout << i << " ";
	cout << endl;

	for(auto v : va)
		cout << v << " ";
	cout << endl;

	return 0;
}