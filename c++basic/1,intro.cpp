/*
	Writer : 이재원
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
	std::cout << "면적은 " << area(n) << std::endl;

	std::cout << "Hello.\n";
	std::cout << "첫번째 맛보기.\n";

	return 0;
}

double area(int r)
{
	return 3.14 * r * r;
}