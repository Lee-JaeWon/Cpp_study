//소멸자 선언 및 구현 기본
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
public:
	int radius;
	Circle(); //기본 생성자
	Circle(int r);
	~Circle(); //소멸자 선언
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << " 인 원 생성" << endl;
}

Circle::~Circle() { //소멸자 구현
	cout << "반지름이 " << radius << " 인 원 소멸" << endl;
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

//객체는 생성의 반대순으로 소멸된다.
//전역 객체, 지역 객체