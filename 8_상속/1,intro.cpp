/*
	Writer : 이재원
	Study C++
	상속

*/

//protected 멤버에 대한 접근, 상속
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

// 파생 클라스
// protected 접근 가능
class ColorPoint : public Point { // 상속 선언 // 상속 접근 지정은 Public
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

	//p.x = 5; // 컴파일 에러
	//p.y = 5; // 컴파일 에러
	// -> protected 멤버 접근 불가

	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("Blue");

	ColorPoint cp2;
	cp2.set(3, 4);
	cp2.setColor("Blue");
	cout << ((cp.equals(cp2)) ? "true" : "false") << endl;

}