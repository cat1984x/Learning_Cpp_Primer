#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while(cin >> grade)
	{
		if(grade <= 100)
		{
			++*(it + grade / 10);
		}
		else
		{
			cout << "grade must between 0 to 100!" <<endl;
			return -1;
		}
	}
	for(auto it = scores.cbegin(); it != scores.cend(); ++it)
		cout << *it <<" ";
	cout << endl;
	return 0;
}