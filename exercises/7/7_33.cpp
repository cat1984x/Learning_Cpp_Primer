#include <iostream>
#include "7_33_Screen.h"

using namespace std;

int main()
{
	Window_mgr win;
	for(int i = 0; i != 5 ; ++i)
		win.screens.push_back(Screen(5, 5, 'X'));

	for(auto i : win.screens)
	{
		i.display(cout); 
		cout << endl;
	}

	win.screens[2].set(2, 2, ' ');
	cout << endl;

	for(auto i : win.screens)
	{
		i.display(cout); 
		cout << endl;
	}

	cout << win.screens[0].size();


	return 0;
}