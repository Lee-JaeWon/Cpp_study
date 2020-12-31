//���� ������, �ߺ� ���� �ٷ��
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) {} //Circle(int r)�� ������ ȣ��

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� �� ����" << endl;
}

double Circle::getArea() {
	return pi * radius * radius;
}

int main() {
	Circle donut; //��ü donut ���� //�⺻�� �ʱ�ȭ radius = 1;
	double area = donut.getArea();
	cout << "donut�� ������ " << area << endl;

	Circle pizza(30); //��ü pizza ���� //�Ű������� ���� radius = 30;
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << endl;

	return 0;
}