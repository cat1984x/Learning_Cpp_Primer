#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main()
{
	map<string, int> scores;
	string name;
	int score;
	name = "chen";
	score = scores[name];

	cout << score;

	return 0;
}