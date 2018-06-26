#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

 void delete_a(multimap<string, string> &authors, const string &name)
 {
 	cout << "delete: " << name << endl;
 	while(authors.find(name) != authors.end())
 	{
 		authors.erase(authors.find(name));
 	}
 }

int main()
{
	multimap<string, string> authors;
	authors.insert({"Stanly B.Lippman", "C++ Primer"});
	authors.insert({"Donald Ervin Knuth", "The Art of Computer Programming"});
	authors.insert({"Donald Ervin Knuth", "Concrete Mathematics"});

	cout << "origin: " << endl;
	for(auto i : authors)
		cout << i.first << " : " << i.second << endl;
	cout << endl;

	delete_a(authors, "Donald Ervin Knuth");
	for(auto i : authors)
		cout << i.first << " : " << i.second;
	cout << endl;

	delete_a(authors, "Edsger Dijkstra");
	for(auto i : authors)
		cout << i.first << " : " << i.second;
	cout << endl;

	return 0;
}