#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	ifstream in("10_29_data.txt");
	istream_iterator<string> str_it(in), eof;
	vector<string> words(str_it, eof);

	ostream_iterator<string> out_it(cout, " ");
	copy(words.begin(), words.end(), out_it);
	cout << endl;

	return 0;
}