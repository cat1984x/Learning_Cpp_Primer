#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	istream_iterator<int> in_it(cin), eof;
	vector<int> iv(in_it, eof);

	sort(iv.begin(), iv.end());

	ostream_iterator<int> out_it(cout, " ");
	copy(iv.begin(), iv.end(), out_it);
	cout << endl;

	return 0;
}