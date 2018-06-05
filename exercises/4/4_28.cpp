#include <iostream>

using namespace std;

int main()
{
	int ia[] = {1, 2, 3};
	constexpr size_t size = sizeof(ia) / sizeof(*ia);
	// size_t size = sizeof(ia) / sizeof(*ia);
	int arr[size];

	cout << "ia: ";
	for(auto i : arr)
		cout << i << " ";
	cout << endl;

	cout << "bool:\t\t" << sizeof(bool) << endl;
	cout << "char:\t\t" << sizeof(char) << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << endl;
	cout << "short:\t\t" << sizeof(short) << endl;
	cout << "int:\t\t" << sizeof(int) << endl;
	cout << "long:\t\t" << sizeof(long) << endl;
	cout << "long long:\t" << sizeof(long long) << endl;
	cout << "float:\t\t" << sizeof(float) << endl;
	cout << "double:\t\t" << sizeof(double) << endl;
	cout << "long double:\t" << sizeof(long double) << endl;

	return 0;
}