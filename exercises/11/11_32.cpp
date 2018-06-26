#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

 void print(multimap<string, string> &authors)
 {
 	for(auto i : authors)
		cout << i.first << " : " << i.second << endl;
	cout << endl;
 }

int main()
{
	multimap<string, string> authors;
	authors.insert({"Stanly B.Lippman", "C++ Primer"});
	authors.insert({"Donald Ervin Knuth", "The Art of Computer Programming"});
	authors.insert({"Donald Ervin Knuth", "Concrete Mathematics"});

	print(authors);

	return 0;
}