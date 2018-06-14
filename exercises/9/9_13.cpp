#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> li{1, 2, 3, 4, 5};
	vector<int> vi{1, 2, 3, 4, 5, 6, 7};

	vector<double> vd1(li.begin(), li.end());
	vector<double> vd2(vi.begin(), vi.end());
	// vector<double> vd3(vi);

	
	for(auto num : vd1)
		cout << num << " ";
	cout << endl;
	
	for(auto num : vd2)
		cout << num << " ";
	cout << endl;

	return 0;
}