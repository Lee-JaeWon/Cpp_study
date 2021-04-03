// 고급프로그래밍 과제
// friend 와 연산자 중복
#include <iostream>
using namespace std;

class Box; // forward reference를 막기 위한 선언문
void printBox(Box& box); // printBox() 함수 선언

class Box {
	double length, width, height;
	bool isEmpty;
public:
	Box(double w, double l, double h) : length(w), width(l), height(h) {
		isEmpty = true;
	}
	Box() : length(0), width(0), height(0) {
		isEmpty = true;
	}
	double getVolume() {
		return length * width * height;
	}

	// 1번 문제
	Box operator +(Box& op2);
	// 2번 문제
	bool operator ==(Box& op2);
	// 3번 문제
	friend void printBox(Box& box); // 프렌드 함수 선언
};

// 1번 문제
Box Box::operator +(Box& op2) {
	Box tmp;
	tmp.length = this->length + op2.length;
	tmp.width = this->width + op2.width;
	tmp.height = this->height + op2.height;

	return tmp;
}
// 2번 문제
bool Box::operator ==(Box& op2) {
	if (getVolume() == op2.getVolume()) {
		return true;
	}
	else return false;
}

// 3번 문제
void printBox(Box& box) { // 외부 함수
	cout << "Box Length: " << box.length << endl;
	cout << "Box Width: " << box.width << endl;
	cout << "Box Height: " << box.height << endl;
	cout << "Box Volume: " << box.getVolume() << endl;
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20), c;
	c = a + b;

	cout << (a == b) << endl;

	printBox(c);
}