#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <memory>
#include "12_30_TextQuery.h"

using namespace std;

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while(true)
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") 
			break;
		print(cout, tq.query(s)) << endl;
	}
}

int main()
{
	ifstream in("12_27_data.txt");
	if(!in)
	{
		cout << "can't open file." <<endl;
		return -1;
	}

	runQueries(in);

	return 0;
}