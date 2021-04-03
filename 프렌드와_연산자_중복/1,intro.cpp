// 연산자 작성
#include <iostream>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int x1 = 0, int y1 = 0) {
		this->x = x1; this->y = y1;
	}
	void show() {
		cout << "(" << this->x << "," << this->y << ")" << endl;
	}
	Point operator+ (const Point& b);
};

Point Point::operator+ (const Point& b) {
	Point tmp;
	tmp.x = this->x + b.x;
	tmp.y = this->y + b.y;

	return tmp;
}

int main() {
	Point a(3, 5), b(2, 0), c;
	c = a + b;
	c.show();
}