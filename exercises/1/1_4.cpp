#include <iostream>

int main(void)
{
	int num1, num2;
	std::cout << "请输入两个数" << std::endl;
	std::cin >> num1 >> num2;
	std::cout << num1 << "与" << num2 << "的积为：" << num1 * num2 << std::endl;
	return 0;
}
