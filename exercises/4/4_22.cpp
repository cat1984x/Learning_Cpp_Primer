#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned grade;
	cin >> grade;

	string finalGrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" 
	: (grade < 75) ? "low pass" : "pass";

	string finalGrade2;
	if(grade > 90)
		finalGrade2 = "high pass";
	else if(grade < 60)
		finalGrade2 = "fail";
	else if(grade < 75)
		finalGrade2 = "low pass";
	else
		finalGrade2 = "pass";

	cout << grade << " : " << finalGrade << endl;
	cout << grade << " : " << finalGrade2 << endl;

	return 0;
}