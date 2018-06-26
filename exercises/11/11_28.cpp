#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

 void find(map<string, vector<int>> &scores, const string &name)
 {
	map<string, vector<int>>::iterator ret = scores.find(name);
	if(ret != scores.end())
	{
		cout << "find " << ret->first << " score: ";
		for(auto i : ret->second) 
			cout << i << " ";
		cout << endl;
	}
	else
		cout << name << " not found" << endl;
 }

int main()
{
	map<string, vector<int>> scores;
	scores["chen"] = {100, 90};

	find(scores, "chen");
	find(scores, "zhou");

	return 0;
}