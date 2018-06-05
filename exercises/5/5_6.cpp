#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	unsigned grade;
	string letterGrade;
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

	while(cin >> grade)
	{
		letterGrade = (grade < 60) ? scores[0] : scores[(grade - 50)/ 10];
		letterGrade += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" :
		(grade % 10 < 3) ? "-" : "";

		cout << grade << " : " << letterGrade << endl;
	}

	return 0;
}