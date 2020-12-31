//간단한 생성자(초기화의 역할), 생성자는 리턴 타입x, 중복 가능
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

Circle::Circle() {
	radius = 1; //반지름 값 초기화
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

double Circle::getArea()
{
	return pi*radius*radius;
}

int main()
{
	Circle donut; //객체 donut 생성 //기본값 초기화 radius = 1;
	double area = donut.getArea();
	cout << "donut의 면적은 " << area << endl;

	Circle pizza(30); //객체 pizza 생성 //매개변수로 전달 radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;

	return 0;
}