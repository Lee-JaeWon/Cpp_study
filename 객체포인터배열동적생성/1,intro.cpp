/*
	Writer : �����
	Study C++
	��ü �����Ϳ� ��ü �迭, ��ü�� ���� ����
*/

//��ü ������ ���� �� �迭 ����
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

	Circle circleArray[3]; // --> �⺻ ���������� Ȯ��
	// Circle circleArray[3](3) --> ��������;

	circleArray[0].setRadius(10); // (.) �����ڸ� ����Ͽ� ������ ���
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	//�Ǵٸ� ��ü �迭 �ʱ�ȭ ���
	// Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0; i < 3; i++)
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;

	cout << endl;

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) { //��ü �����ͷ� �迭 ����
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++; //�迭�� ���� ����
	}
}