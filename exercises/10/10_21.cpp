#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void decrease(int i)
{
	auto f = [i]()mutable->bool
		{
			if(i > 0)
			{
				while(i > 0)
				{	
					cout << i-- << endl;
					// cout << i-- << endl;
				}
				return false;
			}
			else 
				return true;
		};
	cout << "i: " << i << endl; 

	// auto f = [&]()->bool
	// 	{
	// 		if(i > 0)
	// 		{
	// 			while(i > 0)
	// 			{	
	// 				cout << i-- << endl;
	// 			}
	// 			return false;
	// 		}
	// 		else 
	// 			return true;
	// 	};

	cout << (f() ? "is 0" : "bigger than 0");
	cout << endl;

	cout << "i: " << i << endl; 
}

void fcn3()
{
	size_t v1 = 42;
	auto f = [v1]()mutable{return ++v1;};
	v1 = 0;
	auto j = f();
	cout << "j: " << j << endl;
	cout << "v1: " << v1 << endl;
}

int main()
{
	decrease(5);
	fcn3();

	return 0;
}