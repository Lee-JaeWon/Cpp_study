//접근 지정자
//인라인 함수(inline function)
//구조체와 클래스의 차이점
	//기능적으로는 동일
	//cpp 클래스의 디폴트 접근 지정은 private
	//구조체 멤버의 디폴트 접근 지정은 public
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
	cout << "기본 면적은 " << Basic.getArea() << endl;

	StructCircle waffle(3);
	cout << "waffle 면적은 " << waffle.getArea() << endl;

}