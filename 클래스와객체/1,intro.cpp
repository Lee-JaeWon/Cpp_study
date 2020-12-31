/*
	Writer : 이재원
	Study C++
	클래스와객체
*/

//간단한 클래스의 객체 생성 및 활용
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea()
{
	return pi*radius*radius;
}

int main()
{
	Circle donut; //객체 donut 생성
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut의 면적은 " << area << endl;

	Circle pizza; //객체 pizza 생성
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl;

	return 0;
}