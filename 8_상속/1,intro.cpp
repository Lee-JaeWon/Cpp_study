/*
	Writer : �����
	Study C++
	���

*/

//protected ����� ���� ����, ���
#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
	int x, y;
public:
	void set(int x, int y);
	void showPoint();

};

void Point::set(int x, int y) {
	this->x = x; this->y = y;
}
void Point::showPoint() {
	cout << "(" << x << "," << y << ")" << endl;
}

// �Ļ� Ŭ��
// protected ���� ����
class ColorPoint : public Point { // ��� ���� // ��� ���� ������ Public
	string color;
public:
	void setColor(string color);
	void showColorPoint();
	bool equals(const ColorPoint& p);
};

void ColorPoint::setColor(string color) {
	this->color = color;
}
void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();
}
bool ColorPoint::equals(const ColorPoint& p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	else return false;
}

int main() {
	Point p;
	p.set(2, 3);

	//p.x = 5; // ������ ����
	//p.y = 5; // ������ ����
	// -> protected ��� ���� �Ұ�

	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Blue");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Blue");
	cout << ((cp.equals(cp2)) ? "true" : "false") << endl;

}