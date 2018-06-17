#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<char> vc = {'c', 'b', 'a', 'd'};
	string s(vc.data(), vc.size());
	cout << s <<endl;;

	return 0;
}
