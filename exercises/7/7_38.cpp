#include <iostream>

using namespace std;

class Book
{
public:
	Book(istream &is = cin){ is >> val; }

	int val;
};

int main()
{
	Book b;
	cout << b.val;

	return 0;
}