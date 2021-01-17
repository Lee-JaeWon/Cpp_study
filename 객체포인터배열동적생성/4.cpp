// 배열 동적 생성 및 포인터
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

	cout << "생성할 원의 개수를 입력하세요 --> ";
	int n, radius;
	cin >> n;
	if (n <= 0) return 0;

	cout << endl;

	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
		cout << pArray[i].getArea() << endl; //getArea()의 다양한 사용법
	}

	cout << endl;

	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {  //getArea()의 다양한 사용법
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++; // 다음 원소의 주소로 증가
	}
	cout << endl << endl << "면적이 100에서 200사이인 원의 개수는 " << count << endl;

	delete[] pArray; //객체 배열 소멸

}