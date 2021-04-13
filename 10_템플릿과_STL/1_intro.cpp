/*
	Writer : 이재원
	Study C++
	10. 템플릿과 표준 템플릿 라이브러리(STL)
*/

// Generic function
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1);
	int getRadius();
};

Circle::Circle(int radius) {
	this->radius = radius;
}
int Circle::getRadius() {
	return this->radius;
}

template <class T>
void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {

	int a = 4, b = 5;
	myswap(a, b);
	cout << "a = " << a << ", " << "b = " << b << endl;

	double c = 0.3, d = 12.5;
	myswap(c, d);
	cout << "c = " << c << ", " << "d = " << d << endl;

	Circle donut(4), pizza(20);
	myswap(donut, pizza);
	cout << "donut's r = " << donut.getRadius() << endl;
	cout << "pizza's r = " << pizza.getRadius() << endl;
}