#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main()
{
	list<char *> lc{"this", "is", "a", "char"};
	vector<string> vs1(lc.begin(), lc.end());
	vector<string> vs2;
	vs2.assign(lc.begin(), lc.end());
	
	for(auto num : vs1)
		cout << num << " ";
	cout << endl;
	
	for(auto num : vs2)
		cout << num << " ";
	cout << endl;

	return 0;
}