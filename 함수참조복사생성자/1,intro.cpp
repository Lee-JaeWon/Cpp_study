/*
	Writer : �����
	Study C++
	�Լ��� ����, ���� ������
*/

// Chapter 5, Example
// ��ü�� ���� ����
// �����ڿ� �Ҹ����� ��Ī
// '���� ���� ȣ��' �� �Ű� ������ �����ڴ� ���� ���� ����
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int);
	~Circle();
	double getArea();
	int getRadius();
	void setRadius(int);
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}
double Circle::getArea() {
	return pi * radius * radius;
}
int Circle::getRadius() {
	return radius;
}
void Circle::setRadius(int radius) {
	this->radius = radius;
}

void increase(Circle&);

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}

void increase(Circle& c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}