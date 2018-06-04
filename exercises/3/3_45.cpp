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

	for(const auto &row : ia)
	{
		for(const auto col : row)
			cout << col << " ";
		cout << endl;
	}


	for(auto row = 0; row != rowCnt; ++row)
	{
		for(auto col = 0; col != colCnt; ++col)
			cout << ia[row][col] << " ";
		cout << endl;
	}


	for(auto row = begin(ia); row != end(ia); ++row)
	{
		for(auto col = begin(*row); col != end(*row);  ++col)
			cout << *col << " ";
		cout << endl;
	}


	return 0;
}