/*
	Writer : �����
	Study C++
	c++ Basic
*/


#include <iostream>

double area(int);

int main()
{
	int n = 3;
	char c = '#';

	std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
	std::cout << "n + 5 = " << n + 5 << '\n';
	std::cout << "������ " << area(n) << std::endl;

	std::cout << "Hello.\n";
	std::cout << "ù��° ������.\n";

	return 0;
}

double area(int r)
{
	return 3.14 * r * r;
}