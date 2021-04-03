// ������α׷��� ����
// friend �� ������ �ߺ�
#include <iostream>
using namespace std;

class Box; // forward reference�� ���� ���� ����
void printBox(Box& box); // printBox() �Լ� ����

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

	// 1�� ����
	Box operator +(Box& op2);
	// 2�� ����
	bool operator ==(Box& op2);
	// 3�� ����
	friend void printBox(Box& box); // ������ �Լ� ����
};

// 1�� ����
Box Box::operator +(Box& op2) {
	Box tmp;
	tmp.length = this->length + op2.length;
	tmp.width = this->width + op2.width;
	tmp.height = this->height + op2.height;

	return tmp;
}
// 2�� ����
bool Box::operator ==(Box& op2) {
	if (getVolume() == op2.getVolume()) {
		return true;
	}
	else return false;
}

// 3�� ����
void printBox(Box& box) { // �ܺ� �Լ�
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