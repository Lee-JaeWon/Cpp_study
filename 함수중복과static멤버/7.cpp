// Chapter 6, Example 6-11
// static ����� ������ �������� ���
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
private:
	static int num_of_Circles;
	int radius;
public:
	Circle(int r = 1);
	~Circle();
	double getArea();
	static int getNum_of_Circles() {
		return num_of_Circles;
	}
};

Circle::Circle(int r) {
	this->radius = r;
	num_of_Circles++;
}
Circle::~Circle() {
	num_of_Circles--;
}
double Circle::getArea() {
	return pi * radius * radius;
}

int Circle::num_of_Circles = 0;

int main() {

	Circle* p = new Circle[10];
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNum_of_Circles() << endl;

	delete[] p;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNum_of_Circles() << endl;

	Circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNum_of_Circles() << endl;

	Circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNum_of_Circles() << endl;
}
