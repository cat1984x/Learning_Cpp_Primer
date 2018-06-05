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
		if(grade <= 100)
		{
			if(grade < 60)
				letterGrade = scores[0];
			else
			{
				letterGrade = scores[(grade - 50)/ 10];
				if(letterGrade != "A++")
				{
					if(grade % 10 > 7)
						letterGrade += "+";
					else if(grade % 10 < 3)
						letterGrade += "-";
				}
			}
			cout << grade << " : " << letterGrade << endl;
		}else
			cout << "Please input a number between 0 to 100." << endl;
	}

	return 0;
}