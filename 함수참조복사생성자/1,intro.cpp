/*
	Writer : 이재원
	Study C++
	함수와 참조, 복사 생성자
*/

// Chapter 5, Example
// 객체의 참조 전달
// 생성자와 소멸자의 대칭
// '값에 의한 호출' 시 매개 변수의 생성자는 실행 되지 않음
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
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
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