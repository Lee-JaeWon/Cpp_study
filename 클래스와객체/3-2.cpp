//위임 생성자, 중복 내용 다루기
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

Circle::Circle() : Circle(1) {} //Circle(int r)의 생성자 호출

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

double Circle::getArea() {
	return pi * radius * radius;
}

int main() {
	Circle donut; //객체 donut 생성 //기본값 초기화 radius = 1;
	double area = donut.getArea();
	cout << "donut의 면적은 " << area << endl;

	Circle pizza(30); //객체 pizza 생성 //매개변수로 전달 radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;

	return 0;
}