#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;

int main(int argc, char* argv[])
{
	if(argc != 4)
		cout << "wrong arguments";
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "can't open in file" << endl;
		return -1;
	}

	ofstream out_odd(argv[2]);
	ofstream out_even(argv[3]);

	istream_iterator<int> in_it(in), eof;
	ostream_iterator<int> out_odd_it(out_odd, " ");
	ostream_iterator<int> out_even_it(out_even, "\n");

	while(in_it != eof)
	{
		if(*in_it % 2)
			out_odd_it = *in_it++;
			// *out_odd_it++ = *in_it++;
		else
			out_even_it = *in_it++;		
			// *out_even_it++ = *in_it++;		
	}

	return 0;
}