#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main()
{
	cout<<"Please input two int."<<endl;
	int i , j , tmp;
	cin >> i >> j;
	if(i > j)
	{
		tmp = i;
		i = j;
		j = tmp;
	}
	while(i <= j)
	{
		cout << i << endl;
		++i;
	}
	return 0;
}