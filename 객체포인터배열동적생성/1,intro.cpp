/*
	Writer : 이재원
	Study C++
	객체 포인터와 객체 배열, 객체의 동적 생성
*/

//객체 포인터 선언 및 배열 접근
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
	int radius;
public:
	Circle();
	Circle(int);
	void setRadius(int);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return pi * radius * radius;
}

int main() {

	Circle circleArray[3]; // --> 기본 생성자임을 확인
	// Circle circleArray[3](3) --> 구문오류;

	circleArray[0].setRadius(10); // (.) 연산자를 사용하여 생성자 사용
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	//또다른 객체 배열 초기화 방법
	// Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;

	cout << endl;

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) { //객체 포인터로 배열 접근
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++; //배열의 다음 원소
	}
}