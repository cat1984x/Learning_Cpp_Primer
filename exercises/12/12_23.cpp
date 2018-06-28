#include <iostream>
#include <string>

using namespace std;

int main()
{
	const char c1[] = "Hello ";
	const char c2[] = "world.";

	char *p1 = new char[strlen(c1) + strlen(c2) + 1];
	strcpy(p1, c1);
	strcat(p1, c2);

	cout << p1 << endl;

	string s1 = "Hello ";
	string s2 = "Chen.";

	char *p2 = new char[s1.size() + s2.size() + 1];
	strcpy(p2, (s1 + s2).c_str());

	cout << p2 << endl;

	delete [] p1;
	delete [] p2;

	return 0;
}