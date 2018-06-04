#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num = -2;
	cout << (num++ && num) << endl;


	vector<int> vec = {1, 2, 3, 4};
	int ival = 0;
	cout << (vec[ival++] < vec[ival]) << endl;

	return 0;
}