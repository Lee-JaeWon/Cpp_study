/*
	Writer : �����
	Study C++
	Ŭ�����Ͱ�ü
*/

//������ Ŭ������ ��ü ���� �� Ȱ��
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
	Circle donut; //��ü donut ����
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut�� ������ " << area << endl;

	Circle pizza; //��ü pizza ����
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza�� ������ " << area << endl;

	return 0;
}