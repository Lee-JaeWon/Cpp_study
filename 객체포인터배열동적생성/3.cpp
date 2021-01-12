//클래스 객체의 동적 생성 및 반환
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
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
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
		cout << "정수 반지름 입력(음수 입력 시 종료) >> ";
		cin >> radius;
		if (radius < 0) break;

		Circle* p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;
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