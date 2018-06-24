#include <iostream>
#include <fstream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ifstream in("11_8_data.txt");
	if(!in)
	{
		cout << "can't open file" << endl;
		return -1;
	}

	set<string> ss;
	vector<string> vs1, vs2; 
	string word;
	while(in >> word)
	{
		ss.insert(word);
		vs1.push_back(word);
		if(find(vs2.begin(), vs2.end(), word) == vs2.end())
			vs2.push_back(word);
	}
	
	cout << "set: ";
	for(auto i : ss)
		cout << i << " ";
	cout << endl;	

	cout << "vector1: ";
	for(auto i : vs1)
		cout << i << " ";
	cout << endl;

	cout << "vector2: ";
	for(auto i : vs2)
		cout << i << " ";
	cout << endl;

	return 0;
}