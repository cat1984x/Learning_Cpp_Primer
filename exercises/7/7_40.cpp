#include <iostream>
#include <string>

using namespace std;

class Book
{
public:
	Book() = default;
	Book(const string &i, const string &n, const string &a, 
		const string &p, double pr) : isbn(i),name(n), 
	author(a), publisher(p), price(pr){}
	void print() const;
private:
	string isbn, name, author, publisher;
	double price;
};

void Book::print() const
{
	cout << "isbn: " << isbn << " name: " << name
	<< " author: " << author << " publisher: " << publisher;
}


int main()
{
	Book a;
	a.print();
	cout << endl;

	Book b("99-1", "C++", "Lippman", "Pearson", 128.00);
	b.print();
	cout << endl;

	return 0;
}