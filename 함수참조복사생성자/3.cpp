// Chapter 5, Example
// ���� ������
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
private:
	int radius;
public:
	Circle(const Circle& c);
	Circle();
	Circle(int);
	double getArea();
};

Circle::Circle(const Circle& c) { // ���� ������(copy constructor)
	this->radius = c.radius;
	cout << "���� ������ ���� radius = " << radius << endl;
}
Circle::Circle() {
	this->radius = 1;
}
Circle::Circle(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return pi * radius * radius;
}

int main() {
	Circle src(30); // src��ü�� ���� ������
	Circle dest(src); // dest��ü�� ���� ������

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}