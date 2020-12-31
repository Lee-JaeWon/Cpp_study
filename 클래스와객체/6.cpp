//�Ҹ��� ���� �� ���� �⺻
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
public:
	int radius;
	Circle(); //�⺻ ������
	Circle(int r);
	~Circle(); //�Ҹ��� ����
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << " �� �� ����" << endl;
}

Circle::~Circle() { //�Ҹ��� ����
	cout << "�������� " << radius << " �� �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return pi * radius * radius;
}

Circle globalDonut(1000);
Circle pizza(2000);

void f() {
	Circle donut(100);
	Circle pizza(300);
}

int main() {

	Circle donut;
	Circle pizza(30);
	f();
	return 0;
}

//��ü�� ������ �ݴ������ �Ҹ�ȴ�.
//���� ��ü, ���� ��ü