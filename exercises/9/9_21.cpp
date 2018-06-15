#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string word;
	vector<string> vs;
	auto it = vs.begin();
	while(cin >> word)
		it = vs.insert(it, word);

	for(auto i : vs)
		cout << i << " ";
	
	return 0;
}
