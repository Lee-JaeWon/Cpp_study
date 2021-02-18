// Chapter 6, Example 6-6
// 중복 생성자, 디폴트 매개 변수
#include <iostream>
using namespace std;

class MyVector {
	int* p;
	int size;
public:
	MyVector(int n = 100);
	~MyVector();
};

MyVector::MyVector(int n) {
	p = new int[n];
	size = n;
}
MyVector::~MyVector() {
	delete[] p;
}

int main() {

	MyVector* v1, * v2;
	v1 = new MyVector();
	v2 = new MyVector(1024);

	delete v1;
	delete v2;
}