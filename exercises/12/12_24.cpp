#include <iostream>
#include <string>

using namespace std;

int main()
{
	char *p1 = new char[10];
	string s;
	getline(cin, s);
	if(s.size() > 9)
	{
		cout << "longer than 9" << endl;
		return -1;
	}
	strcpy(p1, s.c_str());
	cout << p1 << endl;
	
	delete [] p1;

	return 0;
}