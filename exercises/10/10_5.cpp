#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	char *p[] = {"Hello", "World", "!"};
	char *q[] = {strdup(p[0]), strdup(p[1]), strdup(p[2])};
	char *r[] = {p[0], p[1], p[2]};

	cout << equal(begin(p), end(p), begin(q)) << endl;
	cout << equal(begin(p), end(p), begin(r)) << endl;

	return 0;
}