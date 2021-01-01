//���� ������
//�ζ��� �Լ�(inline function)
//����ü�� Ŭ������ ������
	//��������δ� ����
	//cpp Ŭ������ ����Ʈ ���� ������ private
	//����ü ����� ����Ʈ ���� ������ public
#include <iostream>
using namespace std;

#define pi 3.14

struct StructCircle {
private:
	int radius;
public:
	StructCircle();
	StructCircle(int);
	double getArea();
};

StructCircle::StructCircle() : StructCircle(1) {}
StructCircle::StructCircle(int r) { radius = r; }

inline double StructCircle::getArea() {
	return pi * radius * radius;
}

int main() {

	StructCircle Basic;
	cout << "�⺻ ������ " << Basic.getArea() << endl;

	StructCircle waffle(3);
	cout << "waffle ������ " << waffle.getArea() << endl;

}