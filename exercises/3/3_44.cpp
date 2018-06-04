#include <iostream>

using namespace std;

int main()
{
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	int cnt = 0;
	for(auto &row : ia)
		for(auto &col : row)
		{
			col = cnt;
			++cnt;
		}

	typedef int int_array[4];
	for(const int_array &row : ia)
	{
		for(const int &col : row)
			cout << col << " ";
		cout << endl;
	}


	for(size_t row = 0; row != rowCnt; ++row)
	{
		for(size_t col = 0; col != colCnt; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}


	using int_array2 = int[4];
	for(int_array2 *row = begin(ia); row != end(ia); ++row)
	{
		for(int *col = begin(*row); col != end(*row);  ++col)
			cout << *col << " ";
		cout << endl;
	}


	return 0;
}