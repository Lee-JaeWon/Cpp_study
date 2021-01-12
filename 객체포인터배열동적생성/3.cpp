//Ŭ���� ��ü�� ���� ���� �� ��ȯ
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
	int radius;
public:
	Circle();
	Circle(int);
	~Circle();
	void setRadius(int);
	double getArea();
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return pi * radius * radius;
}

int main() {
	int radius;

	while (true) {
		cout << "���� ������ �Է�(���� �Է� �� ����) >> ";
		cin >> radius;
		if (radius < 0) break;

		Circle* p = new Circle(radius);
		cout << "���� ������ " << p->getArea() << endl;
		delete p;
		cout << endl;
	}
}

//int main() {
//	Circle* p, * q;
//	p = new Circle;
//	q = new Circle(30);
//	cout << p->getArea() << endl;
//	cout << q->getArea() << endl;
//	delete p;
//	delete q;
//}