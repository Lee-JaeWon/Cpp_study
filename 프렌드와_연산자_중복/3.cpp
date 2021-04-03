//전위_연산자_++_작성, 후위 연산자
//속도 고려 가능
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator++(); //전위 연산자
	const Power operator++(int dummy); //후위 연산자
};

void Power::show() {
	cout << "Kick=" << kick << ',' << "punch=" << punch << endl;
}
Power& Power::operator++() { //전위 연산자는 연산 후 할당
	++kick;
	++punch;
	return *this;
}
const Power Power::operator++(int x) { //후위 연산자는 할당 후 연산
	Power p = *this;
	kick++;
	punch++;

	return p;
}

int main() {

	Power a(3, 5), b;
	a.show();
	b.show();

	b = ++a;
	a.show();
	b.show();

	b = a++;
	a.show();
	b.show(); // 결과 확인시 할당이 우선이기에 연산이 안된것을 확인 가능함

}