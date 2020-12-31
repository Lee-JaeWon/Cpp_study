//멤버 변수 초기화와 위임 생성자 활용
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int, int);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }

};
//위임 생성자, 서두에 생성
Point::Point() : Point(0, 0) {}

// -> 기본
//Point::Point() { x = 0; y = 0; }


//타겟 생성자, 서두에 생성
Point::Point(int a, int b) //멤버 변수 x=a, y=b로 초기화
	: x(a), y(b) {}

// -> 기본
//Point::Point(int a, int b) { x = a; y = b; }

int main() {

	Point origin; //위임생성자 -> 타겟 생성자로 (0, 0) 전달
	Point target(10, 20);
	origin.show();
	target.show();

	return 0;
}