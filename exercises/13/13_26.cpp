#include "13_26_StrBlob.h"

using namespace std;

int main()
{
	StrBlob s1;
	{
		StrBlob s2 = {"a", "an", "the"};
		s1 = s2;
		cout << s2.size() << endl;
	}

	cout << s1.front() << endl;
	cout << s1.back() << endl;
	s1.push_back("cat");
	cout << s1.back() << endl;
	s1.pop_back();
	cout << s1.back() << endl;
	cout << s1.size() << endl;

	return 0;
}