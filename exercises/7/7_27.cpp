#include <iostream>
#include "7_27_Screen.h"

using namespace std;

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";

	const Screen blank(5, 3);
	// blank.set('%');
	blank.display(cout);
	cout << endl;

	myScreen.display(cout);
	cout << "\n";

	return 0;
}