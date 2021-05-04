#include <iostream>
using namespace std;

int main() {

	int a = 2, b = 3;

	auto func = [](int x, int y)->int { return x * y; };

	cout << a << " x " << b << " = " << func(a, b) << endl;

}