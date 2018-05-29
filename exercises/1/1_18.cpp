#include <iostream>

int main()
{
	int currVal = 0, val = 0;
	if(std::cin >> val)
	{
		int cnt = 1;
		currVal = val;
		while(std::cin >> val)
		{
			if(currVal == val)
				++cnt;
			else
			{
				std::cout << "Val " << currVal << " ocurrs " << cnt << " times." << std::endl;
				cnt = 1;
				currVal = val;
			}
		}
		std::cout << "val " << currVal << " ocurrs " << cnt << " times." << std::endl;
	}
	return 0;
}