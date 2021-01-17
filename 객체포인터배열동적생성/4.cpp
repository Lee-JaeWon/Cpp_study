// �迭 ���� ���� �� ������
#include <iostream>
using namespace std;

#define pi 3.14

class Circle {
	int radius;
public:
	Circle();
	~Circle();
	void setRadius(int);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}
Circle::~Circle() {}
void Circle::setRadius(int r) {
	radius = r;
}
double Circle::getArea() {
	return pi * radius * radius;
}

int main() {

	cout << "������ ���� ������ �Է��ϼ��� --> ";
	int n, radius;
	cin >> n;
	if (n <= 0) return 0;

	cout << endl;

	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
		cout << pArray[i].getArea() << endl; //getArea()�� �پ��� ����
	}

	cout << endl;

	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {  //getArea()�� �پ��� ����
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++; // ���� ������ �ּҷ� ����
	}
	cout << endl << endl << "������ 100���� 200������ ���� ������ " << count << endl;

	delete[] pArray; //��ü �迭 �Ҹ�

}