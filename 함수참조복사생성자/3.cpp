// Chapter 5, Example
// 복사 생성자
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

Circle::Circle(const Circle& c) { // 복사 생성자(copy constructor)
	this->radius = c.radius;
	cout << "복사 생성자 실행 radius = " << radius << endl;
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
	Circle src(30); // src객체의 보통 생성자
	Circle dest(src); // dest객체의 복사 생성자

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
}