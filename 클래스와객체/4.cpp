//��� ���� �ʱ�ȭ�� ���� ������ Ȱ��
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int, int);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }

};
//���� ������, ���ο� ����
Point::Point() : Point(0, 0) {}

// -> �⺻
//Point::Point() { x = 0; y = 0; }


//Ÿ�� ������, ���ο� ����
Point::Point(int a, int b) //��� ���� x=a, y=b�� �ʱ�ȭ
	: x(a), y(b) {}

// -> �⺻
//Point::Point(int a, int b) { x = a; y = b; }

int main() {

	Point origin; //���ӻ����� -> Ÿ�� �����ڷ� (0, 0) ����
	Point target(10, 20);
	origin.show();
	target.show();

	return 0;
}