#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int sum = 0, i = 50;
	while(i <= 100)
	{
		sum += i;
		++i;
	}
	cout << "The sum between 50 to 100 is:" 
	<< sum << endl;
}